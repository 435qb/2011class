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
        printf("��ӭ�����´�С��Ϸ\n���ַ�ΧΪ1~100\n");
        int curr = our_rand_2(1, 100);
        while(1){
            int num;
            printf("������һ������\n");
            scanf("%d", &num);
            if     (num < curr)
                printf ("С��\n");
            else if(num == curr)
            {
                printf("��ţ�ƣ��¶���\n");
                break;
            }
            else if(num > curr)
                printf("����\n");
        }
        printf("������[Y/n]\n");
        if(getchar() == 'N' || getchar() == 'n')
            break;
    }
    return 0;
}
