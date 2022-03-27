
#include "Money.h"
#include "Account.h"

int main(){
    Money m(100,10);
    Account rhsAcc(m);
    Account account = rhsAcc;
    std::cout << account << std::endl;


    return 0;
};

