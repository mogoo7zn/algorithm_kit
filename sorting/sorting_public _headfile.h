//
// Created by znwan on 2023/11/10.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef SORTING_SORTING_PUBLIC__HEADFILE_H
#define SORTING_SORTING_PUBLIC__HEADFILE_H

#endif //SORTING_SORTING_PUBLIC__HEADFILE_H

void swap(int *a, int *b);
void print_array(int number, int *value);

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