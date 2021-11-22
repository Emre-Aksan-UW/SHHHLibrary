#pragma once
#include "item.h"
#include "command.h"
using namespace std;

class CheckOut : Command
{
  public;
    CheckOut();
    ~CheckOut();
    
    int id;
    Item item;
    
    void execute(int, Item);
};

