#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	char a;
	cout << "Введите символ:\n";
	cin >> a;
	if (a >= '0' && a <= '9') {
		cout << "Вы ввели цифрую." << endl;
	}
	else if (a >= 'A' && a <= 'Z') {
		cout << "Вы ввели заглавную английскую букву." << endl;
	}
	else if (a >= 'a' && a <= 'z') {
		cout << "Вы ввели строчную английскую букву." << endl;
	}
	else if (a == '.' || a == ',' || a == '"' || a == ';' || a == ':' || a == '?' || a == '!') {
		cout << "Вы ввели знак препинания.";
	}

	return 0;
}