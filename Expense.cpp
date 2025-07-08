using namespace std;

class Expense {
    private:
        string name;
        double amount;
    public:
        Expense(string name, double amount) : name(name), amount(amount) {};
        
        void setName(string name)
        {
            this->name = name;
        }
        string getName()
        {
            return name;
        }

        void setAmount(double amount)
        {
            this->amount = amount;
        }
        double getAmount() 
        {
            return amount;
        }
};