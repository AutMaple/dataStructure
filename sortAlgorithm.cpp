#include "sortAlgorithm.h"
using namespace std;

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
                // 如果不满足条件，说明不需要改变位置
                // 直接跳出本次循环
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
