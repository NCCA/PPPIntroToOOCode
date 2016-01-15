#include "Vec3.h"
#include <sstream>
#include <iostream>
#include <cassert>
std::string Vec3::getString() const
{
  std::stringstream string;
  string<<"["<<m_x<<","<<m_y<<","<<m_z<<"]";
  return string.str();

}

std::ostream& operator<<(
                         std::ostream& _output,
                         const Vec3 &_v
                        )
{
  return _output<<_v.getString();
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

//----------------------------------------------------------------------------------------------------------------------
/// @brief FCompare macro used for floating point comparision functions
//----------------------------------------------------------------------------------------------------------------------
  #define FCompare(a,b) \
      ( ((a)-EPSILON)<(b) && ((a)+EPSILON)>(b) )

bool Vec3::isEqual(const Vec3 &_rhs) const
{
  return FCompare(m_x,_rhs.m_x) &&
         FCompare(m_y,_rhs.m_y) &&
         FCompare(m_z,_rhs.m_z);
}

bool operator ==(const Vec3 &_lhs, const Vec3 &_rhs)
{
  return _lhs.isEqual(_rhs);
}

bool operator !=(const Vec3 &_lhs, const Vec3 &_rhs)
{
  return !_lhs.isEqual(_rhs);
}

Vec3 Vec3::scale(float _s) const
{
  return Vec3(m_x*_s,m_y*_s,m_z*_s);
}

Vec3 operator *(float _lhs, const Vec3 &_rhs)
{
  return _rhs.scale(_lhs);
}

Vec3 operator *(const Vec3 &_lhs,float _rhs)
{
  return _lhs.scale(_rhs);
}
