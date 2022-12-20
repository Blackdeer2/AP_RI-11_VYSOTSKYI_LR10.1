// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ... 
// 
// 1.   Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool findOut(string str) {
	bool t = false;
	size_t pos = 0;	
		while (((pos = str.find('n', pos)) != -1) || ((pos = str.find('o', pos)) != -1)) {
			if ((str[pos] == 'n' && str[pos + 1] == 'o') || (str[pos] == 'n' && str[pos - 1] == 'o')) {
				t = true;
			}
			pos++;
		}
	return t;
}
int main()
{
	 
	ifstream fin("1.txt"); //Відкриття файлового потоку введення (тобто, відкриття файлу для зчитування)
	cout << endl;
	string str;
	while (getline(fin, str)) {  // Зчитування сліaв з текстового файлу
		fin >> str;
	}


	if (findOut(str) == true) {
		cout << " IS a pair of adjacent letters 'no' or 'on'" << endl;
	}
	else {
		cout << " NO a pair of adjacent letters 'no' or 'on'" << endl;
	}

	return 0;
}