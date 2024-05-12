1. Zbliżają się urodziny Jasia. Mama zakupiła pewną ilość cukierków Jasiowi cukierki, które powinien rozdać klasie. Cukierki powinien rozdać w taki sposób, żeby: 
	a. Każdy uczeń ma dostać jak najwięcej cukierków 
	b. Żadnej z uczniów nie może być wyróżniony i dostać więcej 
	c. Nie dzielimy cukierków na części 
	d. Jaś i Pani nauczycielka nie jedzą cukierków 

Ile cukierków dostanie każdy z uczniów oraz ile Jasiowi zostanie cukierków na wieczór?

Program dostaje na wejściu: 
- Ilu uczniów jest w klasie Jasia 
- Ile cukierków kupiła mama
  
----

2. Napisz program na rozwiązanie układu dwóch równań liniowych: 
	ax + by = e 
	cx + dy = f
stosując zwory Cramera. Współczynniki należy wczytać z klawiatury.

----

3. Napisz program obliczający pole odcinka kołowego o zadanym promieniu R oraz kacie rozwarcia α. Promień R oraz kat α (w stopniach) należy wczytać z klawiatury.
<img src="https://i.imgur.com/D3YJBfL.png" width="100%">
UWAGA: Argumenty w funkcjach trygonometrycznych musza być podane w radianach, dlatego te_ wczytany kat w stopniach należy przeliczyć na radiany wg wzoru:
<img src="https://i.imgur.com/BH9vw3r.png" width="100%">

Liczba π ma w języku C++ nazwę M_PI. Aby skorzystać z tej stałej w programie, należy umieścić dyrektywę `#define_USE_MATH_DEFINES`.
Dyrektywa ta musi poprzedzać dyrektywę `#include <math.h>` którą również należy umieścić w programie.

----

4. Napisz program, który będzie pobierał od użytkownika liczbę lub literę alfabetu lub znak i będzie 
zwracał odpowiadający mu kod ASCII.

----

5. Napisz program, który pobierze dodatnią liczbę całkowitą oraz wypisze jej reprezentacje 
ósemkowo oraz szesnastkowo (każda w osobnej linii).

----

6. Napisz program, który będzie przerabiał liczbę otrzymaną przez użytkownika według następujących zasad:
- Jeżeli liczba jest podzielna przez 3 to program powinien wyświetlić słowo `Pling`
- Jeżeli liczba jest podzielna przez 5 to program powinien wyświetlić słowo `Plang`
- Jeżeli liczba jest podzielna przez 7 to program powinien wyświetlić słowo `Plong`
- Jeżeli nie zachodzi żaden z powiższych przypadków program powinien wyświetlić otrzymaną liczbę
Jeżeli natomiast liczba będzie podzielna przez 3 oraz 5, to program powinien wypisać `PlingPlang`

----

7. Napisz program, który obliczy najmniejszą wspólną wielokrotność dwóch liczb całkowitych a i b dodatnich. Wykorzystaj algorytm:
<img src="https://i.imgur.com/t4O2uHN.png" width="100%">

----

8. Napisz program, który będzie aplikacją kalkulatora - obliczenia powinno móc być wykonywać do momentu podania przez użytkownika 0, które oznacza koniec pracy. Pozostałe operacje matematyczne powinny być dostępne po wybraniu liczb 1-4. Do zautomatyzowania pracy użyj pętli – wybierz optymalną pętlę, która uwzględni specyfikę algorytmu.

----

9. Napisz program, który jest prostą grą. Twoim zadaniem w grze jest odgadnięcie wylosowanej przez komputer liczby (z przedziału od 1 do 100). Przy każdej próbie otrzymujesz wskazówkę, mówiącą czy wpisana przez ciebie wartość jest za duża, czy za mała.

Do wylosowania liczby użyj następującej linii kodu (generator liczb losowych):
```CPP
#include <ctime>
srand ((int) time(NULL));
int nWylosowana = rand() % 100 + 1
```

