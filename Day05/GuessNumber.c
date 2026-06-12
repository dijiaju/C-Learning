#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess = 0;

    srand((unsigned int)time(NULL));

    int target = rand() % 100 + 1;

    printf("猜数字游戏开始！\n");

    while(1)
    {
        printf("请输入1~100之间的数字：");
        scanf("%d", &guess);

        if(guess > target)
        {
            printf("猜大了！\n");
        }
        else if(guess < target)
        {
            printf("猜小了！\n");
        }
        else
        {
            printf("恭喜你猜对了！\n");
            break;
        }
    }

    return 0;
}
