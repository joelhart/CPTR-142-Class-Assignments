#include <iostream> 	// for cin and cout
#include "CounterType.h"
using namespace std;

int CounterType::sharedCount = 1;

CounterType::CounterType() {
	count = 11;
}

CounterType::CounterType(int count) {
	this->count = count;
}

void CounterType::setCount(int count) {
	if (this->count < 0) {
		count = 0;
	} else {
		this->count = count;
	}
}

void CounterType::decrease() {
	if (--count < 0) {
		count = 0;
	}
}

void CounterType::printCount() const {
	cout << count;
}

int CounterType::getSharedCount()const {
    return sharedCount;
}
