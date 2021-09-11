#include <iostream>
#include <ctime>
//
// Created by autmaple on 2021/9/11.
//

void printArray(int nums[], int length)
{
    for(int i = 0; i < length; i++)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

int* randomArrary(int arrSize, int minNum, int maxNum)
{
    int * arr = new int[arrSize];
    srand(time(nullptr));
    for(int i = 0; i < arrSize; i++)
    {
        arr[i] = rand() % (maxNum - minNum) + minNum;
    }
    return arr;
}
