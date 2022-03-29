#include "Account.h"

Account::Account(const Money& money){
    mMoney = money;
}

void Account::makeDeposit(const Money& money){
    changes.push_back(money);
    changeType.push_back("deposit");
    update = true;
    numDeposits++;
}

void Account::makeWithdrawl(const Money& money){
    changes.push_back(money);
    changeType.push_back("withdrawl");
    update = true;
    numWithdrawls++;
}

void Account::updateBalance(){
        for(Money m : changes){
            int i = 0; 
            if(changeType.at(i)=="withdrawl"){
                mMoney = mMoney - m;
                
            } else {
                mMoney = mMoney + m;
                
            }
            i++;
        }
    
    changes.clear();
    changeType.clear();
    update = 0;
}
