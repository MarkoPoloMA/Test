#include <iostream>

using namespace std;

void main()
{

	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	const int size = 10;
	int Arrive[size];


	for (int i = 0; i < size; i++)
		Arrive[i] = rand() % 10;

	while (true)
	{
		system("cls");

		cout << "1 - Вывести массив" << endl <<
			 "0 - Выход из массива" << endl <<
			 "2 - show with indexes" << endl;


		int input;
		cin >> input;

		switch (input) {
		case(1):
			break;
		case(2):
			for (int i = 0; i < size; i++)
				cout << Arrive[i] << " ";
			cout << endl;
			system("pause");
		case(3):
			for (int i = 0; i < size; i++)
				cout << "[" << i << "] =>" << Arrive[i]  << endl;
			cout << endl;
			system("pause");
		}
	}
}