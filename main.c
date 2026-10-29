#include <stdio.h>

int main(void)
{
    int score[5];
    int i;

    score[0] = 100;
    score[1] = 80;
    score[2] = 70;
    score[3] = 91;
    score[4] = 87;

    for(i=0; i<5; i++)
        {
            printf("score[%d]=%d\n", i, score[i]);
        }
    return 0;
}