#pragma once
#include "library.h"
class command
{
  public:
    Command();
    Command(const Command&);
    ~Command();
  
    void execute();
    void setData();
  private:
    Library library;
    
};

