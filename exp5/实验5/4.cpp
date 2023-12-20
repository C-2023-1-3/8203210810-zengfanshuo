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
	cout << "�ɼ���ߵ�ѧ����ѧ���ǣ� " << students[maxIndex].studentID << endl;
}

int main() {
    const int size = 5;
    Student students[size];

    for (int i = 0; i < size; ++i) {
        cout << "����� " << i + 1 << " ��ѧ����ѧ��: ";
        cin >> students[i].studentID;
        cout << "����ɼ�: ";
        cin >> students[i].score;
    }
    max(students, size);
    return 0;
}

