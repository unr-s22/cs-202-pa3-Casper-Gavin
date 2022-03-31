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
        while(iCount < changes.size()){
            if(changeType.at(iCount)=="withdrawl"){
                mMoney = mMoney - changes.at(iCount);
                numWithdrawls++;
            } else {
                mMoney = mMoney + changes.at(iCount);
                numDeposits++;
            }
            iCount++;
        }
        update = 0;
    }
}
