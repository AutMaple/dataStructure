#include "headers/sortAlgorithm.h"
#include "headers/utils.h"

class Test{
public:
    /*
     * 测试直接插入算法
     * */
    static void testDirectInsertSort(){
        int arrSize = 20;
        int* arr = randomArrary(arrSize, 5, 30);
        printArray(arr, arrSize);
        directInsertSort(arr, arrSize);
        printArray(arr, arrSize);
    }

    /*
     * 测试折半插入算法
     * */
    static void testBinaryInsertSort(){
        int arrSize = 20;
        int* arr = randomArrary(arrSize, 5, 30);
        printArray(arr, arrSize);
        binaryInsertSort(arr, arrSize);
        printArray(arr, arrSize);
    }

    /*测试希尔直接插入排序*/
    static void testShellDirectSort(){
        int arrSize = 20;
        int* arr = randomArrary(arrSize, 5, 30);
        printArray(arr,arrSize);
        shellDirectSort(arr, arrSize, 10);
        printArray(arr,arrSize);
    }

    /*测试希尔折半插入排序*/
    static void testShellBinarySort(){
        int arrSize = 20;
        int* arr = randomArrary(arrSize, 5, 30);
        printArray(arr,arrSize);
        shellBinarySort(arr, arrSize, 10);
        printArray(arr,arrSize);
    }
};



int main()
{
//    Test::testDirectInsertSort();
//    Test::testBinaryInsertSort();
//    Test::testShellDirectSort();
    Test::testShellBinarySort();
    return 0;
}
