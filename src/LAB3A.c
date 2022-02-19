#include <stdio.h>
// #include "conio.h"
// #include <curses.h>

#define N 5
/**
 * @brief
 * Create a student struct
 */
struct student {
    char num[6];
    char name[8];
    int score[4];
} stu[N];

/**
 * @brief 
 * input students' information
 */
void input() {
    int i, j;
    for (i = 0; i < N; i++) {
        printf("\n please input %d of %d\n", i + 1, N);
        printf("num: ");
        scanf("%s", stu[i].num);
        printf("name: ");
        scanf("%s", stu[i].name);
        for (j = 0; j < 3; j++) {
            printf("score %d.", j + 1);
            scanf("%d", &stu[i].score[j]);
        }
        printf("\n");
    }
}
/**
 * @brief
 * print students' information
 */
void print() {
    int i, j;
    printf("\nNo. Name Sco1 Sco2 Sco3\n");
    for (i = 0; i < N; i++) {
        printf("%-6s%-10s", stu[i].num, stu[i].name);
        for (j = 0; j < 3; j++)
            printf("%-8d", stu[i].score[j]);
        printf("\n");
    }
}

void main() {
    input();
    print();
    // getch();//Windows console等待键盘输入，防止一闪而过
    // return 0;
}
