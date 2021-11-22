#pragma once
#include "factory.h"
#include "client.h"
#include "catalogcontainer.h"
using namespace std;

class Library
{
  public:
    Library();
    ~Library();
  private:
    CatalogContainer[] bookDepartment;
    Client[] clientRegister;
    Factory bookFactory;
    string[] bookGuide; //for hashing, dont worry about this for now (davion)
};
