#include "Vec3.h"
#include <iostream>
#include <cassert>

std::ostream& operator<<(
                         std::ostream& _output,
                         const Vec3 & _v
                        )
{
  return _output<<"["<<_v.m_x<<","<<_v.m_y<<","<<_v.m_z<<"]";
}

Vec3::Vec3(const Vec3 &_v)
{
  std::cout<<"copy ctor called\n";
  m_x=_v.m_x;
  m_y=_v.m_y;
  m_z=_v.m_z;
}

Vec3 & Vec3::operator=(const Vec3 &_rhs)
{
  std::cout<<"assignment operator called\n";
  m_x=_rhs.m_x;
  m_y=_rhs.m_y;
  m_z=_rhs.m_z;
  return *this;
}

Vec3 & Vec3::operator=(float _rhs)
{
  std::cout<<"assignment operator from float called\n";
  m_x=_rhs;
  m_y=_rhs;
  m_z=_rhs;
  return *this;
}

/// @brief [] operator
float & Vec3::operator[](unsigned int _index)
{
  assert(_index<3 );
  return m_array[_index];
}

bool Vec3::operator==(const Vec3 &_rhs)
{
  return FCompare(m_x,_rhs.m_x) &&
         FCompare(m_y,_rhs.m_y) &&
         FCompare(m_z,_rhs.m_z);
}

bool Vec3::operator!=(const Vec3 &_rhs)
{
  return !(*this==_rhs);
}

Vec3 Vec3::scale(float _s) const
{
  return Vec3(m_x*_s,m_y*_s,m_z*_s);
}
/// @brief * float operator
Vec3 Vec3::operator*(float _rhs) const
{
  return Vec3(m_x*_rhs,m_y*_rhs,m_z*_rhs);
}
Vec3 operator *(float _lhs, const Vec3 &_rhs)
{
  return _rhs.scale(_lhs);
}

