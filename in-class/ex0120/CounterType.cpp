#include <iostream> 	// for cin and cout
#include "CounterType.h"
using namespace std;

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
