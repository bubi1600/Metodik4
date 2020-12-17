#include <algorithm>
#include "mailbox.h"

MailBox::MailBox(size_t size)
    : emails(size) {}

void MailBox::push(const Email& element)
{
    emails.push_back(element);
}

std::vector<Email>::const_iterator MailBox::begin() const
{
    return emails.begin();
}

std::vector<Email>::const_iterator MailBox::end() const
{
    return emails.end();
}

void MailBox::SortWho()
{
    CompWhoDateSubject comp;
    std::sort(emails.begin(), emails.end(), comp);
}

void MailBox::SortDate()
{
    CompDateWhoSubject comp;
    std::sort(emails.begin(), emails.end(), comp);
}

void MailBox::SortSubject()
{
    CompSubjectWhoDate comp;
    std::sort(emails.begin(), emails.end(), comp);
}