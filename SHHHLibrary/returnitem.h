#pragma once
#include "command.h"
using namespace std;

class ReturnItem : public Command
{
public:
  ReturnItem(Library library, int id, Item item);
  ~ReturnItem();
  int id;
  Item item;
  
};

