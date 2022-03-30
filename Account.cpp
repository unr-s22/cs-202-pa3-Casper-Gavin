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
            if(changeType.at(iCount)=="withdrawl"){
                mMoney = mMoney - m;
                numWithdrawls++;
                iCount++;
            } else {
                mMoney = mMoney + m;
                numDeposits++;
                iCount++;
            }
        }
        update = 0;
    }
}

void Account::reset(){
    changes.clear();
    changeType.clear();
}
