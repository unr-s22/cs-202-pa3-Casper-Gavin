#include <iostream>

class Money{
private:
    int dollars, cents;
public:
    Money(){
        this -> dollars = 0;
        this -> cents = 0;
    }
    Money(int dollars, int cents){
        this -> dollars = dollars;
        this -> cents = cents;
    }
    friend bool operator == (const Money &lhs, const Money &rhs){
        return (lhs.dollars==rhs.dollars);
    }
    friend bool operator < (const Money &lhs, const Money &rhs){
        return (lhs.dollars<rhs.dollars);
    }
    friend bool operator > (const Money &lhs, const Money &rhs){
        return (lhs.dollars>rhs.dollars);
    }
    friend bool operator >= (const Money &lhs, const Money &rhs){
        return (lhs.dollars>=rhs.dollars);
    }
    friend bool operator <= (const Money &lhs, const Money &rhs){
        return (lhs.dollars<=rhs.dollars);
    }
    friend bool operator != (const Money &lhs, const Money &rhs){
        return (lhs.dollars!=rhs.dollars);
    }
    Money operator+(const Money &all){
        Money add;
        add.dollars = this->dollars + all.dollars;
        add.cents = this->cents + all.cents;
        return add;
    }
    Money operator-(const Money &all){
        Money sub;
        sub.dollars = this->dollars - all.dollars;
        sub.cents = this->cents - all.cents;
        return sub;
    }
    void printMoney(int m){
        std::cout << m << std::endl;
    }
};