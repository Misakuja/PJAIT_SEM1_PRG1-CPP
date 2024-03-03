#include <iostream>
using namespace std;

class stackWork {
public:
    stackWork(int capacity);
    ~stackWork();
    int* nStack;
    int top;

    void pushElement(int element);
    void popElements();
    void sizeOfStack() const;
    void printStack() const;
    bool isFull() const;
private:
    int capacity;
};
stackWork::stackWork(int capacity) : capacity(capacity) {
    top = -1;
    nStack = new int[capacity];
}
stackWork::~stackWork() {
    delete[] nStack;
}
void stackWork::pushElement(int element) {
    nStack[++top] = element;
}
void stackWork::popElements() {
    cout << "Popped element: " << nStack[top--] << endl;
}
void stackWork::sizeOfStack() const {
    cout << "Size of the stack: " << top + 1 << endl;
}
bool stackWork::isFull() const {
    return top == capacity - 1;
}
void stackWork::printStack() const {
    cout << "Elements of the stack: ";
    for (int i = 0; i <= top; ++i) {
        cout << nStack[i] << " ";
    } cout << endl;
}
int main() {
    int capacity;
    cout << "What should be the capacity of the stack?" << endl;
    cin >> capacity;

    stackWork stackWorker(capacity);

    int rerunCondition;
    do {
    int action;
    int anotherAction = 1;
    int  defaultNotCalled = 1;
    do {
        cout << "What would you like to do?\n 1 - Push Element\n 2 - Pop Element\n 3 - Print Stack\n 4 - Output the stack size\n5 - Check if the stack is full\n";
        cin >> action;

        switch(action) {
            case 1:
                int element;
                int moreElements;
                do {
                    if(!stackWorker.isFull()) {
                        cout << "What element would you like to add to the stack?" << endl;
                        cin >> element;

                        stackWorker.pushElement(element);

                        cout  << "Would you like to add another element? \n 1 - Yes\n0 - No" << endl;
                        cin >> moreElements;
                    }
                    else if(stackWorker.isFull()) {
                        cout << "Cannot add an element, stack is full" << endl;
                        moreElements = 0;
                    }
                } while(moreElements == 1);
                break;
            case 2:
                int moreElements2;
                do {
                    if(stackWorker.top >= 0) {
                        stackWorker.popElements();

                        cout << "Would you like to dequeue another element? \n 1 - Yes \n 0 - No" << endl;
                        cin >> moreElements2;
                    }
                    else if(stackWorker.top < 0) {
                        cout << "Cannot pop another element, stack is empty" << endl;
                        moreElements2 = 0;
                    }
                } while(moreElements2 == 1);
                break;
            case 3:
                stackWorker.printStack();
                break;
            case 4:
                stackWorker.sizeOfStack();
                break;
            case 5:
                if(stackWorker.isFull()) cout << "The stack is full" << endl;
                else if(!stackWorker.isFull()) cout << "The stack is not full" << endl;
                break;
            default:
                cout << "Wrong action" << endl;
                anotherAction = 1;
                defaultNotCalled = 0;
                break;
        }
        if (defaultNotCalled == 1) {
            cout << "Would you like to do another action? \n 1 - Yes\n 0 - No" << endl;
            cin >> anotherAction;
        }
    } while(anotherAction == 1);
    cout << "Wanna rerun the program?\n1 - Yes\n 0 - No" << endl;
    cin >> rerunCondition;
} while (rerunCondition == 1);
    return 0;
}