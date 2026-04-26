#include <iostream>
using namespace std;

class StudyPlanner {
private:
    string subject;
    int hours;
    int priority;

public:
    StudyPlanner() {
        subject = "None";
        hours = 0;
        priority = 0;
    }

    StudyPlanner(string s, int h, int p) {
        subject = s;
        hours = h;
        priority = p;
    }

    void setTask() {
        subject = "General";
        hours = 2;
        priority = 1;
    }

    void setTask(string s) {
        subject = s;
    }

    void setTask(string s, int h) {
        subject = s;
        hours = h;
    }

    void setTask(string s, int h, int p) {
        subject = s;
        hours = h;
        priority = p;
    }

    StudyPlanner operator+(const StudyPlanner& sp) {
        return StudyPlanner(subject + "&" + sp.subject, hours + sp.hours, priority + sp.priority);
    }

    StudyPlanner operator-(const StudyPlanner& sp) {
        return StudyPlanner(subject, hours - sp.hours, priority);
    }

    bool operator==(const StudyPlanner& sp) {
        return hours == sp.hours;
    }

    bool operator<(const StudyPlanner& sp) {
        return priority < sp.priority;
    }

    friend ostream& operator<<(ostream& out, const StudyPlanner& sp) {
        out << "Subject: " << sp.subject
            << ", Hours: " << sp.hours
            << ", Priority: " << sp.priority << endl;
        return out;
    }
};

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
    cout << task4;

    StudyPlanner task5 = task1 - task2;
    cout << task5;

    if (task1 == task2)
        cout << "Same study hours\n";
    else
        cout << "Different study hours\n";

    if (task1 < task2)
        cout << "Task1 has lower priority\n";
    else
        cout << "Task1 has higher or equal priority\n";

    cout << "\n--- ORIGINAL OBJECTS ---\n";
    cout << task1;
    cout << task2;

    return 0;
}
