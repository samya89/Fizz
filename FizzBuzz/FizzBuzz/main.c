//
//  main.c
//  FizzBuzz
//
//  Created by Samia Al Rahmani on 2/26/15.
//  Copyright (c) 2015 Samia Al Rahmani. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // insert code here...
    
    
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%i\n", i);
        }
    }
}
