#include <iostream>

#include "Person.h"
#include "EMail.h"
#include "Document.h"

using namespace std;

int main()
{
    Person sender = Person("Štefan", "Melicher", "melicher.stefan@outlook.sk");
    Person receiver = Person("Radim", "Tvrdoň", "invoicing@weboard.me");

    Document timeReport = Document("clockify_report", "xlsx");
    Document invoice = Document("faktura_Stefan_Melicher_0010030623", "pdf");

    Document emailDocuments[2] = {timeReport, invoice};

    EMail email = EMail(sender, receiver, emailDocuments);

    cout << email.GetTo().GetEmailAddress() << endl;
    cout << email.GetDocuments()[1].GetName();
}