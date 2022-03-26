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
public:
    Account(Money);

    void makeDeposit(Money);
    void makeWithdrawl(Money);
    void updateBalance(Money);

    //friend std::ostream& operator << (std::ostream &out, const Money& rhs){
        //return out;
    //}
};

#endif