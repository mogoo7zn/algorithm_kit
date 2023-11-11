//
// Created by znwan on 2023/11/10.
//


#ifndef SORTING_SORTING_PUBLIC__HEADFILE_H
#define SORTING_SORTING_PUBLIC__HEADFILE_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int *a, int *b);
void print_array(int number, int *value);
void generate_array(int *value, int number);

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void print_array(int number, int *value)
{
    int i;
    for(i = 0; i < number; i++)
    {
        printf_s("%d ", value[i]);
    }
}

void generate_array(int *value, int number)
{
    int i;
    for(i = 0; i < number; i++)
    {
        scanf_s("%d", value + i);
    }
}
#endif //SORTING_SORTING_PUBLIC__HEADFILE_H

