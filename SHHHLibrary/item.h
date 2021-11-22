#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Item {
public:
    Item();
    Item (const Item&);

    virtual ~Item();
    virtual void setData(istream& ) = 0;
    virtual void display() const = 0;        //display all items
    virtual void displayTitle() const = 0;
    virtual Item* getItem() const = 0;
    void setMaxCopyCount(const int);
    void incrementCopyCount();
    void decrementCopyCount();
    int getCatalog();
    int getOutOfCatalog();
    virtual bool operator==(const Item&) const = 0;

private:
    int maxCopyCount;
    int currCopyCount;
};

