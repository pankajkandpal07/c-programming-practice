#include <stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j==1|| i==1||i==3|| (i==2&&j==5))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        //printf("\n");
        printf("  ");
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 && i > 2 || j == 5 && i > 2 || i * j == 3 || i == 3 || i == 2 && (j == 2 || j == 4))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("  ");
        for (int j = 1; j <= 5; j++)
        {
            if (j==1 || j==5 || i==j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("  ");
        for (int j = 1; j <= 5; j++)
        {
            if (j==1 || i+j==5 || i==4 && j== 3|| i==5 && j==4)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("  ");
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 && i > 2 || j == 5 && i > 2 || i * j == 3 || i == 3 || i == 2 && (j == 2 || j == 4))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        // printf("  ");
        // for (int j = 1; j <= 5; j++)
        // {
        //     if ()
        //     {
        //         printf("* ");
        //     }
        //     else
        //     {
        //         printf("  ");
        //     }
        // }
        printf("\n");
    }
}