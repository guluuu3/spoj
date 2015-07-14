#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int line_num(char *filename){
    FILE *f;
    char c;
    int lines = 0;
    f = fopen(filename, "r");
    if(f == NULL) return (0);
    while((c = fgetc(f)) != EOF)
        if(c == '\n') lines++;
    fclose(f);
    if(c != '\n') lines++;
    return (lines);
}
int main(){
    FILE *f_text , *f_pattern;
    int found, text_ln=line_num("text.txt");
    f_text = fopen("text.txt", "r");
    fseek(f_text, 0, SEEK_END);
    int text_file_size = ftell(f_text);
    fclose(f_text);
    f_text = fopen("text.txt", "r");
    char *text;
    text = (char*)malloc (text_file_size+1);
    text[text_file_size]='\0';
    f_pattern = fopen ( "pattern.txt" , "r");
    fseek (f_pattern,0, SEEK_END);
    int pattern_file_size = ftell (f_pattern);
    fclose(f_pattern);
    f_pattern = fopen ( "pattern.txt" , "r");
    char *pattern;
    pattern = (char*)malloc (pattern_file_size+1);
    pattern[pattern_file_size]=0;
    if(f_pattern!= NULL){
        fgets(pattern, sizeof(char)+pattern_file_size, f_pattern);
    }
    int i, j, k;
    if(f_text != NULL && f_pattern!=NULL){
        for (;text_ln--;){
            fgets(text, sizeof(char)+text_file_size,f_text);

            for (i=0;i<text_file_size-pattern_file_size;i++){
                if (pattern[0]==text[i])
                    {
                    k=i;
                    for (j=0;j<pattern_file_size;j++){
                        if (pattern[j]==text[k])
                            {
                            k++;
                            if (j+1==pattern_file_size)

                                {
                                    printf("pattern found at index %d \n", i);
                                    found=1;
                                }
                        }
                        else break;
                    }
                }
            }
        }
    }
    fclose(f_text);
    fclose(f_pattern);
    if(found==1) printf ("The pattern was found.\n");
    else printf("The pattern wasn't found.\n");
    free (text);
    free (pattern);
    return (0);
}
