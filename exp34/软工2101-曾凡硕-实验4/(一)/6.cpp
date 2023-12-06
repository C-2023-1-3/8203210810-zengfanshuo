#include <iostream>
#include <string>
using namespace std;

void count(string str, int counts[]){
	for (int i = 0; i < 26; i++) counts[i] = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')		
			counts[str[i] - 65]++;		
		if (str[i] >= 'a' && str[i] <= 'z')		
			counts[str[i] - 97]++;		
	}
}
void display(const int counts[]){
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
			cout << char(i + 97) << " : " << counts[i] << "  times " << endl;
	}
}

int main()
{
	string str;
	int counts[26];

	cout << "Enter a string : ";
	getline(cin, str);

	count(str, counts);
	display(counts);

	return 0;
}

