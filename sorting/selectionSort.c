//
// Created by znwan on 2023/11/10.
//
#include "sorting_public _headfile.h"

int main(void) {
    int number, i, j;
    scanf_s("%d", &number);
    int value[number];

    generate_array(value, number);

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

    print_array(number, value);

    return 0;
}
