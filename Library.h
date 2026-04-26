#ifndef MATHLIB_H
#define MATHLIB_H

#include <iostream>
#include <string>
using namespace std;

class StudyPlanner {
private:
    string subject;
    int hours;
    int priority;

public:
    StudyPlanner();
    StudyPlanner(string s, int h, int p);

    void setTask();
    void setTask(string s);
    void setTask(string s, int h);
    void setTask(string s, int h, int p);

    StudyPlanner operator+(const StudyPlanner& sp);
    StudyPlanner operator-(const StudyPlanner& sp);
    bool operator==(const StudyPlanner& sp);
    bool operator<(const StudyPlanner& sp);

    friend ostream& operator<<(ostream& out, const StudyPlanner& sp);
};

#endif
