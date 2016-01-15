#include <iostream>
#include <cstdlib>

double division(int a, int b)
{
 if( b == 0 )
 {
		throw "Division by zero condition!";
 }
 return (a/b);
}


int main()
{


	try
	{
		std::cout<<division(25,5)<<"\n";
	}

	catch(const char *msg)
	{
		std::cerr << msg << std::endl;
	}



	try
	{
		std::cout<<division(25,0)<<"\n";
	}

	catch(const char *msg)
	{
		std::cerr << msg << std::endl;
	}


	try
	{
		std::cout<<division(33,7)<<"\n";
	}

	catch(const char *msg)
	{
		std::cerr << msg << std::endl;
	}


}