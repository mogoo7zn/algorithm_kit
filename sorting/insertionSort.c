//
// Created by znwan on 2023/11/10.
//
#include "sorting_public _headfile.h"

int main(void) {
    int number, i, j;
    scanf_s("%d", &number);
    int value[number];

    generate_array(value, number);

    for(i = 1; i < number; i++)
    {
        for(j = i; j > 0; j--)
        {
            if(value[j] < value[j - 1])
                swap(value + j, value + j -1);
        }
    }

    print_array(number, value);

    return 0;
}
