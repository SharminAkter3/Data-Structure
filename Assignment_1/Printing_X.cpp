#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i == (a + 1) / 2 && j == (a + 1) / 2) // middle value
            {
                printf("X");
            }
            else if (i == j) // primary diagonal
            {
                printf("\\");
            }
            else if (i + j == a + 1) // secondary diagonal
            {
                printf("/");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
