#pragma once
#include "command.h"
using namespace std;

class ReturnItem : Command
{
public:
  ReturnItem(Library library, int id, Item item);
  ~ReturnItem();
  
  int id;
  Item item;
  
  void execute();
};

