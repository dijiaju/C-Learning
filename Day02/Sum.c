#include <stdio.h>

int main()
{
    int n = 0;

    printf("请输入n：");
    scanf("%d", &n);

    int sum = n * (n + 1) / 2;

    printf("1到%d的和为：%d\n", n, sum);

    return 0;
}
