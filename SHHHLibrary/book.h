#pragma once
#include "item.h"
#include "client.h"

using namespace std;

class Book : public Item {
public:
    Book();
    Book(const Book&);
    ~Book();

    virtual void setData(istream&);
    virtual void display() const;
    virtual void displayTitle() const = 0;
    virtual Item* getItem() const;
    int getTitle();
    int getYear();
    Client* getClient();
    virtual bool operator==(const Item&) const = 0;


private:
    string title;
    int year;
    Client *client;
};

