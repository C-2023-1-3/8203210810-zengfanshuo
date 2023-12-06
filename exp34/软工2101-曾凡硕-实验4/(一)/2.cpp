#include <iostream>
using namespace std;

// 交换数组中两个元素的值
void swap(double &a, double &b);
// 起泡排序函数
void bubbleSort(double list[], int listSize);

int main() {
    const int listSize = 10;
    double myList[listSize];

    // 输入数组元素
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < listSize; ++i) {
        cin >> myList[i];
    }

    // 调用排序函数
    bubbleSort(myList, listSize);

    // 输出排列后的数字
    cout << "排列后的数字为：" << endl;
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

