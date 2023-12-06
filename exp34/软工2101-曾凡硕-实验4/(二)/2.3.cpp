#include<iostream>
using namespace std;

void sort(int *array, int n) {
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int main(){
	int n;
	cout << "请输入数组长度：";
	cin >> n;
	int* array = new int[n];
	cout << "请输入各元素：";
	for (int i = 0; i < n; i++)
		cin >> array[i];
	int index;
	cout << "请输入所要查询元素的下标（输入-1结束查询）：";
	cin >> index;
	while(index != -1) 
	{
		cout << "array[" << index << "]为" << array[index] << endl;
		cout << "指针为：" << &array[index] << endl;
		cout << "请输入所要查询元素的下标（输入-1结束查询）：";
		cin >> index;
	}
	sort(array, n);
	cout << "排序后的数组为：" << endl;
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";

	delete[] array;
	return 0;
}
