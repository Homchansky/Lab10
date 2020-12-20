#ifndef _POLINOM_
#define _POLINOM_

#include <iostream>
#include <fstream>
#include "TMonom.h"
#include "TList.h"


using namespace std;

class TPolinom : public TList<TMonomData>
{
public:

    TPolinom();
    TPolinom(TPolinom& _v);

    TPolinom& operator+= (TMonom& _v);

    TPolinom operator* (TPolinom& _v);
    TPolinom operator+ (TPolinom& _v);
    TPolinom operator- (TPolinom& _v);

};

#endif