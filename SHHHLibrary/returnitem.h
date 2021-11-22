#pragma once
class ReturnItem
{
public:
  ReturnItem(Library library, int id, Item item);
  ~ReturnItem();
  int id;
  Item item;
  
};

