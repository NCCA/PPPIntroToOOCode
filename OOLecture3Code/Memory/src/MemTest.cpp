#include <iostream>
#include <cstdlib>

#include "Mem.h"

int main()
{

Mem a(4);
for (int i=0; i<4; ++i)
{
  a.Set(i,i);
}

Mem b=a;
Mem c(a);
b.Set(0,99);
c.Set(0,299);

std::cout<<"Printing A"<<std::endl;
a.Print();
std::cout<<"Printing b"<<std::endl;
b.Print();
std::cout<<"Printing c"<<std::endl;
c.Print();
return EXIT_SUCCESS;
}




