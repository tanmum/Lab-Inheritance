//
//  Customer.cpp
//  Lab Inheritance
//
//  Created by Tan Bui on 4/4/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include "Customer.h"

Customer::Customer(char* n, char* a, char* p, char*f, int s)
: Company(n, a, p, f)
{
    setSize(s);
}

void Customer::setSize(int s)
{
    size = s;
}

int Customer::getSize()
{
    return size;
}