#include "Vec3.h"
#include <iostream>

int main()
{
  Vec3 a(1,2,3);
  Vec3 b;
  Vec3 c(2,3,4);
  std::cout<<"a "<<a<<" b "<<b<<" c "<<c<<"\n";
  std::cout<<"testing the assignment operator\n";
  b=c;
  std::cout<<b<<"\n";
  std::cout<<"testing the copy ctor\n";
  Vec3 copy(a);
  std::cout<<copy<<"\n";
  Vec3 fromFloat;
  fromFloat=0.5;
  std::cout<<fromFloat<<"\n";
  fromFloat=0.0;
  std::cout<<fromFloat<<"\n";

  std::cout<<"testing the  [] operator \n";
  fromFloat[1]=99.0;
  fromFloat[0]=2;
  fromFloat[2]=3;
  std::cout<<fromFloat[0]<<" "<<fromFloat[1]<<" "<<fromFloat[2] <<"\n";
  //fromFloat[5]=2;
  std::cout<<" testing equality operators \n";
  if(b==c)
    std::cout<<"b==c is true\n";
  else
    std::cout<<"b!=c \n";
  if(a==fromFloat)
    std::cout<<"a==fromFloat\n";
  else
    std::cout<<"a!=fromFloat\n";

  std::cout<<" testing != operator\n";
  if(b!=c)
    std::cout<<"b!=c is true\n";
  else
    std::cout<<"b==c \n";
  if(a!=fromFloat)
    std::cout<<"a!=fromFloat\n";
  else
    std::cout<<"a==fromFloat\n";
  std::cout<<"2*a="<<2*a<<" "<<a*2<<"\n";
}
