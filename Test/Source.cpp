#include <iostream>
#include <algorithm>

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
		cout << "1 - Вывести массив" << endl;
		cout << "2 - Сортировать по возрастанию" << endl;
		cout << "3 - Сортировать по убыванию" << endl;
		cout << "0 - Выход из массива" << endl;


		int input;
		cin >> input;
		if (input == 2)
			sort(Arrive, Arrive + size);

<<<<<<< .mine
		if (input == 3)
			sort(Arrive, Arrive + size, [](int a, int b) { return a > b; });

		if (input == 0)
=======
		switch (input) {
		case(1):


>>>>>>> .theirs
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
