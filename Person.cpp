#include <vector>
using namespace std;

class Person
{
    private:
        string name;
        vector<Expense> expenses;
    public:
        Person(string name, vector<Expense> expenses): name(name), expenses(expenses) {};

        void setname(string name)
        {
            this->name = name;
        }
        string getname()
        {
            return name;
        }
};