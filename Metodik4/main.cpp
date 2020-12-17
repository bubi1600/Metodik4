#include <iostream>
#include "Email.h"
#include "MailBox.h"

template <typename T >
void show(const T& type)
{
    for (const auto& e : type)
    {
        std::cout << e << "\n";
    }
}

int main()
{
    MailBox mails(3);

    Email a("Anders", "2002-02-28", "lab 1");
    Email b("Anders", "2002-02-28", "lab 2");
    Email c("Burak", "2020-12-15", "lab 3");
    Email d("Serkan", "2020-11-15", "lab 2");
    Email e("Burak", "2020-10-15", "lab 1");

    mails.push(a);
    mails.push(b);
    mails.push(c);
    mails.push(d);
    mails.push(e);

    std::cout << "Original mailbox\n";
    show(mails);

    std::cout << "\nSorted by who mailbox\n";
    mails.SortWho();
    show(mails);

    std::cout << "\nSorted by date mailbox\n";
    mails.SortDate();
    show(mails);

    std::cout << "\nSorted by subject mailbox\n";
    mails.SortSubject();
    show(mails);

    return 0;
}