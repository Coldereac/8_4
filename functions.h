//
// Created by malinka on 08.04.24.
//
/*
 * Створіть структуру для зберігання інформації про круг (радіус,
діаметр, площу, довжину кола). Створіть масив структур.
Напишіть функцію, яка запитуватиме у користувача радіус кола та обчислюватиме
його діаметр, площу та довжину кола, зберігаючи результати у відповідні поля
структури. Потім напишіть функцію, яка виводитиме інформацію про коло
певного радіусу на екран.
 */

#ifndef INC_8_4_FUNCTIONS_H
#define INC_8_4_FUNCTIONS_H

#define SIZE 10

#include <stdio.h>
#include <math.h>


struct circle{
    float r; //радіус
    float d; //діаметр
    float s; //площа
    float l; //довжина кола
};

struct array{
    struct circle circles[SIZE];
    int size;
};

struct circle initialize();

struct array initializeArray(int size);

void print(struct circle circle);

void printByRadius(float r, struct array arr);

#endif //INC_8_4_FUNCTIONS_H