----

10. Napisz program, który obliczy największy wspólny podzielnik dwóch liczb całkowitych a i b dodatnich. Wykorzystaj algorytm:
<img src="https://i.imgur.com/DDAOxFB.png" width="100%">

----

11. Napisz program obliczający tygodniowe zarobki brutto i netto pracownika, gdy znana jest kategoria zaszeregowania i liczba przepracowanych godzin w ciągu tygodnia. Dane te należy wczytać z klawiatury. Dla poszczególnych kategorii zaszeregowania obowiązują następujące stawki:
<img src="https://i.imgur.com/z51r4Qy.png" width="100%">

Jeśli pracownik przepracuje więcej niż 40 godzin w ciągu tygodnia, to zapłata za każdą nadgodzinę jest dwukrotnie wyższa od stawki pracownika. Podatek od zarobku jest obliczany wg następującej tabeli:
<img src="https://i.imgur.com/YKdlUKn.png" width="100%">

Program należy napisać w taki sposób, aby umożliwić wielokrotne jego wykonanie bez konieczności powrotu do edytora.

----

12. Napisz program obliczający wielkość wygranej przy założeniu, że gracz rzuca kostką dwukrotnie.
Jeśli p i q oznaczają odpowiednio wyniki pierwszego i drugiego rzutu, to wygrana jest określona według tabeli:
<img src="https://i.imgur.com/ZsiSesG.png" width="100%">

Ponadto, jeśli wynikami obu rzutów jest 5, to gracz otrzymuje premię w postaci dodatkowych 5 punktów. Program napisz w dwóch wersjach. W wersji pierwszej wyniki rzutów wczytuj z klawiatury. W wersji drugiej wyniki rzutów powinny być losowane. W tym celu skorzystaj z dwóch funkcji:
```CPP
srand(time(NULL));
rand() % 6 + 1;
```
Program należy napisać w taki sposób, aby umożliwić wielokrotne jego wykonanie bez konieczności powrotu do edytora. Do czyszczenie ekranu użyj funkcji:
```CPP
system("cls")
```

----

13. Napisz program na zbadanie, czy wczytana z klawiatury dodatnia liczba całkowita n jest liczbą doskonałą.
 
UWAGA 1: Liczba doskonała to taka, dla której suma jej dzielników (nie licząc samej liczby n), jest równa tej liczbie. Przykładami liczb doskonałych są liczby 6 i 28.

UWAGA 2: Wystarczy sprawdzić podzielniki nie większe niż sqrt(n);

Program należy napisać w taki sposób, aby umożliwić wielokrotne jego wykonanie bez konieczności powrotu do edytora. Możesz wykorzystać poniższy algorytm lub zaproponować własny:
<img src="https://i.imgur.com/4V4mU6k.png" width="100%">

----

14. Napisz program wyszukujący liczby pierwsze z przedziału [2...n]. Liczbę naturalną n wczytaj z klawiatury.
Program należy napisać w taki sposób, aby umożliwić wielokrotne jego wykonanie bez konieczności powrotu do edytora.

----

15. Napisz program, który pobierze od użytkownika liczbę a oraz znak, a następnie wydrukuje odwrócony trójkąt utworzony za pomocą wskazanego znaku, zaczynając od szerokości a i kończąc na szerokości 1.

----

16. Napisz program, który pobierze od użytkownika liczbę a, liczbę b oraz znak, a następnie wydrukuje prostokąt utworzony za pomocą wskazanego znaku o szerokości a i wysokości b utworzony za pomocą wskazanego znaku. Dla danych a=3, b=5, znak=% powstanie:
```
%%%
%%%
%%%
%%%
%%%
```

----

