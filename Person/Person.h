#include <iostream>
#include <string>

using namespace std;

#pragma once
class Person
{
    private:
        string name;
        string surname;
        string emailAddress;

    public:
        Person(string name, string surname, string emailAddress);

        string GetName();
        string GetSurname();
        string GetEmailAddress();
};