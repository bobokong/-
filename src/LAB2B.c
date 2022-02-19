#include "stdio.h"
// #include "conio.h"
// #include <curses.h>
/**
 * @brief 
 * swap the value of two numbers
 * @param p1 
 * @param p2 
 */
void swap(int *p1, int *p2) {
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}
/**
 * @brief
 * sudo apt-get install libncurses5-dev libncursesw5-dev
 * sort three numbers from largest to smallest by swap() subprogram
 */
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (b > a)
        swap(&a, &b);
    if (c > a)
        swap(&a, &c);
    if (c > b)
        swap(&b, &c);
    printf("%d %d %d ", a, b, c);
    // getch();
    return 0;
}
