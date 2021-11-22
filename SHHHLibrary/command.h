#pragma once
#include "library.h"

class Command
{
  public:
    Command();
    Command(const Command&);
    ~Command();
  
    virtual void execute();
    virtual void setData();
  private:
    Library library;
    
};

