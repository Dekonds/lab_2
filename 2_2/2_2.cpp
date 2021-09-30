#include<string>
#include<iostream>
#include<Windows.h> 
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string Line = "", word = "";
	bool Aa = false;
	printf("Введите текст: ");
	getline(cin, Line);
	for (int i = 0; i < Line.length(); i++)
	{
		word += Line[i];
		if (Line[i] == 'а' || Line[i] == 'А')
			Aa = true;
		if (Line[i] == ' ' || Line[i + 1] == '\0')
		{
			if (Aa)
				cout << word;
			word = "";
			Aa = false;
		}
	}
	system("pause");
}
