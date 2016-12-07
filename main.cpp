#include <iostream>
#include "Dec.h"
#include "Rearrange.h"

using namespace std;

int main() {
    cout << "--------------------------------------------------------------------------------------" << endl;

    PriorityQueue queue;
    QueueElement element;
    element.name = "First - LOW";
    queue.PutElementToQueue(element,LOW);
    element.name = "Second - HIGH";
    queue.PutElementToQueue(element,HIGH);
    element.name = "Third - NORMAL";
    queue.PutElementToQueue(element,NORMAL);
    element.name = "Forth - HIGH";
    queue.PutElementToQueue(element,HIGH);

    cout << "\tFirst output" << endl;
    cout << queue.GetElementFromQueue().name << endl;
    cout << queue.GetElementFromQueue().name << endl;
    cout <<  queue.GetElementFromQueue().name << endl;
    cout <<  queue.GetElementFromQueue().name << endl;

    element.name = "First - LOW";
    queue.PutElementToQueue(element,LOW);
    element.name = "Second - HIGH";
    queue.PutElementToQueue(element,HIGH);
    element.name = "Third - NORMAL";
    queue.PutElementToQueue(element,NORMAL);
    element.name = "Forth - HIGH";
    queue.PutElementToQueue(element,HIGH);

    queue.Accelerate();
    cout << "\n\t" << "Acceleration result:" << endl;

    cout << queue.GetElementFromQueue().name << endl;
    cout << queue.GetElementFromQueue().name << endl;
    cout << queue.GetElementFromQueue().name << endl;
    cout << queue.GetElementFromQueue().name << endl;

    cout << "--------------------------------------------------------------------------------------" << endl;
    Rearrange rearrange = Rearrange();
    rearrange.fillList(15);
    cout << "\t" << "Before rearranging: " << endl;
    rearrange.printList();
    cout << "\t" << "After rearranging: " << endl;
    rearrange.changeOrder();
    rearrange.printList();

    return 0;
}