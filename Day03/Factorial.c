#include <stdio.h>

int main()
{
    int n = 0;
    long long result = 1;

    printf("请输入一个正整数：");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("请输入正整数！\n");
        return 1;
    }

    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }

    printf("%d! = %lld\n", n, result);

    return 0;
}
