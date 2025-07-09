#include <iostream>
#include <vector>
#include "person.h"
#include "expense.h"

using namespace std;

void addPerson();
void addExpense();
void calculate(vector<Person*> people);
void exit();

int main()
{
    Person p("Freddy");
    Expense e("Eating Out", 10.10);
    p.addExpense(e);

    cout << "yay it ran";

    return 1;
}

// int main() {
//     bool running = true;
//     vector<Person*> people;
//     const string menu = "--- Menu Options ---\n1. Add person\n2. Add expense\n3. Calculate\n4. Exit\n\nEnter an option: ";
//     int input;

//     cout << "Welcome to the finance sheet!" << endl;
//     cout << "Use this to divvy up expenses among many people." << endl;

//     do
//     {
//         cout << menu << endl;
//         cin >> input;

//         switch (input)
//         {
//             case 1:
//                 addPerson();
//                 break;
//             case 2:
//                 addExpense();
//                 break;
//             case 3:
//                 calculate(people);
//                 break;
//             case 4:
//                 exit();
//                 break;
//             default:
//                 cout << "Invalid option. Please try again." << endl;
//                 break;
//         };
//     } while (running);

//     return 1;
// }

void addPerson() 
{
    cout << "Add person selected" << endl;
}

/*
Person class:
    It will store
        -name
        -list of expenses they paid for
Expense class:
    It will store
        -name of expense
        -how much
main method:
    Goal: make people and add expenses to people and at the end tell how much
          each person owes/is owed depending on how much they paid
    
    flow:
        -make people
        -make expenses
        -do math
        -👍
*/