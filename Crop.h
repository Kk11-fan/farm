#ifndef CROP_H
#define CROP_H
#include "Farm.h"

class Crop : public Farm{
    protected:
        string name;
        int age;
        int matureAge;

    public:
        Crop(string n, int m) : name(n), age(0), matureAge(m){}

        void update(Time& t){
            age++;
        }

        bool isMature(){
            return age >= matureAge;
        }

        string getName(){
            return name;
        }

        void display(){
            cout << name << " (Age: " << age << "/" << matureAge << ")";
            if (isMature()) {
                cout << " - Ready to Harvest!";
            }
            cout << endl;
        }

        virtual ~Crop(){}
};

#endif

