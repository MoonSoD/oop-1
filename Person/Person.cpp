#include "Person.h"

Person::Person(string name, string surname, string emailAddress)
{
    this->name = name;
    this->surname = surname;
    this->emailAddress = emailAddress;
}

string Person::GetName()
{
    return this->name;
}

string Person::GetSurname()
{
    return this->surname;
}

string Person::GetEmailAddress()
{
    return this->emailAddress;
}

