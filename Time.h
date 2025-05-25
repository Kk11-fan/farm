#ifndef TIME_H
#define TIME_H

class Time{
    private:
        int day;
    public:
        Time() : day(1){}
        void nextDay(){ 
            day++;
        }
        int getDay() const{ 
            return day;
        }
};

#endif
