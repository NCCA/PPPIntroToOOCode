#include <iostream>
#include <cstdlib>

#include "Global.h"

void SetData()
{
  Global *data=Global::Instance();
  data->SetName("Jon");
  data->SetAge(45);
}

void PrintData()
{
  Global *data=Global::Instance();
  std::cout<<"Name = "<<data->GetName()<<"\n";
  std::cout<<"Age = "<<data->GetAge()<<"\n";
}

int main()
{
PrintData();
SetData();
PrintData();
return EXIT_SUCCESS;
}
