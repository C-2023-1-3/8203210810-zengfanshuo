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
	cout << "���������鳤�ȣ�";
	cin >> n;
	int* array = new int[n];
	cout << "�������Ԫ�أ�";
	for (int i = 0; i < n; i++)
		cin >> array[i];
	int index;
	cout << "��������Ҫ��ѯԪ�ص��±꣨����-1������ѯ����";
	cin >> index;
	while(index != -1) 
	{
		cout << "array[" << index << "]Ϊ" << array[index] << endl;
		cout << "ָ��Ϊ��" << &array[index] << endl;
		cout << "��������Ҫ��ѯԪ�ص��±꣨����-1������ѯ����";
		cin >> index;
	}
	sort(array, n);
	cout << "����������Ϊ��" << endl;
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";

	delete[] array;
	return 0;
}
