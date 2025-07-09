#include "expense.h"
#include "person.h"

#include <string>

// constructor
Expense::Expense(const std::string& description, double amount) : description(description), amount(amount) {};

// other methods
std::string Expense::getDescription()
{
    return description;
}

double Expense::getAmount()
{
    return amount;
}