//
//  Vendor.cpp
//  Lab Inheritance
//
//  Created by Tan Bui on 4/4/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include "Vendor.h"

Vendor::Vendor()
: Company()
{
    
}

void Vendor::setTaxID(char * t)
{
    taxID.setTo(t);
}

void Vendor::setSpecialties(char * s)
{
    specialties.setTo(s);
}

const char* Vendor::getTaxID()
{
    return taxID.getStr();
}

const char* Vendor::getSpecialties()
{
    return specialties.getStr();
}