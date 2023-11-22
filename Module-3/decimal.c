// C Code to convert Decimal number into Binary

#include <stdio.h>

void decToBinary(int n)
{
    int binary[32];
    int i = 0;
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("decimal number: %d", binary[j]);
}
int main()
{
    int n;
    scanf("binary number: %d", &n);
    decToBinary(n);
    return 0;
}
