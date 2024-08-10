#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string> // для getline
using namespace std;

// Строки - string
// Строки - это не притивный тип данных, а класс, который обеспечивает верхнеуровную работу с текстом

int main()
{

	// Строки взаимодействуют с cin и cout, так как же и примитивы
	// Ввод заканчивается на пробеле(пробел - символ разделитель)

	// Если мы хотим ввести строку вместе с ' ', то мы пользуемся функцией getline
	/*
	*	getline(
	*		Поток ввода,
	*		Строка
	*	)
	*/

	// getchar()
	string buffer;
	getline(cin, buffer);
	cout << '!' << buffer << '!';

	{
		string str;
		cout << "Enter your name: "; cin >> str;
		cout << "Welcome! " << str;

		int a, b;
		cin >> a >> b;
		cout << a + b;

		string str1, str2;
		cin >> str1 >> str2;
		cout << '!' << str1 << '!' << str2 << '!' << endl;
	}



}
