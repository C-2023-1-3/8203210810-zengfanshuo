#include <iostream>
#include "student.h"
#pragma warning(disable:4996)
using namespace std;

void Student::display() {
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}

void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strncpy(name, nm, 19);
    name[19] = '\0';
    sex = s;
}

