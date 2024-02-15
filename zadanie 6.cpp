#include <iostream>
#include <cmath>

using namespace std;

/********************************************************
* autor: <Kamil Mazurkiewicz 2R>
* nazwa funkcji: <bmi>
* parametry wejsciowe: <wzrost - przechowuje wzrost w metrach uzytkownia, waga - przechowuje wage w kilogramach uzytkownika>
* wartosc zwracana: <wypisuje bmi uzytkownika i okresla czy masz niedowage, nadwage, czy wage normalna>

* nazwa funkcji: <main>
* parametry wejsciowe: <>
* wartosc zwracana: <wczytuje wzrost i wage uzytkownika>
* ****************************************************/

void bmi(float wzrost, float waga)
{
	cout << "Twoje BMI wynosi " << waga / (wzrost * wzrost) << endl;

	if(waga / (wzrost * wzrost) < 18.5)
	{
		cout << "Masz niedowage " << endl;
	}
	else if(waga / (wzrost * wzrost)>18.5&&waga / (wzrost * wzrost)<25)
	{
		cout << "Twoja waga jest w normie " << endl;
	}
	else
	{
		cout << "Masz nadwage " << endl;
	}
}

main()
{
	float wzrost;
	float waga;

	cout << "Podaj swoja wage w kilogramach" << endl;
	cin >> waga;
	cout << "Podaj swoj wzrost w metrach" << endl;
	cin >> wzrost;
	bmi(wzrost, waga);
	return 0;

}
