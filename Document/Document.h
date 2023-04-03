#include <iostream>
#include <string>

using namespace std;

#pragma once
class Document
{
    private:
        string name;
        string type;

    public:
        Document(string name, string type);
        string GetName();
        string GetType();
};