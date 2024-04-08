//
// Created by malinka on 08.04.24.
//

#include "functions.h"

struct circle initialize(){
    struct circle circle;
    puts("Input radius");
    scanf("%f", &circle.r);
    circle.d = circle.r * 2;
    circle.s = M_PI * circle.r * circle.r;
    circle.l = 2 * M_PI * circle.r;
    return circle;
}

struct array initializeArray(int size){
    struct array arr;
    arr.size = size;
    for (int i = 0; i < arr.size; ++i) {
        arr.circles[i] = initialize();
    }
    return arr;
}

void print(struct circle circle){
    printf("Radius: %f, Diameter: %f, Area: %f, Length: %f\n", circle.r, circle.d, circle.s, circle.l);
}

void printByRadius(float r, struct array arr){
    int found = 0;
    int i;
    for (i = 0; i < arr.size && !found; i++) {
        if (arr.circles[i].r == r){
            found = 1;
        }
    }
    //
    if (found) {
        print(arr.circles[--i]);
    } else{
        puts("No circle with such radius");
    }
}
