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



<img src="" width="100%">
