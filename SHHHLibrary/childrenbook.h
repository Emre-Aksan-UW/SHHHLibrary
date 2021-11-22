#pragma once
#include <string>
#include book.h
using namespace std;

class ChildrenBook : public Book
{
public:
  ChildrenBook();
  ~ChildrenBook();

private:
  string author;
};

