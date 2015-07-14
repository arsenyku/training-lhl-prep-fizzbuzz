//
//  main.c
//  fizzbuzz
//
//  Created by asu on 2015-07-13.
//  Copyright (c) 2015 asu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int min = 1;
    int max = 100;
    
    int fizz = 3;
    int buzz = 5;
    
    
    for(int i=min; i<=max ; i++){
    
        char output[9];
        
        if (i % fizz == 0 && i % buzz == 0)
            sprintf(output, "fizzbuzz");

        else if (i % fizz == 0)
            sprintf(output, "fizz");

        else if (i % buzz == 0)
            sprintf(output, "buzz");

        else
            sprintf(output, "%d", i);
        
        
        printf ("%s\n", output);
    }
    
    
    return 0;
}
