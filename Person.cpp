#include <vector>
using namespace std;

class Person
{
    private:
        string name;
        vector<Expense> expenses;
    public:
        Person(string name, vector<Expense> expenses): name(name), expenses(expenses) {};

        void setName(string name)
        {
            this->name = name;
        }
        string getName()
        {
            return name;
        }

        void addExpense(Expense expense)
        {
            expenses.push_back(expense);
        }
};