#include "headers/sortAlgorithm.h"

/*
 * 直接选择排序
 * */
void directInsertSort(int nums[], int length)
{
    for (int i = 1; i < length; ++i) {
        for(int j = i; j >= 0; j--)
        {
            if(nums[j] < nums[j-1])
            {
                int tmp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = tmp; 
            }else{
                // 由于前面的序列是有序的， 因此，如果不满足条件，说明插入的位置已经找到了
                // 直接跳出本层循环
                break;
            }
        }
    }
}

void binaryInsertSort(int nums[], int length)
{
    for(int i = 1; i < length; i++)
    {
        int low = 0;
        int high = i - 1;
        int tmp = nums[i];
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(nums[mid] > nums[i])
            {
                high = mid - 1;
            }else{ // 相等的情况让其再走一次循环，从而保证算法的稳定性
                low = low + 1;
            }
        }
        for(int j = i; j > low; j--)
        {
            nums[j] = nums[j-1];
        }
        nums[low] = tmp;
    }
}

/*
 * 希尔排序
 * */
void shellSort(int nums[], int length, int step)
{
    for(int d = step; d >= 1; d = d / 2){
        // 下面的代码使用的是直接插入排序的思想
        for(int i = 0; i < length; i++){
            for(int j = i - d; j >= 0; j-=d){
                if(nums[j+d] < nums[j]){ // 决定从小到大排序
                    int temp = nums[j];
                    nums[j] = nums[j+d];
                    nums[j+d] = temp;
                }
            }
        }
    }
}
