#ifndef EMAIL_H
#define EMAIL_H

#include <string>
#include <ostream>

class Email
{
public:
    Email() = default;

    Email(std::string who, std::string date, std::string subject);

    friend std::ostream& operator<<(std::ostream& os, const Email& email);

    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectWhoDate;

private:
    std::string who;
    std::string date;
    std::string subject;
};

struct CompWhoDateSubject
{
    bool operator()(const Email& lhs, const Email& rhs);
};

struct CompDateWhoSubject
{
    bool operator()(const Email& lhs, const Email& rhs);
};

struct CompSubjectWhoDate
{
    bool operator()(const Email& lhs, const Email& rhs);
};

#endif