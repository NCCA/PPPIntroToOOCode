#include <iostream>
#include <cstdlib>

int main()
{
	/// \brief our array pointer
	int *array;
	/// \brief used to hold the size of the array
	unsigned int size;
	std::cout<<"Please enter size of the array ";
	// read in the size
	std::cin >>size;

	/// now allocate some memory for the array
	// array(void *) = malloc(size*sizeof(int));
	// int array[10] if we knew in advance size
	array = new int[size];
 	// now fill with values
	for(unsigned int i=0; i<size; ++i)
	{
		array[i]=i;
	}
	// print out
	for(unsigned int i=0; i<size; ++i)
	{
		std::cout<<array[i]<<" ";
	}

	std::cout<<std::endl;
	// finally we need to free the memory
	// in C free(array);
	delete [] array;

}
