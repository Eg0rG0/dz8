#include "Student.h"
#include <iostream>
#include <string>
using namespace std;


ostream &operator<<(ostream &out, Student& x){
    out << "Name: " << x.name << endl;
    out << "Date of Birth: " <<  x.date << endl;
    out << "Course: " <<  x.course << endl;
    return out;
}

istream &operator>>(istream &in, Student& x) {
    in >> x.name >> x.date >> x.course;
    return in;
}