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
    //permanent counter
    int iCount = 0;
public:
    Account(Money);

    void makeDeposit(Money);
    void makeWithdrawl(Money);
    void updateBalance();

    friend std::ostream& operator << (std::ostream &out, const Account& account){
        out << "Account Details" << std::endl;
        out << "--------------------------" << std::endl;
        out << "Current Balance: " << account.mMoney << std::endl;
        out << "--------------------------" << std::endl;
        out << "Number of Deposits: " << account.numDeposits << std::endl;
        out << "--------------------------" << std::endl;
        int j = 1;
        for(int i=0; i<account.changes.size(); i++){
            if(account.changeType.at(i)=="deposit"){
                out << "(" << j << ")" << account.changes.at(i) << std::endl;
                j++;
            }
        }
        out << "--------------------------" << std::endl;
        out << "Number of Withdrawls: " << account.numWithdrawls << std::endl;
        out << "--------------------------" << std::endl;
        j = 1;
        for(int i=0; i<account.changes.size(); i++){
            if(account.changeType.at(i)=="withdrawl"){
                out << "(" << j << ")" << account.changes.at(i) << std::endl;
                j++;
            }
        }     
        return out;
    }
};

#endif
