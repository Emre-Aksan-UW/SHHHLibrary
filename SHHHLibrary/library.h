#pragma once
#include <fstream>
#include "factory.h"
#include "client.h"
#include "catalogcontainer.h"
#include "hashtable.h"
#define MAX_ITEMS 1000    //?

using namespace std;

class Library {
  public:
    Library();
    Library(string);
    ~Library();

    void readClients(istream&);
    void readItems(istream&);
    void readCommands(istream&);
    bool lookForClient(int);
    Client getClient(const int) const;
    void displayAllBooks();
    void displayClientHistory(int);
    void checkOut(int, Item);
    void returnItem(int, Item);

  private:
    CatalogContainer bookDepartment[MAX_ITEMS];
    HashTable clientRegister;
    Factory factory;
    string name;
    // string[] bookGuide; //for hashing, dont worry about this for now (davion)
};
