//
//  TravelCompany.h
//  Lab Inheritance
//
//  Created by Tan Bui on 4/4/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef __Lab_Inheritance__TravelCompany__
#define __Lab_Inheritance__TravelCompany__

#include <iostream>
#include "Company.h"

class TravelCompany : public Company
{
public:
    TravelCompany(char* n, char* a, char* p, char*f);
    
    const char* getType();
    const char* getSpecifics();
};

#endif /* defined(__Lab_Inheritance__TravelCompany__) */
