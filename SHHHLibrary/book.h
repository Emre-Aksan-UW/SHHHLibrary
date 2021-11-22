#pragma once
#include <string>
#include client.h
#include item.h
using namespace std;

class Book : public Item
{
    public:
        Book();
        ~Book();

    private:
        string title;
        int year;
        Client *client;
};

