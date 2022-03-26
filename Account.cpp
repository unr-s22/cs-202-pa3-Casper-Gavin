#include "Account.h"

Account::Account(Money money){
    mMoney = money;
}

void Account::makeDeposit(Money money){
    changes.push_back(money);
    changeType.push_back("deposit");
    update = 1;
}

void Account::makeWithdrawl(Money money){
    changes.push_back(money);
    changeType.push_back("withdrawl");
    update = 1;
}

void Account::updateBalance(){
    if(update==1){
        for(Money m : changes){
            int i = 0;
            if(changeType.at(i)=="withdrawl"){
                mMoney = mMoney - m;
                numWithdrawls++;
            } else {
                mMoney = mMoney + m;
                numDeposits++;
            }
            i++;
        }
    }
    changes.clear();
    changeType.clear();
    update = 0;
}
