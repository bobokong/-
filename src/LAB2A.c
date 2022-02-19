#include "stdio.h"
// #include "conio.h"
/**
 * @brief 
 * print the data that meets the following requirements
 * ① x^2 = ( x + y )^2 -168
 * ② x^2 - 100 > 0
 * @return int
 */

int main() {
    int i, j;
    for (i = 1; i <= 317; i++)
        for (j = 1; j <= 317; j++)
            if (i * i == (i + j) * (i + j) - 168 && i * i - 100 > 0)
                printf("%d ", i * i - 100);
    return 0;
}
