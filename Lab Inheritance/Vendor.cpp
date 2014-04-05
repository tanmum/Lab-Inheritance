//
//  Vendor.cpp
//  Lab Inheritance
//
//  Created by Tan Bui on 4/4/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include "Vendor.h"

Vendor::Vendor(char* n, char* a, char* p, char*f, char* t, char* s)
: Company(n, a, p, f)
{
    setTaxID(t);
    setSpecialties(s);
}

const char* Vendor::getType()
{
    return "Vendor";
}

const char* Vendor::getSpecifics()
{
    const char* lineFormat = "%20s: %s\n";
    char *result = new char[1024]{0};
    sprintf(result, lineFormat, "Tax Id", getTaxID());
    sprintf(result, "%s%20s: %s\n", result, "Specialties", getSpecialties());
    return result;
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