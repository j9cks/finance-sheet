#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

class Expense;

class Person
{
    private:
        std::string name;
        std::vector<Expense> expenses;
    public:      
        Person(const std::string& name);
        void addExpense(const Expense& expense);
        std::vector<Expense> getExpenses();
};

#endif