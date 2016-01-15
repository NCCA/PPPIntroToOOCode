#include "Mem.h"
#include <iostream>
#include <cassert>

Mem::Mem(
         int _size
        )
{
  std::cout<<"ctor called\n";
  // allocate a new block of memory
  m_mem = new int[_size];
  // retain the size of the allocated block
  m_size=_size;
}

Mem::Mem(
          const Mem &_m
        )
{
  std::cout<<"Copy ctor Called\n";
  m_size=_m.m_size;
  // allocate new memory
  m_mem = new int[m_size];
  // now copy the data from the original
//  for(int i=0; i<m_size; ++i)
//  {
//    m_mem[i]=_m.m_mem[i];
//  }
  memcpy(m_mem,_m.m_mem,sizeof(int)*m_size);

  //  m_size=_m.m_size;
//  m_mem=_m.m_mem;
}

Mem::~Mem()
{
  std::cout<<"dtor called\n";
  if(m_mem !=0)
  {
    delete [] m_mem;
  }
}


void Mem::Print()
{
  for(int i=0; i<m_size; ++i)
  {
    std::cout<<&m_mem[i]<<" "<<m_mem[i]<<std::endl;
  }
}
void Mem::Set(
               int _offset,
               int _value
             )
{
  assert(_offset<m_size);
  m_mem[_offset]=_value;
}
