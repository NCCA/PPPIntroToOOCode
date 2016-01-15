#include <iostream>

int main()
{
int a=0;
	{
		int a=2;
		std::cout<<a<<"\n";
			{
			int a=3;
			std::cout<<a<<"\n";
				{
				int a=4;
				std::cout<<a<<"\n";

				}
			}
	}
		std::cout<<a<<"\n";
}