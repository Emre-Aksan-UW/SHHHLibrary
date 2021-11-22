#pragma once
#include "item.h"
using namespace std;

class checkout
{
  public;
    CheckOut(Library library, int id, Item item);
    ~CheckOut();
    int id;
    Item item;
  
  private:
    void execute(int, Item)
};

