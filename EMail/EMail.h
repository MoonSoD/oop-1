#include <iostream>
#include <string>

#include "Document.h"
#include "Person.h"

using namespace std;

#pragma once
class EMail
{
    private:
        Person from;
        Person to;
        Document* documents;

    public:
        EMail(const Person& from, const Person& to, Document* documents);
        Person GetFrom();
        Person GetTo();
        Document* GetDocuments();
};