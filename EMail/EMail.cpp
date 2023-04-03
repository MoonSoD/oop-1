#include "EMail.h"
#include "Person.h"

EMail::EMail(const Person& from, const Person& to, Document* documents): from(from), to(to)
{
    this->from = from;
    this->to = to;
    this->documents = documents;
}

Person EMail::GetFrom() 
{
    return this->from;
}

Person EMail::GetTo()
{
    return this->to;
}

Document* EMail::GetDocuments()
{
    return this->documents;
}

