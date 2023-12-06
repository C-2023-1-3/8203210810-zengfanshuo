#include <iostream>
using namespace std;

// ��������������Ԫ�ص�ֵ
void swap(double &a, double &b);
// ����������
void bubbleSort(double list[], int listSize);

int main() {
    const int listSize = 10;
    double myList[listSize];

    // ��������Ԫ��
    cout << "������10��˫�������֣�" << endl;
    for (int i = 0; i < listSize; ++i) {
        cin >> myList[i];
    }

    // ����������
    bubbleSort(myList, listSize);

    // ������к������
    cout << "���к������Ϊ��" << endl;
    for (int i = 0; i < listSize; ++i) {
        cout << myList[i] << " ";
    }

    cout << endl;

    return 0;
}

void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

void bubbleSort(double list[], int listSize) {
    bool changed = true;

    do {
        changed = false;

        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }

    } while (changed);
}

