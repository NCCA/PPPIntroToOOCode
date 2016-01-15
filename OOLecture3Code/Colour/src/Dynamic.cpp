#include <iostream>
#include <cstdlib>

#include "Colour.h"

int main()
{

Colour *current;


current = new Colour(1,0,0);
current->setName("red");
//(*current).setName("red");

current->Print();

delete current;


current = new Colour(1,1,1);
current->setName("white");
current->Print();

delete current;

}

