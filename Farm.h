#ifndef FARM_H
#define FARM_H
#include <string>
#include <iostream>
#include "Time.h"

using namespace std;

class Farm{
    public:
        virtual void update(Time& t) = 0;
        virtual void display() = 0;
        virtual string getName() = 0;
        virtual bool isMature() = 0;
        virtual ~Farm() {}
};

#endif
