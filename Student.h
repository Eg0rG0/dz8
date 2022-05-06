
#ifndef DZ8_STUDENT_H
#define DZ8_STUDENT_H
#include <string>

using namespace std;


class Student {
public:
    string name, date, course;
    Student(string a, string b, string c) {
        name = a;
        date = b;
        course = c;
    }
    Student(){}
    friend ostream &operator<<(ostream &, Student& x);
    friend istream &operator>>(istream &, Student& x);

};


#endif //DZ8_STUDENT_H
