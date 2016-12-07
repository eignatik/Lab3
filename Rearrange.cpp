
#include <cstdlib>
#include <time.h>
#include <iterator>
#include "Rearrange.h"

Rearrange::Rearrange() {
}
Rearrange::~Rearrange() {
}

void Rearrange::fillList(int numberOfElements) {
    if (numberOfElements > 20) {
        cout << "Number of elements cannot be more than 20";
    } else if (numberOfElements <= 0) {
        cout << "Please, enter any number above zero";
    } else {
        srand(time(0));
        for (int i = 0; i < numberOfElements; ++i) {
            intList.push_front(rand() % 20 + 1);
        }
    }
}

void Rearrange::printList() {
    copy(intList.begin(), intList.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

void Rearrange::changeOrder() {
    list<int> tempList;
    list<int>::iterator oddIt = intList.begin();
    list<int>::iterator evenIt = intList.end();
    evenIt--;
    for (int i = 1; i <= intList.size(); i++) {
        if (i % 2 != 0) {
            tempList.push_back(*oddIt);
            oddIt++;
        } else {
            tempList.push_back(*evenIt);
            evenIt--;
        }
    }
    intList = tempList;
}
