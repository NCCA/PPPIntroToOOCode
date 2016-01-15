#include <iostream>
#include <cstdlib>

#include "Colour.h"

int main()
{

Colour red(1.0f);
red.setName("red");
Colour green(0.0f,1.0f);
green.setName("green");
Colour white(1.0f,1.0f,1.0f);
white.setName("white");
Colour mixed;
mixed.setName("mixed");
red.Print();
green.Print();
white.Print();
mixed.Print();
white.Mix(red,0.2);
white.Print();
mixed.Clamp(0.3,0.6);
mixed.Print();
white.Mix(red,2.2);

}
