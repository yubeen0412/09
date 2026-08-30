#include <stdio.h>

int main(void)
{
    FILE *fp;
    char word1[100];
    char word2[100];
    char word3[100];

    fp = fopen("sample.txt", "w");

    if (fp == NULL)
    {
        printf("파일을 못열음\n");
        return 1;
    }

    scanf("%s", word1);
    scanf("%s", word2);
    scanf("%s", word3);

    fprintf(fp, "%s\n", word1);
    fprintf(fp, "%s\n", word2);
    fprintf(fp, "%s\n", word3);

    fclose(fp);

    return 0;
}