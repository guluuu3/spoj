#include <iostream>
using namespace std;
class B1
{
public:
  B1()
  {
    cout<<"Construct B1"<<endl;
  }

  virtual ~B1()
  {
    cout<<"Destruct B1"<<endl;
  }
};

class B2
{
public:
  B2()
  {
    cout<<" Constructor B2"<<endl;
  }

  virtual ~B2()
  {
    cout<<"Destruct B2"<<endl;
  }
};

class D : public B2 , public B1
{
public:
  D()
  {
    cout<<"Construct D"<<endl;
  }

  virtual ~D()
  {
    cout<<"Destruct D"<<endl;
  }
};



int main(int argc, char **argv)
{
  D b;

  return 0;
}
