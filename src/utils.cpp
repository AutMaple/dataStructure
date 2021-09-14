#include <iostream>
#include <ctime>
#include <random>
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
    std::random_device device;
    std::default_random_engine engine(device());
    std::uniform_int_distribution<int> distribution(minNum, maxNum);
    for(int i = 0; i < arrSize; i++)
    {
        arr[i] = distribution(engine);
    }
    return arr;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
