#ifndef OBJREADER
#define OBJREADER
#include <fstream>
#include <string>
#include <vector>

class ObjReader
{
  public :

    ObjReader(const std::string &_file);
    ~ObjReader();
    void parseFile();

    inline int getNumFaces() const {return m_faceCount;}
    inline int getNumVerts() const {return m_vertCount;}
    inline int getNumNormals() const {return m_normalCount;}
    inline int getNumUVs() const {return m_uvCount;}


  private :
    void tokenize(const std::string& _str,std::vector<std::string>& _tokens,const std::string& _delimiters = " ");

    std::fstream m_stream;
    int m_vertCount;
    int m_faceCount;
    int m_normalCount;
    int m_uvCount;

};

#endif
