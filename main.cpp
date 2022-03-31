#include "Money.h"
#include "Account.h"

int main(){
    Money m(300,23);
    Account account(m);

    std::cout << account << std::endl;

    Money d1(200,00);
    Money d2(300,24);
    Money d3(501,22);
    account.makeDeposit(d1);
    account.makeDeposit(d2);
    account.makeDeposit(d3);
    account.updateBalance();

    std::cout << account << std::endl;

    Money w1(300,10);
    Money w2(201,34);
    account.makeWithdrawl(w1);
    account.makeWithdrawl(w2);
    account.updateBalance();

    std::cout << account << std::endl;

    Money m2(100,20);
    Money n2(50,10);
    if(m2 > n2){
        std::cout << "The 1st money amount is more than the second." <<  std::endl;
    } else {
        std::cout << "The 1st money amount is not more than the second." <<  std::endl;
    }   
    
    return 0;
}
