#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

class CounterType {
	public:
		CounterType();
		CounterType(int count);
		void setCount(int newCount);
		void increase() { ++count; }
		void decrease();
		int getCount() const { return count; }
		void printCount() const;
	private:
		int count;
};

#endif
