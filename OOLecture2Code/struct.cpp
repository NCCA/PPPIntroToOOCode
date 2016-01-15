#include <iostream>
#include <cstdlib>

typedef struct Point
{
	float x;
	float y;
	float z;
	Point(float _x, float _y, float _z){
		x=_x;
		y=_y;
		z=_z;
	}
	void print(){std::cout<<"["<<x<<","<<y<<","<<z<<"]\n";}
}Point_t;

int main()
{
	Point p(2,3,4);
	p.print();
	return EXIT_SUCCESS;
}

