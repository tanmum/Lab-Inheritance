//
//  main.cpp
//  Lab Inheritance
//
//  Created by Tan Bui on 4/4/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include <iostream>
#include "String.hpp"
#include "Vendor.h"
using namespace std;


int main(int argc, const char * argv[])
{
    Company *c = new Vendor("A","b","c","d","e","f");
    c->show();
    delete c, c = 0;
    return 0;
}

