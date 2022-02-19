/*      ****************************************************************************************************     */
/*      上机作业：（lab8）   链式存储结构下队列的基本操作                                                        */
/*      ****************************************************************************************************     */
/*                                                                                                               */
/*  利用自编的子程序实现以下功能：                                                                               */
/*  ①创建一个空队列；                                                                                            */
/*  ②判断新建的队列是否为空；                                                                                    */
/*  ③提示用户输入"队列的长度"；                                                                                  */
/*  ④根据用户输入的"队列的长度"，逐一提示用户输入"队列中的各个元素"，完成队列的构造；                            */
/*  ⑤判断此时的队列是否为空；                                                                                    */
/*  ⑥调用子程序打印当前队列的队首元素和队尾元素；                                                                */
/*  ⑦编写打印队列元素的子程序PrintNode( )；                                                                      */
/*  ⑧清空队列，连续3次做下列操作：入队4个元素，出队2个元素，打印队列，打印当前队列的队首元素和队尾元素；         */
/*  ⑨要求：提供尽可能友好的人机对话界面，便于用户（非程序设计3者）使用。                                          */
/*      ****************************************************************************************************     */
//#include "windows.h"	/*控制台界面优化*/
// #include "A1.h"
#include "Queue.h"

int main() {
    int i = -1, j = -1, x, y, length = 0;
    /*  ①创建一个空队列；                                             */
    Queue *queue = (Queue *)malloc(sizeof(Queue)); /*给头结点申请内存*/
    
    // SetConsoleTitle("链式存储结构下队列的基本操作"); /*设置窗口标题*/
    if (!queue) /*检测是否申请失败*/
    {
        // TextColor(4); /*设置字体为红色*/
        printf("queue malloc error!\n");
        // TextColor(7); /*将字体重新设置为白色*/
        return 0;
    } else {
        InitQueue(queue);
        // TextColor(4);
        printf("Empty quene generated successfully!\n\n");
        // TextColor(7);
    }
    /*  ②判断新建的队列是否为空；                                                                                    */
    if (IsEmpty(queue)) {
        // TextColor(4);
        printf("The queue is empty!\n\n");
        // TextColor(7);
    } else
        printf("queue Not Empty\n\n");
    /*③提示用户输入"循环队列的长度*/
    printf("Please enter the length of the queue : ");
    length = IsRight(&i, &j); /*i,*j作选择判断用*/
    /*④根据用户输入的"循环队列的长度"，逐一提示用户输入"循环队列中的各个元素"，完成循环队列的构造; */
    for (i = 0; i < length; i++) {
        printf("Please enter the %dth element : ", i + 1);

        Add(queue, IsRight(&i, &j));
    }
    /*⑤判断此时的队列是否为空;*/
    if (IsEmpty(queue))
        printf("\nThe queue is empty !\n");
    else
        printf("\nThe queue is not empty !\n");
    /*⑥调用子程序打印当前队列的队首元素和队尾元素?*/
    GetFront(queue, &y);
    printf("\nFront : %d\n", y);
    GetRear(queue, &y);
    printf("Rear  : %d\n", y);

    PrintNode(queue);
    /*⑧清空队列，连续3次做下列操作：入队4个元素，出队2个元素，打印队列，打印当前队列的队首元素和队尾元素；*/
    Clear(queue);
    // TextColor(4);
    printf("\n\nThe original quenue has been cleared !\n\n");
    // TextColor(7);
    In_OutPut(queue);
    free(queue);
    return 0;
}
