#include <iostream>
#include<string>
using namespace std;

class Student {
public:
    string studentID;
    double score;
};

void max(Student *students, int size) {
    double maxScore = -1.0;
    int maxIndex = -1;

    for (int i = 0; i < size; ++i) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
            maxIndex = i;
        }
    }
	cout << "成绩最高的学生的学号是： " << students[maxIndex].studentID << endl;
}

int main() {
    const int size = 5;
    Student students[size];

    for (int i = 0; i < size; ++i) {
        cout << "输入第 " << i + 1 << " 个学生的学号: ";
        cin >> students[i].studentID;
        cout << "输入成绩: ";
        cin >> students[i].score;
    }
    max(students, size);
    return 0;
}

