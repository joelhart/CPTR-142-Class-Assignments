// time.h

class Time {
    public:
        Time();
        Time(int hours, int minutes);
        int getHours() { return hours; }
        int getMinutes() { return minutes; }
        void print();
    private:
        int hours, minutes;
};
