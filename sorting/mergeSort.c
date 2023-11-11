//
// Created by znwan on 2023/11/11.
//
#include "sorting_public_headfile.h"

void mergeSort(int *value, int *result_value, int number, int left, int right);
int main(void) {
    int number;
    scanf_s("%d", &number);
    int value[number];
    int result_value[number];

    generate_array(value, number);

    mergeSort(value, result_value, number, 0, number - 1);

    print_array(number, value);

    return 0;
}

void mergeSort(int *value, int *result_value, int number, int left, int right)
{
    int middle, i, j, cnt;
    middle = (left + right) / 2;

    if(middle)
        mergeSort(value, result_value, number, left, right);

    for(i = 0, j = 0, cnt = 0; i < middle - left + 1 && j < right - middle; cnt++)
    {
        result_value[left + cnt] = value[left + i] < value[right - j] ?
        (value[left + i] && i++) : (value[right - j] && j++);
    }
    while(i < middle - left + 1)
    {
        result_value[left + cnt] = value[left + i], i++;
    }
    while(j < right - middle)
    {
        result_value[left + cnt] = value[right - j], j++;
    }
}