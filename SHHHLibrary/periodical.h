#pragma once
#include "Book"
using namespace std;

class Periodical : Book
{
  public:
    Periodical();
    ~Periodical();
  private:
    int month;
};

