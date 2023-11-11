//
// Created by znwan on 2023/11/10.
//
#include "sorting_public_headfile.h"

void insertionSort(int *value, int number);
int main(void) {
    int number;
    scanf_s("%d", &number);
    int value[number];

    generate_array(value, number);

    insertionSort(value, number);

    print_array(number, value);

    return 0;
}

void insertionSort(int *value, int number)
{
    int i, j;
    //    pick out the smallest number after value[i]  and exchange it to i set
    for(i = 1; i < number; i++)
    {
        for(j = i; j > 0; j--)
        {
            if(value[j] < value[j - 1])
                swap(value + j, value + j -1);
        }
    }
}
