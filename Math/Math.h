//
// Math.h
// Header file for the Math class
//
//  Created by Travis Young on 8/2/18.
//  Copyright © 2018 Travis Young. All rights reserved.
//

#pragma once  //preprocessor directive that tells the compiler to only include this header once, regardless of how many times it has been imported in the program.

// Math class definition
//When we declare a class as static, it is an indicator that we do not have to instantiate the class to use it in our program.  Oft used for utility classes.

static class Math
{
public:  //can be called from other classes directly
    
    /* in order to call a function from a static class, the function must also be static.  Note that we could not include parameter names..  e.g., Math::pow(int, int) would be sufficient, since we only need to include data types expected by the function
     */
    
    // given base and exponent, calculate value
    
    static int pow(int base, int exp);  //  looks like this also needed to be declared as static
    
    } math ;  //add this at the end to make static class legal in Xcode -- math "object" is static ??
