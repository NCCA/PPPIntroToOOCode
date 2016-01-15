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
		std::cout<<division(5,0)<<"\n";
	}

	catch(const char *msg)
	{
		std::cerr << msg << std::endl;
	}
}