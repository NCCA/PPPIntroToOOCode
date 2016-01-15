#include "Global.h"
/// @file Global.cpp
/// @brief implementation of singleton

Global* Global::s_pinstance = 0;// initialize pointer

Global* Global::Instance() 
{
  if (s_pinstance == 0)  // is it the first call?
  {
    std::cout<<"new instance\n";
    s_pinstance = new Global; // create sole instance
  }
  std::cout<<"existing object\n";
  return s_pinstance; // address of sole instance
}



void Global::SetName(const std::string &_name)
{
  m_name=_name;
}

std::string Global::GetName()
{
  return m_name;
}

void Global::SetAge(int _age)
{
  m_age=_age;
}

int Global::GetAge()
{
  return m_age;
}
