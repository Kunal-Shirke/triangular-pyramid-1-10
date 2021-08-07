#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, j, k, count = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
        {
            printf(" "); /*for space*/
        }
        for (k = 1; k <= i; k++) /*for numbers*/
        {
            printf("%d ", count);
            count++;
        }
        printf("\n"); /*for new line*/
    }
    system("pause");
    return 0;
}