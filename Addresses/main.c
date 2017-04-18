//
//  main.c
//  Addresses
//
//  Created by Katherine Owens on 4/18/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>


void howMuchMemory(float number) {
    
    printf("the float consumes %zu byes\n", sizeof(number));
}

int main(int argc, const char * argv[]) {
    int i = 17;
    int *addressOfI = &i;
    
    printf("i stores its value at %p\n", addressOfI);
    printf("this function starts at %p\n", main);
    printf("the int stored at addressOfI is %d\n", *addressOfI);
    
    *addressOfI = 89;
    
    printf("Now i is %d\n", i);
    printf("An int is %zu bytes\n", sizeof(int));
    printf("A pointer is %zu bytes\n", sizeof(int *));
    
    howMuchMemory(1.000);
    
    
    return 0;
}

