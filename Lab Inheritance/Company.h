//
//  Company.h
//  Lab Inheritance
//
//  Created by Tan Bui on 4/4/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef __Lab_Inheritance__Company__
#define __Lab_Inheritance__Company__

#include <iostream>
#include "String.hpp"
using namespace std;

class Company
{
    String name;
    String address;
    String phone;
    String fax;
public:
    Company(char* n, char* a, char* p, char*f);
    
    virtual const char* getType();
    virtual void show();
    
    void setName(char*);
    void setAddress(char*);
    void setPhone(char*);
    void setFax(char*);
    const char* getName();
    const char* getAddress();
    const char* getPhone();
    const char* getFax();
    
};

#endif /* defined(__Lab_Inheritance__Company__) */
