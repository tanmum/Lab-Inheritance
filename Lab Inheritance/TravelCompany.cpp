//
//  TravelCompany.cpp
//  Lab Inheritance
//
//  Created by Tan Bui on 4/4/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include "TravelCompany.h"

TravelCompany::TravelCompany(char* n, char* a, char* p, char*f)
: Company(n, a, p, f)
{
    
}

const char* TravelCompany::getType()
{
    return "Travel Company";
}