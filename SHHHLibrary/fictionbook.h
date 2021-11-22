#pragma once
#include "Book.h"
using namespace std;

class FictionBook : public Book
{
  public:
    FictionBook();
    ~FictionBook();
  
  private:
    string author;
};

