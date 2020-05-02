#include <stdio.h>
int main( )
{
    int a[10][10],size,s,i=0,j=0,k;
    while(1)
    {
    printf("Enter size of the matrix: ");
    scanf("%d", &size);
    j=0;
    i=0;
    s=0;
    if(size==0)
    {
        return 0;
    }
    if (size % 2 == 0)
    {
       return 0;
    }
    s = size * size;
    j = size / 2;
    for (k = 1; k <= s; k++)
    {
        a[i][j] = k;
        i--;
        j++;

        if (k % size == 0)
        {
            i =i+ 2;
            j--;
        }
        else
        {
            if (j == size)
            {
                j =j-size;
            }
            else if (i < 0)
            {
                i =i+ size;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if(a[i][j]<=9)
            {
                printf(" ");
            }
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    }
    return 0;
}