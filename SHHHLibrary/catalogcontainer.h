#pragma once
#include "item.h"
using namespace std;

class CatalogContainer {
  public:
    CatalogContainer();
    ~CatalogContainer();
  
    // Item[] books;
  
    void checkOut(int);
    void returnItme(int);
    void displayAllBooks();
  
  private:
    // int hashIn(Item)
};
