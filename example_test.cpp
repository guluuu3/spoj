#include <iostream>
#include <map>
#include <string>

int main ()
{
  map <string,int> mymap;
  mymap["gulshan"]=1;
  cout<<mymap["gulshan"];

  //std::cout << "mymap now contains " << mymap.size() << " elements.\n";

  return 0;
}
