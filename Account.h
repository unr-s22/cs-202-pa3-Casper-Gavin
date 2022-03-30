#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
#include <ostream>
#include "Money.h"

class Account : public Money{
private:
    std::vector<Money> changes;
    std::vector<std::string> changeType;

    bool update = 0;

    Money mMoney;

    int numDeposits = 0;
    int numWithdrawls = 0;

    int iCount = 0;
public:
    Account(Money);

    void makeDeposit(Money);
    void makeWithdrawl(Money);
    void updateBalance();
    void reset();

    friend std::ostream& operator << (std::ostream &out, const Account& rhsAcc){
        out << "Account Details" << std::endl;
        out << "--------------------------" << std::endl;
        out << "Current Balance: " << rhsAcc.mMoney << std::endl;
        out << "--------------------------" << std::endl;
        out << "Number of Deposits: " << rhsAcc.numDeposits << std::endl;
        out << "--------------------------" << std::endl;
        for(int i=0; i<rhsAcc.changes.size(); i++){
            if(rhsAcc.changeType.at(i)=="deposit"){
                out << "(" << i+1 << ")" << rhsAcc.changes.at(i) << std::endl;
            }
        }
        out << "--------------------------" << std::endl;
        out << "Number of Withdrawls: " << rhsAcc.numWithdrawls << std::endl;
        out << "--------------------------" << std::endl;
        for(int i=0; i<rhsAcc.changes.size(); i++){
            if(rhsAcc.changeType.at(i)=="withdrawl"){
                out << "(" << i+1 << ")" << rhsAcc.changes.at(i) << std::endl;
            }
        }     
        return out;
    }
};

#endif
