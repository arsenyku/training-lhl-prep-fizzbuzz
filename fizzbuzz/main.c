//
//  main.c
//  fizz
//
//  Output a range of values, substituting the
//  words fizz for multiples of 3, buzz for multiples
//  of 5, and fizzbuzz for multiples of 3 and 5.
//
//  Created by asu on 2015-07-13.
//  Copyright (c) 2015 asu. All rights reserved.
//



#include <stdio.h>

/*
 fizzbuzz - output a range of values, substituting the
 words fuzz, bizz, and fuzzbizz for those values which are
 multiples of the user's input.
 
 Parameters:
 
 min - minimum value to evaluate and output.
 
 max - maximum value to evaluate and output.
 
 fizz - numbers which are multiples of this value will be displayed
 as the text "fizz".  Numbers which are multiples of this
 and the bizz parameter will be displayed as "fizzbuzz".
 
 buzz - numbers which are multiples of this value will be displayed
 as the text "buzz".  Numbers which are multiples of this
 and the fuzz parameter will be displayed as "fizzbuzz".
 
 */
void fizzbuzz(int min, int max, int fizz, int buzz)
{
    
    for(int i=min; i<=max ; i++){
        
        if (i % fizz == 0 && i % buzz == 0)
            printf("fizzbuzz\n");
        
        else if (i % fizz == 0)
            printf("fizz\n");
        
        else if (i % buzz == 0)
            printf("buzz\n");
        
        else
            printf("%d\n", i);
        
    }
    
}



int main(int argc, const char * argv[])
{
    
    int min = 1;
    int max = 100;
    
    int fuzz = 3;
    int bizz = 5;
    
    // Evaluate and display the appropriate values.
    
    fizzbuzz(min, max, fuzz, bizz);
    
    return 0;
    
}


