#include <iostream>
using namespace std;

class ClassTest {
private:
    int variable1;
    int variable2;
public:
    int variable3;

    ClassTest(): variable1(5), variable2(6), variable3(11) {}
    int sumOfVars() const;
    int sumOfVars(int variable3) const;
};
int ClassTest::sumOfVars() const {
    return variable1 + variable2;
}
int ClassTest::sumOfVars(int variable3) const {
    return variable1 + variable2 + variable3;
}
int main(){
    ClassTest object;
    cout << "Sum before function overloading: " << object.sumOfVars() << endl;
    cout << "Sum after function overloading: " << object.sumOfVars(object.variable3) << endl;
    return 0;
}