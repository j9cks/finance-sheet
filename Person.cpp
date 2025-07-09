#include "person.h"
#include "expense.h"
#include <string>

// constructor
Person::Person(const std::string& name) : name(name) {};

// other methods
void Person::addExpense(const Expense& expense)
{
    this->expenses.push_back(expense);
}

std::vector<Expense> Person::getExpenses()
{
    return this->expenses;
}