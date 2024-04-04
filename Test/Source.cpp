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

		cout << "1 - Вывести массив" << endl;
		cout << "0 - Выход из массива" << endl;

		int input;
		cin >> input;

		if (input == 0)
			break;
		if (input == 1)
			for (int i = 0; i < size; i++)
				cout << Arrive[i] << " ";
		cout << endl;
	}
}