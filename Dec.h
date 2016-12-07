#include <deque>
#include <string>

#ifndef LAB3_DEC_H
#define LAB3_DEC_H

using namespace std;

typedef enum {
    LOW,
    NORMAL,
    HIGH
} ElementPriority;

typedef struct {
    string name;
} QueueElement;


class PriorityQueue {
public:
    deque<QueueElement> lowDeque;
    deque<QueueElement> normalDeque;
    deque<QueueElement> highDeque;
    // Конструктор, создает пустую очередь
    PriorityQueue();

    // Деструктор
    ~PriorityQueue();

    // Добавить в очередь элемент element с приоритетом priority
    void PutElementToQueue(QueueElement &element, ElementPriority priority);

    // Получить элемент из очереди
    // метод должен возвращать элемент с наибольшим приоритетом, который был
    // добавлен в очередь раньше других
    QueueElement GetElementFromQueue();

    // Выполнить акселерацию
    void Accelerate();
};


#endif //LAB3_DEC_H
