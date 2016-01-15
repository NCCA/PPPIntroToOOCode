#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include <iostream>
/// @file Global.h
/// @class Global
/// @brief a simple demonstration of a singleton pattern
/// @author Jon Macey
/// @date 18/10/2010

class Global
{
	public :
    /// @brief to return the instance of the class
    /// @returns the constructed class
		static Global* Instance();
    /// @brief mutator to set the name
    /// @param _name the value to set
		void SetName(
                  const std::string &_name
                );
    /// @brief accesor for the name attribute
    /// @returns the name attribute
		std::string GetName();
    /// @brief mutator to set the age attribute
    /// @param _age the age value to set
		void SetAge(
                int _age
               );
    /// @brief accesor for the age attribute
    /// @returns the age attribute
		int GetAge();
		
	private :
    /// @brief the instance of the class
    static Global* s_pinstance;
    /// @brief the name to be stored
		std::string m_name;
    /// @brief the age to be stored.
		int m_age;
    /// @brief private dtor so it can't be called
    inline ~Global(){;}
    /// @brief private ctor so it can't be called
    inline Global(){;}
    /// @brief private copy ctor so it can't be called
    inline Global(
                   const Global &_g
                 ){;}

};

#endif
