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

		cout << "1 - ������� ������" << endl;
		cout << "2 - ����������� �� �����������" << endl;
		cout << "3 - ����������� �� ��������" << endl;
		cout << "0 - ����� �� �������" << endl;

		int input;
		cin >> input;
		if (input == 2)
			sort(Arrive, Arrive + size);

		if (input == 3)
			sort(Arrive, Arrive + size, [](int a, int b) { return a > b; });

		if (input == 0)
			break;
		if (input == 1)
			for (int i = 0; i < size; i++)
				cout << Arrive[i] << " ";
		cout << endl;
	}
}
