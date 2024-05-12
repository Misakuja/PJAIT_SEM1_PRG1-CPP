#include <iostream>
int main() {
    using namespace std;
    short zmienna = 213;

    //Wyświetlanie adresu wskaźnika
    short* wskaznik = &zmienna ;
    cout << "&zmienna = " << &zmienna << endl;
    cout << "wskaznik = " << wskaznik << endl;

    cout << endl;

    //Wyświetlanie danych, na które wskazuje adres wskaźnika
    cout << "Adres zmienna = " << &zmienna << endl;
    cout << "*wskaznik = " << *wskaznik << endl;

    cout << endl;

    //Modyfikacja danych, na które wskazuje wskaźnik
    cout << "zmienna = " << zmienna << endl;
    * wskaznik = 50;
    cout << "zmienna = " << zmienna << endl;
    return 0;
}
