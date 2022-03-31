#include "Money.h"
#include "Account.h"

int main(){
    Money m(300,23);
    Account rhsAcc(m);

    std::cout << rhsAcc << std::endl;

    Money d1(200,00);
    Money d2(300,24);
    Money d3(501,22);
    rhsAcc.makeDeposit(d1);
    rhsAcc.makeDeposit(d2);
    rhsAcc.makeDeposit(d3);
    rhsAcc.updateBalance();

    std::cout << rhsAcc << std::endl;

    Money w1(300,10);
    Money w2(201,34);
    rhsAcc.makeWithdrawl(w1);
    rhsAcc.makeWithdrawl(w2);
    rhsAcc.updateBalance();

    std::cout << rhsAcc << std::endl;

    Money m2(100,20);
    Money n2(50,10);
    if(m2 > n2){
        std::cout << "The 1st money amount is more than the second." <<  std::endl;
    } else {
        std::cout << "The 1st money amount is not more than the second." <<  std::endl;
    }   
    
    return 0;
}
