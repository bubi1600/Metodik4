#include "Email.h"

Email::Email(std::string who, std::string date, std::string subject)
    : who(who), date(date), subject(subject) {}

std::ostream& operator<<(std::ostream& os, const Email& email)
{
    os << "who: " << email.who << " date: " << email.date << " subject: " << email.subject;
    return os;
}

bool CompWhoDateSubject::operator()(const Email& lhs, const Email& rhs)
{
    if (lhs.who < rhs.who)
    {
        return true;
    }

    if (lhs.who == rhs.who)
    {
        if (lhs.date < rhs.date)
        {
            return true;
        }
    }

    if (lhs.who == rhs.who)
    {
        if (lhs.date == rhs.date)
        {
            if (lhs.subject < rhs.subject)
            {
                return true;
            }
        }
    }

    return false;
}

bool CompDateWhoSubject::operator()(const Email& lhs, const Email& rhs)
{   
    if (lhs.date < rhs.date)
    {
        return true;
    }

    if (lhs.date == rhs.date)
    {
        if (lhs.who < rhs.who)
        {
            return true;
        }
    }

    if (lhs.date == rhs.date)
    {
        if (lhs.who == rhs.who)
        {
            if (lhs.subject < rhs.subject)
            {
                return true;
            }
        }
    }

    return false;  
}

bool CompSubjectWhoDate::operator()(const Email& lhs, const Email& rhs)
{
    if (lhs.subject < rhs.subject)
    {
        return true;
    }

    if (lhs.subject == rhs.subject)
    {
        if (lhs.who < rhs.who)
        {
            return true;
        }
    }

    if (lhs.subject == rhs.subject)
    {
        if (lhs.who == rhs.who)
        {
            if (lhs.date < rhs.date)
            {
                return true;
            }
        }
    }

    return false;
}