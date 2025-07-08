using namespace std;

class Expense {
    private:
        string name;
        double amount;
    public:
        Expense(string name, double amount) : name(name), amount(amount) {};
        
        void setname(string name)
        {
            this->name = name;
        }
        string getname()
        {
            return name;
        }

        void setamount(double amount)
        {
            this->amount = amount;
        }
        double getamount() 
        {
            return amount;
        }
};