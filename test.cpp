#include "headers/sortAlgorithm.h"
#include "headers/utils.h"

class Test{
public:
    static void testDirectInsertSort(){
        int arrSize = 20;
        int* arr = randomArrary(arrSize, 5, 30);
        printArray(arr, arrSize);
        directInsertSort(arr, arrSize);
        printArray(arr, arrSize);
    }

    static void testBinaryInsertSort(){
        int arrSize = 20;
        int* arr = randomArrary(arrSize, 5, 30);
        printArray(arr, arrSize);
        binaryInsertSort(arr, arrSize);
        printArray(arr, arrSize);
    }
};



int main()
{
//    Test::testDirectInsertSort();
    Test::testBinaryInsertSort();
    return 0;
}
