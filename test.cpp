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

    static void testShellSort(){
        int arrSize = 20;
        int* arr = randomArrary(arrSize, 5, 30);
        printArray(arr,arrSize);
        shellSort(arr, arrSize, 10);
        printArray(arr,arrSize);
    }
};



int main()
{
//    Test::testDirectInsertSort();
//    Test::testBinaryInsertSort();
    Test::testShellSort();
    return 0;
}
