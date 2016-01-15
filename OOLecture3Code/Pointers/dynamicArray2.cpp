#include <iostream>
#include <cstdlib>
#include <boost/foreach.hpp>

int main()
{
	/// \brief our array pointer
	int *array;
	/// \brief used to hold the size of the array
	int size;
	std::cout<<"Please enter size of the array ";
	// read in the size
	std::cin >>size;

	/// now allocate some memory for the array
	array = new int[size];

	// now fill with values
	for(int i=0; i<size; ++i)
	{
		array[i]=i;
	}
	int *current=&array[size-1];
	int *end=&array[0];

	while(current !=end)
	{
		std::cout<<current<<" "<<end<<" "<< *(current--)<<"\n";
  }

	std::cout<<std::endl;
	// finally we need to free the memory
//	delete [] array;

}