17. Napisz program, który pobierze od użytkownika liczbę a, liczbę b oraz znak, a następnie wydrukuje prostokąt utworzony za pomocą wskazanego znaku o szerokości a i wysokości b utworzony za pomocą wskazanego znaku, jednak ten nie będzie wypełniony. Dla danych `a = 3`, `b = 5`, `znak = %` powstanie:
```
%%%
% %
% %
% %
%%%
```

----

18. Gra Euklidesa przebiega według następujących zasad:
- W grze bierze udział dwóch graczy (A i B). Początkowo każdy z nich dysponuje pewną niezerową liczbą identycznych żetonów - odpowiednio a i b.
- Jeżeli jeden z graczy ma mniej żetonów niż drugi, może wykonać ruch. Wykonując ruch, gracz zabiera partnerowi tyle żetonów, ile sam posiada. Żetony te są wyłączone z dalszej gry (tj. gracz wykonujący ruch ich nie przejmuje).
- Gra kończy się w sytuacji, gdy żaden z graczy nie może wykonać ruchu (w szczególności gra może skończyć się bezpośrednio po "rozdaniu" żetonów, bez jakichkolwiek ruchów).

Znając początkowe zasoby graczy (tj. wartości a i b), wyznacz łączną liczbę żetonów pozostałych w grze w chwili jej zakończenia.

----

19. Napisz program zwracający ciąg Fibonacciego. Jako granica wyliczenia ciągu powinna być liczba wskazana przez użytkownika. 

----

20. Napisz program, który za pomocą tablicy będzie wykonywał algorytm sortowania bąbelkowego dla zadanego przez użytkownika zestawu danych. 

----

21. Napisz program, który będzie miał utworzone dwie statycznie tablice dwuwymiarowe o wymiarach 100×100.
Następnie program ma pobrać od użytkownika liczby `a` i `b` oraz `c` i `d` które mają oznaczać ilość wierszy oraz kolumn tablicy pierwszej macierzy oraz drugiej.
Następnie ma pobrać `a×b` liczb pierwszej tablicy oraz `c×d` liczb drugiej tablicy.

Jako wynik program ma wyświetlić sumę tablic A+B wedle następującego wzoru:

W przypadku sytuacji błędnych program ma wypisać komunikat: BŁĄD i zakończyć działanie.

----

22. Napisz program, który sprawdza, czy wczytany do tablicy char wyraz jest palindromem. Tablica char może przechowywać do 30 znaków.

----

23. . Popraw błędy w następującym kodzie:
```CPP
#include <iostream> 
#include <conio.h>
int main() {
 using namespace std;
short zmienna = 213;
 
 //Wyświetlanie adresu wskaźnika 
short long * wskaznik = zmienna ;
cout << "&zmienna=" << zmienna << endl 
cout << "wskaznik=" << wskaznik << endl;
 
 //Wyświetlanie danych, na które wskazuje adres wskaźnika 
 cout "Adres zmienna=" << * zmienna << endl;
 cout << "*wskaznik=" << wskaznik
 
 //Modyfikacja danych, na które wskazuje wskaźnik 
 cout << "zmienna=" << zmiena << endl;
* wskaznik = & 50;
cout << "zmienna=" << zienna << endl;
 return 0;
}
```

----

24. Napisz program porównujący działanie szybkość zapisu i odczytu danych z tablic przy  wykorzystaniu wskaźników oraz bez zastosowania wskaźników. Program powinien pobierać od użytkownika ilość elementów tablicy i dla każdego z elementu przypisać jako wartość numer iteracji oraz dodać do itego elementu 50.
```CPP
tablica[i] = i;
tablica[i]+50;
``` 
Wynikiem działania programu powinien być czas przetwarzania takiej tablicy z użyciem wskaźników oraz bez użycia wskaźników.

----

25. Napisz program, który tworzy jednowymiarową tablicę dynamiczną o n elementach typu int oraz oblicza sumę elementów tablicy. Tablica powinna być wypełniana losowymi wartościami o zadanej przez użytkownika ilości.

