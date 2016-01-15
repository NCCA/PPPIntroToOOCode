#ifndef VEC3_H_
#define VEC3_H_
#include <ostream>

//----------------------------------------------------------------------------------------------------------------------
/// @brief define EPSILON for floating point comparison
//----------------------------------------------------------------------------------------------------------------------
#ifndef EPSILON
  const float EPSILON = 0.000001f;
#endif

//----------------------------------------------------------------------------------------------------------------------
/// @brief FCompare macro used for floating point comparision functions
//----------------------------------------------------------------------------------------------------------------------
  #define FCompare(a,b) \
      ( ((a)-EPSILON)<(b) && ((a)+EPSILON)>(b) )




class Vec3
{
  public :
  /// @brief ctor
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

  /// @brief insetion operator
  /// @note this is a friend so breaks encapsulation
  friend std::ostream& operator<<(std::ostream& _output, const Vec3& _v);
  /// @brief assignment operator
  Vec3 & operator=(const Vec3 &_rhs);
  /// @brief assignment operator from float
  Vec3 & operator=(float _rhs);
  /// @brief [] operator
  float & operator[](unsigned int _index);
  /// @brief == operator
  bool operator==(const Vec3 &_rhs);
  /// @brief != operator
  bool operator!=(const Vec3 &_rhs);
  /// @brief * float operator
  Vec3  operator*(float _rhs) const;
  /// @brief mult by Scalar
  /// @param[in} _s the value to scale components by
  Vec3 scale(float _s) const;

  private :
    /// @brief out data wrapped in a union to allow
   /// different access modes
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

Vec3 operator *(float _lhs, const Vec3 &_rhs);


#endif
