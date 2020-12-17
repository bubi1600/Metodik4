#ifndef MAILBOX_H
#define MAILBOX_H

#include <vector>
#include "Email.h"

class MailBox
{
public:
    MailBox(size_t size);

    void push(const Email& element);

    std::vector<Email>::const_iterator begin() const;

    std::vector<Email>::const_iterator end() const;

    void SortWho();

    void SortDate();

    void SortSubject();

private:
    std::vector<Email> emails;
};

#endif