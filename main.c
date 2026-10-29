#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int grade[SIZE];
    int sum;
    int average;

    printf("input 5 student's score :\n");
    sum=0;
    for(i=0; i<SIZE; i++)
    {   scanf("%d", &grade[i]);
        sum += grade[i];
    }
    average = sum/SIZE;
    printf("average = %d\n", average);
    return 0;
}