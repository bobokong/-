#include "stdio.h"
// #include <curses.h>
// #include "conio.h"

#define N 1
#define N_COURSE 2

struct student {
    char name[10];
    int score[N_COURSE];
} stu[N];

// 1. csv文件输入、输出
// 2. 多个人，struct array
// 3. 由struct到class
//    
void input() {
    for (int i = 0; i < N; i++) {
        printf("\n please input %d of %d\n", i + 1, N);
        printf("Student Name: ");
        scanf("%s", stu[i].name);  // character array no need &

        for (int j = 0; j < N_COURSE; j++) {
            printf("score %d: ", j + 1);
            scanf("%d", &stu[i].score[j]);
        }
        printf("\n");
    }
}

void print() {
    printf("\nNo. Name  sex Sco1 Sco2 Sco3\n");
    for (int i = 0; i < N; i++) {
        printf("%-10s", stu[i].name);

        for (int j = 0; j < N_COURSE; j++)
            printf("%-8d", stu[i].score[j]);
        printf("\n");
    }
}

int main() {
    input();
    print();
    // getch();
    return 0;
}
