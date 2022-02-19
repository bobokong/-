#ifndef QUEUE_H
#define QUEUE_H

#include <string.h>

#include "DataStructure.h"

void InitQueue(Queue *pQHead);
int IsEmpty(Queue *pQHead);
int IsRight(int *i, int *j);
void Add(Queue *pQHead, int x);
int Del(Queue *pQHead);
int GetFront(Queue *pQHead, int *y);
int GetRear(Queue *pQHead, int *y);
void Clear(Queue *pQHead);
void PrintNode(Queue *pQHead);
void In_OutPut(Queue *pQHead);

/** IMPLEMENT ---------------------------------------------------------------- */

/*文本颜色设置*/
// #include "Windows.h"
// void TextColor(int c) {
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); /*根据C的值设置字体颜色*/
//}

#endif /* QUEUE_H */