----

26. Napisz bezargumentową funkcję, która rezerwuje pamięć dla pojedynczej zmiennej typu int i zwraca jako wartość wskaźnik do niej.

----

27. Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch zmiennych typu int, która zamienia ze sobą wartości wskazywanych zmiennych tylko wtedy, gdy wskazywana przez drugi argument zmienna jest mniejsza od zmiennej wskazywanej przez pierwszy argument.

----

28. Napisz program, który wypełni tablicę liczbami losowymi typu int z przedziału `[a , b]` podanego przez użytkownika. Przyjmij, że maksymalny rozmiar tablicy to 100.
Rzeczywisty rozmiar n podaje użytkownik (n<=100). Program ma wykonać następujące operacje za pomocą funkcji:
1. średnia arytmetyczna elementów tablicy
2. liczba wystąpień elementu podanego przez użytkownika
3. liczba elementów nieparzystych oraz ich suma
4. element minimalny oraz jego indeks
5. element maksymalny oraz jego indeks
6. para sąsiednich elementów o największej sumie
7. element najczęściej występujący w tablicy
8. przestawienie kolejności elementów w tablicy (np. pierwszy – ostatni, ostatni –pierwszy itp…)
9. kopiowanie tablicy
    
Program powinien zawierać funkcję:
wczytującą dane:
```CPP
int A[] czyt_dane(int &n);
```
wypisującą tablicę:
```CPP
void pisz_tab(int A[ ], int &n);
```

oraz
```CPP
float srednia(int A[ ], int &n);
int ile(int A[ ], int &n);
int nieparzyste(int A[ ], int &n);
int min(int A[ ], int &n);
int max(int A[ ], int &n);
void sasiednie(int A[ ], int &n);
int najczestszy(int A[ ], int &n);
void przestawianie(int A[ ], int &n);
void kopiowanie(int A[ ], int B[], int &n); 
```

----

29. Napisz program, który dla zadanej tabeli będzie realizował algorytm sortowania quicksort. Kod zawierający algorytm sortowania umieść w funkcji
```CPP
void sort_quick (int A[], int &n)
```

----

30. Napisz funkcje o nazwie is_sorted, który jako argumenty przyjmuje tablice typu int, rozmiar tej tablicy oraz znak c. Znak c reprezentuje opcje: r - rosnąco, m - malejąco. Funkcja ma zwracać wartość 1 jeżeli dana tablica jest poprawnie posortowana, zero w przeciwnym przypadku oraz -1 jeżeli wpisana zostanie inna opcja.

----

31. Napisz funkcję `auto iota(int a[], int n, int start) -> void`, która zainicjalizuje tablicę a o rozmiarze n kolejnymi liczbami całkowitymi zaczynając od start.
Przykład: dla wywołania iota(a, 4, 5) tablica a zawierałaby liczby 5, 6, 7, i 8.
Przetestuj tę funkcję, pisząc własną funkcję main pobierając parametry od użytkownika.
W funkcji main wypisz zawartość zainicjalizowanej tablicę.

----

32. Napisz funkcje o nazwie `dec_to_n`, który jako argument będzie przyjmował liczbę naturalną, a w rezultacie będzie wypisywał liczbę w postaci systemu liczbowego o podstawie n (który ma przyjmować jako argument funkcji).

W przypadku sytuacji błędnej program ma wypisać komunikat: BŁĄD.

----

33. Napisz program, który będziesz przyjmował dokolny znak od użytkownika i będzie ze wskazanego znaku tworzył znak większości o domyślnym rozmiarze 5. Czyli dla znaku wejściowego powinniśmy otrzymać w konsoli. 
```
*
  *
   *
    *
     *
    *
   *
  *
*
```
Za pomocną znaków ‘+’ i ‘-‘ na klawiaturze powinna być możliwość zwiększania i zmniejszania rozmiaru prezentowanego znaku. Program powinien być napisany z wykorzystaniem funkcji.

