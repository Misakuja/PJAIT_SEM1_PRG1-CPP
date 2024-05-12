#include <iostream>
using namespace std;

class MainClass {
protected:
    int var1, var2;
public:
    MainClass(int var1, int var2) : var1(var1), var2(var2) {}
    MainClass() : var1(0), var2(0) {}

    void override() const {
        cout << "Override: Sum of variables in MainClass: " << var1 + var2 << endl;
    }
    virtual void polymorphism() {
        cout << "Polymorphism: MainClass output" << endl;
    }
};
class DerivativeClass1 : public MainClass {
private:
    int var3;
public:
    DerivativeClass1(int var1, int var2, int var3) : MainClass(var1, var2), var3(var3) {}
    DerivativeClass1() : var3(0) {}

    void override() {
        cout << "Override: Sum of variables in DerivativeClass1: " << var1 + var2 + var3 << endl;
    }
    void polymorphism() override {
        cout << "Polymorphism: DerivativeClass1 output" << endl;
    }
};
class DerivativeClass2 : MainClass {
private:
    int var4;
public:
    DerivativeClass2(int var1, int var2, int var4) : MainClass(var1, var2), var4(var4) {}
    DerivativeClass2() : var4(0) {}

    void override() {
        cout << "Override: Sum of variables in DerivativeClass2: " << var1 + var2 + var4 << endl;
    }
    void polymorphism() override {
        cout << "Polymorphism: DerivativeClass2 output" << endl;
    }
};
int main() {
    int n, m, o, p, q, r, s;
    cout << "Assign 7 values to integer values n-s";
    cin >> n >> m >> o >> p >> q >> r >> s;

    MainClass mainBuilder(n, m);
    DerivativeClass1 derivativeBuilder1(m, o, p);
    DerivativeClass2 derivativeBuilder2(q, r, s);

    cout << endl << "main class:" << endl;
    mainBuilder.override();
    mainBuilder.polymorphism();

    cout << endl << "derivative 1:" << endl;
    derivativeBuilder1.override();
    derivativeBuilder1.polymorphism();

    cout << endl << "derivative 2:" << endl;
    derivativeBuilder2.override();
    derivativeBuilder2.polymorphism();
    return 0;
}
