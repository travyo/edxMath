//
//  main.cpp
//  Math
//
//  Created by Travis Young on 8/2/18.
//  Copyright © 2018 Travis Young. All rights reserved.
//

//#include "stdafx.h"  Visual Studio file -- remove it for xcode
#include "Math.h"

int Math::pow(int base, int exp)
{
    int result = 1;
    
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    
    return result;
}

