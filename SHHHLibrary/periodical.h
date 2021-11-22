#pragma once
#include "Book.h"

using namespace std;

class Periodical : Book {
public:
  Periodical();
  Periodical(const Periodical&);
  ~Periodical();
  virtual void setData(istream&);
  virtual void display() const;
  virtual void displayTitle() const;
  virtual bool operator==(const Item&) const;
  
private:
  int month;
};

