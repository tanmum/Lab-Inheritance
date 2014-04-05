//
//  Customer.h
//  Lab Inheritance
//
//  Created by Tan Bui on 4/4/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef __Lab_Inheritance__Customer__
#define __Lab_Inheritance__Customer__

#include <iostream>
#include "Company.h"

class Customer : public Company
{
    int size;
    
public:
    Customer(char* n, char* a, char* p, char*f, int s);
    
    const char* getType();
    const char* getSpecifics();
    
    void setSize(int);
    int getSize();
};

#endif /* defined(__Lab_Inheritance__Customer__) */
