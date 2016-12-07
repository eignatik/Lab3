#include "Dec.h"

PriorityQueue::PriorityQueue() {

}

PriorityQueue::~PriorityQueue() {
    //free(&myDeque);
}

void PriorityQueue::PutElementToQueue(QueueElement &element, ElementPriority priority) {
    switch(priority) {
        case LOW:
            lowDeque.push_front(element); break;
        case HIGH:
            highDeque.push_front(element); break;
        default:
            normalDeque.push_front(element); break;
    }
}

QueueElement PriorityQueue::GetElementFromQueue() {
    QueueElement element;
    if (!highDeque.empty()) {
        element = highDeque.back();
        highDeque.pop_back();
    } else if (!normalDeque.empty()) {
        element = normalDeque.back();
        normalDeque.pop_back();
    } else if (!lowDeque.empty()) {
        element = lowDeque.back();
        lowDeque.pop_back();
    } else {
        return element;
    }
    return element;
}

void PriorityQueue::Accelerate() {
    for (int i = 0; i < lowDeque.size(); ++i) {
        highDeque.push_front(lowDeque[i]);
        lowDeque.pop_back();
    }
}