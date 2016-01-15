#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "ObjReader.h"
int main(int argc, char **argv)
{
  try
  {
    ObjReader obj(argv[1]);
    obj.parseFile();
    std::cout<<"num Faces = "<<obj.getNumFaces()<<"\n";
    std::cout<<"num Verts = "<<obj.getNumVerts()<<"\n";
    std::cout<<"num Normals = "<<obj.getNumNormals()<<"\n";
    std::cout<<"num UV's' = "<<obj.getNumUVs()<<"\n";
  }

  catch(std::invalid_argument &msg)
  {
    std::cerr<<"Exception "<<msg.what()<<"\n";
  }





}
