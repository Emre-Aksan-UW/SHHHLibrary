#pragma once
#include book.h
class ChildrenBook : public Book
{
public:
  ChildrenBook();
  ~ChildrenBook();

private:
  string author;
};

