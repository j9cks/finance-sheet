#include <iostream>
#include <vector>
#include "Person.cpp"
#include "Expense.cpp"

void calculate(vector<Person> people);

int main() {
    bool running = true;
    vector<Person> people;
    const string menu = "--- Menu Options ---\n1. Add person\n2. Add expense\n3. Calculate\n4. Exit";
    char input;

    do
    {
        

    } while (running);

    return 1;
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