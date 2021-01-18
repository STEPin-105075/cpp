#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <string>
#include <string.h>

using namespace std;

class Account
{
    string m_accNumber[20];
    string m_accName[20];
    double m_balance;

public:

    Account()
    {
        //m_accNumber = 0;
        m_balance = 0;
    }

    Account(string accName, string accNumber, double balance)
    {
        strcpy(m_accName,accName);
        strcpy(m_accNumber,accNumber);
        m_balance = balance;

    }

    Account (string accName, string accNumber)
    {
        strcpy(m_accName,accName);
        strcpy(m_accNumber,accNumber);
    }

    void debit()
    {
        double amt;
        cout<<"\n Enter amount to debit\t";
        cin>>amt;
        if(amt<m_balance)
        {
            m_balance = m_balance - amt;
        }
        else
        {
            cout<<("\n insufficient amount");
        }
    }

    void credit()
    {
        double amt;
        cout<<("\n enter amount to credit\t");
        cin>>amt;

        m_balance = m_balance + amt;
    }

    void getBalance()
    {
        cout<<"\n Balance : "<<m_balance;
    }

    void display()
    {
        cout<<"\n Account number:\t"<<m_accName;
        cout<<"\n Account Name:\t "<<m_accNumber;
        cout<<"\n Balance:\t"<<m_balance;
    }






};

#endif // ACCOUNT_H_INCLUDED
