#include <iostream>
#include "student.h"
#pragma warning(disable:4996)
using namespace std;

void Student::display() {
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}

void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strncpy(name, nm, 19);
    name[19] = '\0';
    sex = s;
}

