#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

class CounterType {
	public:
		CounterType();
		CounterType(int count);
		void setCount(int count);
		void increase() { ++count; }
		void decrease();
		int getCount() const { return count; }
		void printCount() const;

        int getSharedCount() const;
	private:
		int count;
        static int sharedCount;
};

#endif
