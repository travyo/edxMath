//
//  MathTest.cpp
//  Math
//
//  Created by Travis Young on 8/2/18.
//  Copyright © 2018 Travis Young. All rights reserved.
//

// MathTest.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"  Visual Studio file -- remove it for xcode
#include "Math.h"
#include <iostream>

using namespace std;

int main()
{
    
    int result = Math::pow(2, 10);
    
    cout << result << endl;
    
    return 0;
    }
