#include <iostream>
#define PI 3.1415

using namespace std;

class Kolo
{
private:
    double x, y, r;
    int* wart; // dynamicznie przydzielamy pamiêæ
public:
    Kolo() //konstruktor - domyœlny dla okreœlenia wartoœci danych
    {
        x = 0.0;
        y = 0.0;
        r = 0.0;
        wart = new int[1];
        cout << "Konstruktor pusty" << endl;
    };
    Kolo(double pr) // konstuktor z jednym parametrem
    {
            x = 0.0; y=0.0;
            if(pr<0.0) r=0;
            else r = pr;
            wart = new int[1];
            cout << "Konstruktor z promieniem" << endl;
    }

    Kolo(double wx, double wy, double pr) // konstruktor z trzema parametrami
    {
        x = wx; y = wy;
        if(pr<0.0) r = 0.0;
        else r = pr;
        wart = new int[1];
        cout << "Konstruktor pelny" << endl;

    }

    ~Kolo()
    {
        cout << "Destruktor" << endl;
        delete wart; // jak przydzielam to PAMIÊTAJ zwalniaj
    };

    double srednica() // metoda
    {
        return 2 * r;
    };

    double obliczPole()
    {
        return PI * r*r;
    }

    void wypisz_kolo(); // metoda - deklaracja, definicja poza klas¹
} K3(2.0, 2.0, 4.0); // obiekt utworzony statycznie

void Kolo::wypisz_kolo()
{
    cout << "Wspolrzedne srodka to x: " << x << ", y: " << y << endl;
    cout << "Promien kola wynosi r: " << r << endl;
    cout << "Srednica kola wynosi d: " << srednica() << endl;
    cout << "Pole kola wynosi: " << obliczPole() << endl;

}

double przy_r;

int main()
{
/*class identyfikator_klasy
{
    cia³o klasy
};
konstuktor - ma tak¹ sam¹ nazwê jak klasa, musi wyst¹piæ co najmniej
jeden, a mo¿e byæ ich kilka, ró¿ni¹cych siê iloœci¹ parametrów
destruktor
metody (funkcje)
*/
    Kolo K1; // tworzymy obiekt w sposób statyczny
    //cin >> K1.r; - tak nie mo¿na bo to pole prywatne
    K1.wypisz_kolo();
    cout << "Podaj promien kola: "; cin >> przy_r;
    Kolo K2(przy_r);
    K2.wypisz_kolo();
    //cout << K2.srednica();
    K3.wypisz_kolo();
    Kolo &K4 = K2; //tworzenie obiektu przez referencjê
    cout << "Pole kola K4 wynosi: " << K4.obliczPole() << endl;
    Kolo* K5 = &K2; //tworzenie obiektu przez wskaŸnik
    cout << "Pole kola K5 wynosi: " << K5->obliczPole() << endl;
    Kolo* K6 = new Kolo(3, -3, 5); // tworzenie obiektu w sposob dynamiczny
    K6->wypisz_kolo();
    delete K6;
    return 0;
}
