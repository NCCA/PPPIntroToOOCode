#include "ObjReader.h"
#include <stdexcept>
#include <iostream>

ObjReader::ObjReader(const std::string &_filename)
{
  std::cerr<<"ObjReader Attempting to open "<<_filename<<"\n";
  m_stream.open(_filename.c_str(),std::ios::in);
  if (!m_stream.is_open())
  {
    throw std::invalid_argument("Unable to Open File");
  }
  else
  {
    std::cerr<<"file Opened\n";
  }
  m_normalCount=0;
  m_vertCount=0;
  m_faceCount=0;
  m_uvCount=0;
}


ObjReader::~ObjReader()
{
  std::cerr<<"ObjReader dtor called closing file\n";
  m_stream.close();
}

void ObjReader::parseFile()
{
  std::string lineBuffer;
  std::vector <std::string> tokens;
  while(!m_stream.eof())
  {
    // grab a line from the stream
    std::getline(m_stream,lineBuffer,'\n');
    // must clear the tokens before each parse
    tokens.clear();
    // now split it into tokens based on the spaces
    tokenize(lineBuffer,tokens," \n");
    if(tokens.size() !=0)
    {
      // now check for the first line token and add
      if(tokens[0]=="v")
      {
        ++m_vertCount;
        float x=atof(tokens[1].c_str());
        float y=atof(tokens[2].c_str());
        float z=atof(tokens[3].c_str());
        std::cout<<x<<" "<<y<<" "<<z<<"\n";

      }
      else if(tokens[0]=="vn")
      {
        ++m_normalCount;
      }
      else if(tokens[0]=="vt")
      {
        ++m_uvCount;
      }
      else if(tokens[0]=="f")
      {
        ++m_faceCount;
      }
    }
  }
}

void ObjReader::tokenize(const std::string& _str,std::vector<std::string>& _tokens,const std::string& _delimiters)
{
  // Skip delimiters at beginning.
  std::string::size_type lastPos = _str.find_first_not_of(_delimiters, 0);
  // Find first "non-delimiter".
  std::string::size_type pos     = _str.find_first_of(_delimiters, lastPos);

  while (std::string::npos != pos || std::string::npos != lastPos)
  {
    // Found a token, add it to the vector.
    _tokens.push_back(_str.substr(lastPos, pos - lastPos));
    // Skip delimiters.  Note the "not_of"
    lastPos = _str.find_first_not_of(_delimiters, pos);
    // Find next "non-delimiter"
    pos = _str.find_first_of(_delimiters, lastPos);
  }
}


