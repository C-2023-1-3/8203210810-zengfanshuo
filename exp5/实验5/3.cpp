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
		cout << "请输入第 " << i <<" 个长方体的长宽高：";
		cuboid[i].init();
		cout << "请输入第 " << i <<" 个长方体的体积为 " << cuboid[i].caculate() << endl;
	}

	return 0;
}

