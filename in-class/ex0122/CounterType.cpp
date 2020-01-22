#include <iostream> 	// for cin and cout
#include "CounterType.h"
using namespace std;

CounterType::CounterType() {
	count = 11;
}

CounterType::CounterType(int newCount) {
	count = newCount;
}

void CounterType::setCount(int newCount) {
	if (newCount < 0) {
		count = 0;
	} else {
		count = newCount;
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
