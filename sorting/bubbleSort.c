//
// Created by znwang on 2023/11/09.
//

#include "sorting_public _headfile.h"
//#define SWAP(type, a, b) (type temp = (a), (a) = (b), (b) = temp)

int main(void) {
    int number, i, j;
    scanf_s("%d", &number);
    int value[number];
    for(i = 0; i < number; i++)
    {
        scanf_s("%d", value + i);
    }

    for(i = 0; i < number; i++)
    {
        for(j = 0; j < number - 1; j++)
        {
            if(value[j] > value[j + 1])
                swap(value + j, value + j + 1);
//                SWAP(int, value[j], value[j + 1]);
        }
    }

    for(i = 0; i < number; i++)
    {
        printf_s("%d ", value[i]);
    }
    return 0;
}
