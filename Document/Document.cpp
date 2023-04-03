#include "Document.h"

Document::Document(string name, string type)
{
    this->name = name;
    this->type = type;
}

string Document::GetName()
{
    return this->name;
}

string Document::GetType()
{
    return this->type;
}