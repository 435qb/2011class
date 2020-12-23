#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define our_rand(pre,after) \
    ((pre) + rand() / ((RAND_MAX + 1u) / ((after) - (pre) + 1)))
int our_rand_2(int pre, int after){
    return (pre + rand() / ((RAND_MAX + 1u) / (after - pre + 1)));
}


int main()
{
    srand(time(NULL));
    while(1){
        printf("欢迎来到猜大小游戏\n数字范围为1~100\n");
        int curr = our_rand_2(1, 100);
        while(1){
            int num;
            printf("请输入一个数字\n");
            scanf("%d", &num);
            if     (num < curr)
                printf ("小了\n");
            else if(num == curr)
            {
                printf("真牛逼，猜对了\n");
                break;
            }
            else if(num > curr)
                printf("大了\n");
        }
        printf("还来吗[Y/n]\n");
        if(getchar() == 'N' || getchar() == 'n')
            break;
    }
    return 0;
}
