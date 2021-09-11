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
