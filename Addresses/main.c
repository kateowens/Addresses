//
//  main.c
//  Addresses
//
//  Created by Katherine Owens on 4/18/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 17;
    printf("i stores its value at %p\n", &i);
    printf("this function starts at %p\n", main);
    return 0;
}