----

34. Napisz program służący do sprawdzenia czy hasło jest wystarczająco silne. Użytkownik wprowadza wartość tekstową, a aplikacja zatwierdzi hasło, jeżeli będzie składało się przynajmniej z 8 znaków, jednego znaku specjalnego, liczby i dużej litery. Jeżeli hasło będzie nie wystarczająco silne użytkownik powinien wprowadzić inne, które też zostanie sprawdzone.

----

35. Napisz program symulujący serię rzutów kostką sześcienną. Niech program prosi o podanie liczby rzutów a następnie wypisze rezultat losowania. Zadbaj o niedeterministyczne zachowanie programu.
Przykładowa sesja mogłaby wyglądać następująco:
Podaj liczbę rzutów: 8 
Wylosowano: 4 2 2 6 1 3 4 1

----

36. Napisz program symulujący losowanie Lotto. Losowane powinno być 6 licz z przedziału 1-49, wyniki losowanie nie mogą się powtórzyć. Wynik proszę zaprezentować w postaci posortowanej.

----

37. Przygotuj plik konfiguracyjny w postaci pliku .txt, który będzie wczytywany przez Twój program.
Plik konfiguracyjny powinien zawierać dwa parametry znak oraz ilość. Dane w pliku powinny być zapisany w postaci:
```
znak=%
ilosc=55
```
Aplikacja powinna pobierać te wartości i wyświetlać znak tyle razy ile zostało to wskazane w pliku konfiguracyjnym. 

----

38. Napisz program, który wygeneruje najpierw jedną liczbę z przedziału 1-1000, a następnie wygeneruje tyle liczb z zakresu 1-999999, które zapisze do pliku dane.txt.

Następnie każda liczba zostanie pobrana z pliku dane.txt i dla każdej z liczb zostanie wykonane dodawanie pojedynczych elementów liczby, wynik dodawania razem z działaniem zostanie zapisany w pliku wynik.txt.

----

39. Napisz program, w którym za pomocą typu wyliczeniowego enum dni będzie przechowywana informacja o 7 dniach tygodnia:
```CPP
enum dni {poniedziałek, wtorek, środa, czwartek, piątek, sobota, niedziela};
```
Program powinien po uruchomieniu i wpisaniu z klawiatury np. piątek policzyć, ile dni zostało jeszcze do końca tygodnia. Informacja o licznie pozostałych dni do końca tygodnia ma być zwracana przez funkcję, o deklaracji: `int zostalo(dni)`;

----

40. Zaproponuj implementację kolejki z wykorzystaniem tablicy w C++. Program powinien móc realizować podstawowe operacje dla kolejki:
• Dodawanie na kolejkę
• Pobieranie z kolejki 
• Sprawdzanie wielkości kolejki
• Sprawdzenie czy kolejka jest pełna 
• Wyświetlenie zawartości kolejki

----

41. Zaproponuj implementację stosu z wykorzystaniem tablicy w C++. Program powinien móc realizować podstawowe operacje dla stosu:
• Dodawanie na stos
• Pobieranie ze stosu
• Sprawdzanie wielkości stosu
• Sprawdzenie czy stos jest pełny 
• Wyświetlenie zawartości stos

----

42. 4. Napisz program, w którym utworzona zostanie klasa zawierająca:
- dwie dowolne zmienne,
- jedną metodę,
- konstruktor inicjujący zmienne.
W funkcji main programu utwórz obiekt klasy i przetestuj działanie.

----

43. W klasie stworzonej w poprzednim zadaniu dodaj metody o tej samej nazwie, ale różnych argumentach – zastosuj mechanizm przeciążania metod. W funkcji main programu przetestuj działanie metod.

----

