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

    Money m1(100,13);
    Money m2(321,48);
    if(m1 > m2){
        std::cout << "Money one is greater than Money two." <<  std::endl;
    } else {
        std::cout << "Money one is not greater than Money two." <<  std::endl;
    }   
    if(m1 < m2){
        std::cout << "Money one is less than Money two." <<  std::endl;
    } else {
        std::cout << "Money one is not less than Money two." <<  std::endl;
    }   
    if(m1 <= m2){
        std::cout << "Money one is less than or equal to Money two." <<  std::endl;
    } else {
        std::cout << "Money one is not less than or equal to Money two." <<  std::endl;
    }   
    if(m1 >= m2){
        std::cout << "Money one is greater than or equal to Money two." <<  std::endl;
    } else {
        std::cout << "Money one is not greater than or equal to Money two." <<  std::endl;
    }
    if(m1 != m2){
        std::cout << "Money one is not equal to Money two." <<  std::endl;
    } else {
        std::cout << "Money one is equal to Money two." <<  std::endl;
    }
    if(m1 == m2){
        std::cout << "Money one is equal to Money two." <<  std::endl;
    } else {
        std::cout << "Money one is not equal to Money two." <<  std::endl;
    }
    
    return 0;
}
