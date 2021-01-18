#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account A("ABC123","1XXX2",1000);

    A.credit();
    A.debit();
    A.getBalance();
    A.display();

    return(0);
}
