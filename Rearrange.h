#include <list>
#include <iostream>

using namespace std;

#ifndef LAB3_REARRANGE_H
#define LAB3_REARRANGE_H


class Rearrange {
    list<int> intList;
public:
    Rearrange();
    ~Rearrange();

    void fillList(int numberOfElements);
    void printList();

    void changeOrder();
};


#endif //LAB3_REARRANGE_H
