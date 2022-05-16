#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate}, num_of_withdraws {0} {
}

bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold)
    amount += bonus_amount;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if (amount > balance * max_withdraw_percent || num_of_withdraws >= max_withdraws)
        return false;
    else {
        num_of_withdraws++;
        return Savings_Account::deposit(amount);
    }
    
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, withdrawals: " << account.num_of_withdraws <<  "]";;
    return os;
}

