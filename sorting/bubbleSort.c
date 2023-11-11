//
// Created by znwan on 2023/11/09.
//

#include "sorting_public_headfile.h"
//#define SWAP(type, a, b) (type temp = (a), (a) = (b), (b) = temp)

void bubbleSort(int *value, int number);
int main(void) {
    int number;
    scanf_s("%d", &number);
    int value[number];

    generate_array(value, number);

    bubbleSort(value, number);

    print_array(number, value);

    return 0;
}

void bubbleSort(int *value, int number)
{
    int i, j;
    for(i = 0; i < number; i++)
    {
        for(j = 0; j < number - 1; j++)
        {
            if(value[j] > value[j + 1])
                swap(value + j, value + j + 1);
//                SWAP(int, value[j], value[j + 1]);
        }
    }
}
