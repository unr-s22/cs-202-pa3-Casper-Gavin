
#include "Money.h"
#include "Account.h"

int main(){
    Money m(300,23);

    Account rhsAcc(m);
    Account account = rhsAcc;
    std::cout << account << std::endl;
    Money d1(200,00);
    Money d2(300,24);
    Money d3(501,22);
    account.makeDeposit(d1);
    account.makeDeposit(d2);
    account.makeDeposit(d3);

    std::cout << account << std::endl;

    Money w1(300,10);
    Money w2(201,34);
    account.makeWithdrawl(w1);
    account.makeWithdrawl(w2);
    std::cout << account << std::endl;






    return 0;
};

