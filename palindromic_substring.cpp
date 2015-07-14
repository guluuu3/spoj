#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;


int main(){
    string s;
    char x;
    cin>>s;
    cout<<"You entered "<<s<<endl;
    char news[s.length()];
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z')
            news[i]=s[i]+32; //to lowercase
        else news[i]=s[i];
    }
    cout<<"modified string is"<<endl;
    for(int i=0;i<s.length();i++)
        cout<<news[i];
    cout<<endl;
    cout<<"palindromes in the string are"<<endl;
    for(int i=1;i<s.length();i++){
        int fwd=i+1,bwd=i-1;
        while(news[i]==news[fwd])fwd++;
        while(news[i]==news[bwd])bwd--;
            //include all the characters which are same as central character, in either side of center character

        while(news[bwd]==news[fwd] && bwd>=0 && fwd<s.length()){
            cout<<s.substr(bwd,fwd-bwd+1)<<endl;

        }
    }
    return 0;
}
