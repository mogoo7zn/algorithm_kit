//
// Created by znwan on 2023/11/10.
//
#include "sorting_public_headfile.h"

void selectionSort(int *value, int number);
int main(void) {
    int number;
    scanf_s("%d", &number);
    int value[number];

    generate_array(value, number);

    selectionSort(value, number);

    print_array(number, value);

    return 0;
}

void selectionSort(int *value, int number)
{
    int i, j;
    //    pick out the smallest number after value[i] in the array and swap it with value[i]
    for(i = 0; i < number - 1; i++)
    {
        int min = value[i], position = i;
        for(j = i + 1; j < number; j++)
        {
            if(value[j] < value[position])
            {
                min = value[j];
                position = j;
            }
        }
        j--;
        swap(value + i, value + position);
    }
}