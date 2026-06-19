#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // 数组名就是首元素地址
    int *p = arr;

    printf("数组元素：\n");

    for(int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\n使用指针访问数组：\n");

    for(int i = 0; i < 5; i++)
    {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    return 0;
}
