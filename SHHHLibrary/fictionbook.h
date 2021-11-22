#pragma once
#include "Book.h"

using namespace std;

class FictionBook : public Book {
public:
  FictionBook();
  FictionBook(const FictionBook&);
  ~FictionBook();
  virtual void setData(istream&);
  virtual void display() const;
  virtual void displayTitle() const;
  virtual bool operator==(const Item&) const; 
  
private:
  string author;
};

