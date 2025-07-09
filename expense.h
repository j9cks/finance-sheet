#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

class Expense
{
    private:
        std::string description;
        double amount;
    public:
        Expense(const std::string& description, double amount);
        std::string getDescription();
        double getAmount();
};

#endif