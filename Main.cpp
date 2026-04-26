#include <iostream>
#include "mathlib.h"
using namespace std;

int main() {

    string s1, s2;

    int h1, h2, p1, p2;

    cout << "Enter Subject 1: ";
    cin >> s1;

    cout << "Enter Hours 1: ";
    cin >> h1;

    cout << "Enter Priority 1: ";
    cin >> p1;

    StudyPlanner task1(s1, h1, p1);

    cout << "\nEnter Subject 2: ";
    cin >> s2;

    cout << "Enter Hours 2: ";
    cin >> h2;

    cout << "Enter Priority 2: ";
    cin >> p2;

    StudyPlanner task2(s2, h2, p2);

    cout << "\n--- FUNCTION OVERLOADING ---\n";

    StudyPlanner task3;
    task3.setTask();
    cout << task3;

    task3.setTask("Physics");
    cout << task3;

    task3.setTask("Math", 5);
    cout << task3;

    task3.setTask("Chemistry", 4, 2);
    cout << task3;

    cout << "\n--- OPERATOR OVERLOADING ---\n";

    StudyPlanner task4 = task1 + task2;
    cout << "Addition (+): " << task4;

    StudyPlanner task5 = task1 - task2;
    cout << "Subtraction (-): " << task5;

    cout << "task1 == task2: ";
    if (task1 == task2)
        cout << "True\n";
    else
        cout << "False\n";

    cout << "task1 < task2: ";
    if (task1 < task2)
        cout << "True\n";
    else
        cout << "False\n";

    cout << "\n--- ORIGINAL OBJECTS ---\n";
    cout << task1;
    cout << task2;

    return 0;
}
