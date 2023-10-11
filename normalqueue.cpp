#include <iostream>
#include <queue>

int main()
{
    // Declaration and Initialization of Queue
    std::queue<int> myQueue;

    // Enqueue (Push) Operation
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Dequeue (Pop) Operation
    myQueue.pop();

    // Front Element
    int frontElement = myQueue.front();

    // Queue Size
    int queueSize = myQueue.size();

    // Checking if Queue is Empty
    bool isEmpty = myQueue.empty();

    // Output
    std::cout << "Front Element: " << frontElement << std::endl;
    std::cout << "Queue Size: " << queueSize << std::endl;
    std::cout << "Is Queue Empty? " << (isEmpty ? "Yes" : "No") << std::endl;

    return 0;
}
