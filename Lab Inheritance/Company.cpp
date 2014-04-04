//
//  Company.cpp
//  Lab Inheritance
//
//  Created by Tan Bui on 4/4/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include "Company.h"
#include "String.hpp"

Company::Company()
{
    
}

const char* Company::getType()
{
    return "Company";
}

void Company::setName(char * n)
{
    name.setTo(n);
}

void Company::setAddress(char * a)
{
    address.setTo(a);
}

void Company::setPhone(char * p)
{
    phone.setTo(p);
}

void Company::setFax(char * f)
{
    fax.setTo(f);
}

const char* Company::getName()
{
    return name.getStr();
}

const char* Company::getAddress()
{
    return address.getStr();
}

const char* Company::getPhone()
{
    return phone.getStr();
}

const char* Company::getFax()
{
    return fax.getStr();
}