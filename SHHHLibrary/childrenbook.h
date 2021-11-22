#pragma once
#include "Book.h"

using namespace std;

class ChildrenBook : public Book {
public:
  ChildrenBook();
  ChildrenBook(const ChildrenBook&);
  ~ChildrenBook();
  virtual void setData(istream&);
  virtual void display() const;
  virtual void displayTitle() const;
  virtual bool operator==(const Item&) const;
  
private:
  string author;
};
