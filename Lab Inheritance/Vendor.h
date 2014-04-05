//
//  Vendor.h
//  Lab Inheritance
//
//  Created by Tan Bui on 4/4/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef __Lab_Inheritance__Vendor__
#define __Lab_Inheritance__Vendor__

#include <iostream>
#include "Company.h"
#include "String.hpp"

class Vendor : public Company
{
    String taxID;
    String specialties;
public:
    Vendor(char* n, char* a, char* p, char*f, char* t, char* s);
    
    const char* getType();
    const char* getSpecifics();
    
    void setTaxID(char*);
    void setSpecialties(char*);
    const char* getTaxID();
    const char* getSpecialties();
};

#endif /* defined(__Lab_Inheritance__Vendor__) */
