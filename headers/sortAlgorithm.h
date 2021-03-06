/*直接插入排序*/
void directInsertSort(int nums[], int length);

/*折半插入排序*/
void binaryInsertSort(int nums[], int length);

/*希尔直接排序*/
void shellDirectSort(int nums[], int length, int step);

/*希尔折半排序*/
void shellBinarySort(int nums[], int length, int step);

/*冒泡排序*/
void bubbleSort(int nums[], int length);

/* 快速排序 */
void quickSort(int nums[], int low, int high);
int partition(int nums[], int low, int high);

/* 简单选择排序 */
void selectSort(int nums[], int length);