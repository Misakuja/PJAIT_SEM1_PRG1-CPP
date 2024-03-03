#include <iostream>

using namespace std;

class QueueWork {
public:
    QueueWork(int capacity);
    ~QueueWork();
    int* nQueue;

    void enqueueElement(int element);
    void dequeueElements();
    void sizeOfQueue() const;
    void printQueue() const;
    bool isFull() const;

    int size;
private:
    int capacity;
    int rear;
    int front;
};
QueueWork::QueueWork(int capacity) : capacity(capacity) {
    capacity = capacity;
    front = 0;
    rear = -1;
    size = 0;

    nQueue = new int[capacity];
    }
QueueWork::~QueueWork() {
    delete[] nQueue;
}
void QueueWork::enqueueElement(int element) {
    if (isFull()) {
        cout << "Cannot enqueue more elements - queue is full" << endl;
        return;
    }
    cout << "Enqueued element: " << element;
    rear = (rear + 1) % capacity;
    nQueue[rear] = element;
    size++;
    cout << endl;
}
void QueueWork::dequeueElements() {
    cout << "Dequeued: " << nQueue[front] << " " << endl;
    front = (front + 1) % capacity;
    size--;
}
void QueueWork::sizeOfQueue() const {
        cout << "Size of the queue: " << size << endl;
}
bool QueueWork::isFull() const {
    return size == capacity;
}
void QueueWork::printQueue() const {
    cout << "Queue elements: ";
    for (int i = 0; i < size; ++i) {
        cout << nQueue[i] << " ";
    } cout << endl;
}
int main() {
    int rerunCondition ;
    do {
        int capacity;
        cout << "Provide the capacity of the queue: " << endl;
        cin >> capacity;

        QueueWork queueWorker(capacity);

        int action;
        int anotherAction = 1;
        int defaultNotCalled = 1;
        do {
            cout << "What would you like to do? \n 1 - Enqueue Element \n 2 - Dequeue Element \n 3 - Print Queue \n 4 - Output the queue's size \n5 - Check if the queue is full\n";
            cin >> action;
            switch (action) {
                case 1:
                    int moreElements;
                    do {
                        if (!queueWorker.isFull()) {
                        int element;
                        cout << "Provide the element you want to add to the queue" << endl;
                        cin >> element;

                        queueWorker.enqueueElement(element);

                            cout << "Would you like to enqueue another element? \n 1 - Yes\n 0 - No" << endl;
                            cin >> moreElements;
                        } else if (queueWorker.isFull()) {
                            cout << "Cannot enqueue another element" << endl;
                            moreElements = 0;
                        }
                    } while (moreElements == 1);
                    break;
                case 2:
                    int moreElements2;
                    do {
                        if (queueWorker.size > 0) {
                            queueWorker.dequeueElements();

                            cout << "Would you like to dequeue another element? \n 1 - Yes \n 0 - No" << endl;
                            cin >> moreElements2;
                        } else if (queueWorker.size == 0) {
                            cout << "Cannot enqueue another element" << endl;
                            moreElements2 = 0;
                        }
                    } while (moreElements2 == 1);
                    break;
                case 3:
                    queueWorker.printQueue();
                    break;
                case 4:
                    queueWorker.sizeOfQueue();
                    break;
                case 5:
                    if (queueWorker.isFull())  cout << "The queue is full" << endl;
                    else if(!queueWorker.isFull())  cout << "The queue is not full "<< endl;
                    break;
                default:
                    cout << "Wrong action" << endl;
                    anotherAction = 1;
                    defaultNotCalled = 0;
                    break;
            }
            if (defaultNotCalled == 1) {
                cout << "Would you like to do another action? \n 1 - Yes \n 0 - No" << endl;
                cin >> anotherAction;
            }
        } while(anotherAction == 1);
        cout << "Wanna rerun the program? \n 1 - Yes \n 0 - No" << endl;
        cin >> rerunCondition;
    } while (rerunCondition == 1);
    return 0;
}