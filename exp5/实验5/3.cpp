#include <iostream>
using namespace std;

class Cuboid {
private:
	int length;
	int width;
	int height;
public:
	int caculate() {
		return length * width * height;
	}
	
	void init() {
		cin >> length;
		cin >> width;
		cin >> height;
	}
};

int main() {
	Cuboid cuboid[4];
	for (int i = 1; i <= 3; i++) {
		cout << "������� " << i <<" ��������ĳ���ߣ�";
		cuboid[i].init();
		cout << "������� " << i <<" ������������Ϊ " << cuboid[i].caculate() << endl;
	}

	return 0;
}

