#pragma once
#include "command.h"
using namespace std;

class ReturnItem : Command
{
public:
  ReturnItem();
  ~ReturnItem();
  
  int id;
  Item item;
  
  void execute();
};

