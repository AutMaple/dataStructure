#include "headers/sortAlgorithm.h"
#include "headers/utils.h"
/*
 * 直接选择排序
 * */
void directInsertSort(int nums[], int length)
{
    for (int i = 1; i < length; ++i)
    {
        for (int j = i; j >= 0; j--)
        {
            if (nums[j] < nums[j - 1])
            {
                swap(nums[j], nums[j-1]);
            }
            else
            {
                // 由于前面的序列是有序的， 因此，如果不满足条件，说明插入的位置已经找到了
                // 直接跳出本层循环
                break;
            }
        }
    }
}

void binaryInsertSort(int nums[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int low = 0;
        int high = i - 1;
        int tmp = nums[i];
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] > nums[i])
            {
                high = mid - 1;
            }
            else
            { // 相等的情况让其再走一次循环，从而保证算法的稳定性
                low = low + 1;
            }
        }
        for (int j = i; j > low; j--)
        {
            nums[j] = nums[j - 1];
        }
        nums[low] = tmp;
    }
}

/*
 * 希尔直接插入排序
 * */
void shellDirectSort(int nums[], int length, int step)
{
    for (int d = step; d >= 1; d = d / 2)
    {
        // 下面的代码使用的是直接插入排序的思想
        for (int i = 0; i < length; i++)
        {
            for (int j = i - d; j >= 0; j -= d)
            {
                if (nums[j + d] < nums[j])
                { // 决定从小到大排序
/*
                    int temp = nums[j];
                    nums[j] = nums[j + d];
                    nums[j + d] = temp;
*/
                    swap(nums[j], nums[j+d]);
                }
            }
        }
    }
}

/*
 * 希尔折半插入排序
 * */
void shellBinarySort(int nums[], int length, int step)
{
    for (int d = step; d >= 1; d = d / 2)
    {
        for (int i = 0; i < length; i++)
        {
            int low = i % d;
            int high = i - d;
            while (low <= high)
            {
                int mid = ((low + high) / (2 * d)) * d;
                if (nums[mid] > nums[i])
                {
                    high = high - d;
                }
                else
                {
                    low = low + d;
                }
            }
            int tmp = nums[i];
            for (int j = i; j > low && j - d >= 0; j -= d)
            {
                nums[j] = nums[j - d];
            }
            nums[low] = tmp;
        }
    }
}

/*冒泡排序*/
void bubbleSort(int nums[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 1; j < length - i; j++)
        {
            if (nums[j] < nums[j - 1])
            {
                swap(nums[j], nums[j-1]);
            }
        }
    }
}


/*快速排序*/
void quickSort(int nums[], int low, int high){
    if(low < high){
    int mid = partition(nums, low, high);
    quickSort(nums,low,mid-1);
    quickSort(nums,mid+1,high);
    }
}

int partition(int nums[], int low, int high){
    int tmp = nums[low];
    while(low < high){
        while(nums[high] >= tmp && low < high){
            high = high - 1;
        }
        nums[low] = nums[high];
        while(nums[low] <= tmp && low < high){
            low = low + 1;
        }
        nums[high] = nums[low];
    }
    nums[low] = tmp;
    return low;
}

void selectSort(int nums[], int length){
    // 一共需要进行 n - 1 次循环
    for(int i = 0; i < length - 1; i++){
        int min = i;
        for(int j = i; j < length; j++){
            if(nums[j] < nums[min]) {
                min = j;
            }
        }
    swap(nums[i], nums[min]);
    }
}