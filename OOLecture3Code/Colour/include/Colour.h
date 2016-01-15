#ifndef COLOUR_H__
#define COLOUR_H__
#include <string>
class Colour
{
	public :

		/// \brief constructor passing in r g b components
		/// @param[in]  _r red component
		/// @param[in]  _g green component
		/// @param[in]  _b blue component
		/// @param[in]  _a the alpha component

     Colour(
                  const float _r=0.0,
                  const float _g=0.0,
                  const float _b=0.0,
                  const float _a=1.0
                  ) :
                     m_r(_r),
                     m_g(_g),
                     m_b(_b),
                     m_a(_a){;}
		/// accesors
		/// @brief get the red component
		/// @returns the red component
		inline float Red() const {return m_r;}
		/// @brief get the green component
		/// @returns the green component
		inline float Green() const {return m_g;}
		/// @brief get the blue component
		/// @returns the blue component
		inline float Blue() const {return m_b;}
		/// @brief get the alpha component
		/// @returns the alpha component
		inline float Alpha() const {return m_a;}


		/// mutators
		/// @brief set the red component
		/// @param[in] the red component
		inline void Red(
										float _r
									 ){m_r=_r;}

		/// @brief set the green component
		/// @param[in] the green component
		inline void Green(
											 float _g
										 ){m_g=_g;}

		/// @brief set the blue component
		/// @param[i] the blue component
		inline void Blue(
											float _b
										) {m_b=_b;}

		/// @brief get the alpha component
		/// @param[in] the alpha component
		inline void Alpha(
											float _a
										 ){m_a=_a;}

    /// @brief method to clamp the colour values
    /// between a min and max range
    /// Originally written by Eduard Zell MSc CAVE 2010
    /// @param [in] _min the minimum intensity value to clamp to
    /// @param [in] _max the max intensisty value to clamp to
		void Clamp(
								float _min,
								float _max
							);
    /// @brief mix the current colour with the colour passed in
    /// by _in ammount
    /// @param[in] _in the colour to mix
    /// @param[in] _amount the amount to mix this value ranges from 0
    /// don't mix to 1 full _in
		void Mix(
							const Colour &_in,
							float _amount
						);
    /// @brief print out the contents of the colour class
    void Print()const ;

    /// @brief destructor
    ~Colour();
    inline void setName(const std::string &_n){ m_name=_n; }
    inline std::string getName() const { return m_name;}


		private :
			/// @brief the red colour component
      float m_r;
			/// @brief the green colour component
      float m_g;
			/// @brief the blue colour component
      float m_b;
			/// @brief the alpha colour component
      float m_a;

      /// @ the name of the class
      std::string m_name;


};

#endif



















