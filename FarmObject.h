#ifndef FARMOBJECT_H
#define FARMOBJECT_H

#include <string>
#include <iostream>
#include "Time.h"

using namespace std;

class FarmObject{
    public:
        virtual void update(Time& t) = 0;
        virtual void display() = 0;
        virtual string getName() = 0;
        virtual bool isMature() = 0;
        virtual ~FarmObject() {}
};

#endif
