#include<queue>
#include<iostream>

using namespace std;

int main() {
    queue<int> Q;   // Initialziing a queue
    Q.push(1);      // Populating the queue
    Q.push(2);
    Q.push(3);
    Q.push(4);


    while (!Q.empty()) {  // Printing out Queue
        cout << Q.front() << " ";
        Q.pop();
    }
    cout << endl;



    return 0;
}