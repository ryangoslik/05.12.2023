#include <iostream>
using namespace std;

int main()
{
	int rozmiar;
	cout << "podaj rozmiar tablicy imion = "; cin >> rozmiar;
	string* imiona = new string[3];
	for (size_t i = 0; i < rozmiar; i++)
	{
		cout << "podaj imie " << i << " = "; cin >> imiona[i];
	}
	for (size_t i = 0; i < 3; i++) {
		if (i == 2) cout << imiona[i];
		else cout << imiona[i] << ", ";
	}
	delete[] imiona;
	return EXIT_SUCCESS;
}
