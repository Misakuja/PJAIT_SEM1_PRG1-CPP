#include <iostream>
using namespace std;

class ClassTest {
private:
    int variable1;
    int variable2;
public:
    ClassTest(): variable1(5), variable2(6) {}
    int sumOfVars() const;
};
int ClassTest::sumOfVars() const {
    return variable1 + variable2;
}
int main(){
    ClassTest object;
    cout << object.sumOfVars();
    return 0;
}