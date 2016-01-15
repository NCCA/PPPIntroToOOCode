#ifndef VEC3_H_
#define VEC3_H_
#include <ostream>


//----------------------------------------------------------------------------------------------------------------------
/// @brief define EPSILON for floating point comparison
//----------------------------------------------------------------------------------------------------------------------
#ifndef EPSILON
  const float EPSILON = 0.001f;
#endif

//----------------------------------------------------------------------------------------------------------------------
/// @brief FCompare macro used for floating point comparision functions
//----------------------------------------------------------------------------------------------------------------------
  #define FCompare(a,b) \
      ( ((a)-EPSILON)<(b) && ((a)+EPSILON)>(b) )


class Vec3
{
  public :
  Vec3(
        float _x=0.0f,
        float _y=0.0f,
        float _z=0.0
      ) :
          m_x(_x),
          m_y(_y),
          m_z(_z){;}
  /// @brief a copy ctor
  Vec3(const Vec3 &_v);
  /// @brief a method to get the data as a string
  /// @returns a formatted string [x,y,z] no newline
  std::string getString() const;
  /// @brief assignment operator
  Vec3 & operator=(const Vec3 &_rhs);
  /// @brief assignment operator from float
  Vec3 & operator=(float _rhs);
  /// @brief [] operator
  float & operator[](unsigned int _index);
  /// @brief function to test equality
  bool isEqual(const Vec3 &_rhs) const;
  /// @brief mult by Scalar
  /// @param[in} _s the value to scale components by
  Vec3 scale(float _s) const;
  private :

    union
    {
      struct
      {
        float m_x;
        float m_y;
        float m_z;
      };
      float m_array[3];
    };
};

/// @brief a free operator for insetion of the Vec3 class
/// @note this is not a friend so safe
std::ostream& operator<<(std::ostream& _output, const Vec3& _v);

/// @brief free operator for equality testing
bool operator ==(const Vec3 &_lhs, const Vec3 &_rhs) ;
/// @brief free operator for equality testing
bool operator !=(const Vec3 &_lhs, const Vec3 &_rhs);

Vec3 operator *(float _lhs, const Vec3 &_rhs);
Vec3 operator *(const Vec3 &_lhs, float _rhs);

#endif