44. Napisz program, który tworzy klasę Pracownik, o polach: `imię`, `nazwisko`, `ulica`, `nr_domu`, `kod_pocztowy`, `miejscowość`. 
Napisać funkcję, która wczytuje dane, oraz funkcję wyświetlającą w postaci wizytowki, np.: 
```
----------------------
Jan Kowalski 
ul. Długa 20 
00-000 Warszawa 
---------------------
```

----

45. Napisz program, który tworzy klasę Rachunek o polach: data, wartosc_netto, podatek, wartosc_brutto. Napisać funkcję, która wczytuje datę, wartość netto, oraz funkcję, która oblicza  wartość podatku oraz wartość brutto dla stawki 23%.

----

46. Napisz program, który tworzy klasę Uczen o polach: imię, nazwisko, liczba_pytan, poprawne_odp. 
Napisać funkcję, która wczytuje dane, oraz funkcję, która oblicza procent poprawnych odpowiedzi.

----

47. Zaproponuj trzy klasy. Jedna klasa jest bazowa a dwie pozostałe dziedziczą po niej. Przykładowe klasy to: Pojazd, Auto i Motor lub Figura, Prostokąt i Koło lub Istota, Ptak, Gad itp. Dla klasy bazowej stwórz dwie zmienne, a w klasie potomnej przynajmniej jedną. Dla każdej klasy stwórz: minimum dwa konstruktory, jedną metodę realizującą mechanizm przeciążania i jedną metodą realizującą mechanizm polimorfizmu.

----

48. Utwórz obiekt osoba, który będzie zawierał dwa pola:
```CPP
string imie;
string nazwisko;
int rok_urodzenia
```
Twoim zadaniem jest przygotować tak aplikację, żeby przy kopiowaniu obiektów w obiekcie docelowym po kopiowaniu wartość pola imię była zapisana od tyłu. Dla przykładu, jeżeli inicjalnie miała wartość obiekt.imie = „Slawomir” to po skopiowaniu obiekt1.imie =”rimowalS” 
hint: wykorzystaj konstruktor kopiujący. 

----

49. Napisz program do obsługi książki adresowej. Każdy kontakt to oddzielny obiekt (imię, nazwisko, numer_tel).
Program ma umożliwiać:
- zapisanie do 100 kontaktów,
- odczyt całej książki adresowej,
- szukanie konkretnej osoby po nazwisku,
- zapis i odczyt całej książki adresowej do/z pliku tekstowego. 
Koniecznie użyj funkcji. 

hint: warto się zastanowić nad wykorzystaniem listy.

----

PROJECT:

Napisz program rysowania znakiem ASCII poniższej figury. Program powinien umożliwić:
− wybór znaku kodu ASCII;
- wczytanie początkowych rozmiarów figury;
- przesuwanie figury klawiszami ←, →, ↑, ↓; 
- powiększanie oraz zmniejszanie rozmiaru figury za pomocą klawiszy + i -; 
− ograniczenie przesuwania i rozmiarów figury do obszaru ekranu; 
<img src="https://i.imgur.com/w7h1DpK.png" width="100%">

Uwaga: punkt początkowy (kropka) znajduje się w lewym górnym narożniku ekranu.

----

EXAM:

1. Write a program that takes an array of integers from the user and returns the sum of even numbers in that array.

2. Write a program that takes an array of integers from the user or declares a constant array and returns true if the array is sorted in ascending order, and false otherwise. The numbers do not have to be strictly increasing.

3. Write a program that takes a sequence of 0s and 1s from the user. The program should return a list of positive integers representing the lengths of sequences consisting of 1s in the input list, in order from left to right.

4. Write a program that takes a two-dimensional array of integers from the user or declares a constant NxN array, representing a matrix. The program should calculate and print the sum of elements on the main diagonal (the diagonal going from the top left corner to the bottom right corner) of the matrix.

5. Write a program that takes a list of integers from the user or declares a constant list and finds the longest non-decreasing subsequence (a sequence of consecutive or equal elements) in that list. The program should print this subsequence.
