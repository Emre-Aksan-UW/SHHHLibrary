#pragma once
#include "item.h"
#include "command.h"
using namespace std;

class CheckOut : public Command
{
  public;
    CheckOut(Library library, int id, Item item);
    ~CheckOut();
    int id;
    Item item;
    void execute(int, Item);
};

