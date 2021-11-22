#pragma once
#iclude "item.h"
using namespace std;

class CatalogContainer
{
  public:
    CatalogContainer();
    ~CatalogContaienr();
  
    Item[] books;
  
    void checkOut(int);
    void returnItme(int);
    void displayAllBooks();
  
  private:
    int hashIn(Item)
};
