#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define SIZE 5

int queue[SIZE], head=-1, tail=-1;

void enQueue(int temp)
{
    if(tail==-1)
    {
        head=tail=0;
        queue[tail]=temp;
    }
    else if(tail==SIZE-1)
    {
        printf("\nQueue is full.\n");
        Sleep(1000);
        return;
    }
    else
    {
        tail++;
        queue[tail] = temp;
    }
    printf("\nItem enqueued: %d", temp);
    Sleep(1000);
}

void display()
{
    int i;
    if(tail==-1)
    {
        printf("\nQueue is Empty.\n");
        Sleep(1000);
        return;
    }
    printf("\nQueue: ");
    for(i=head; i<=tail; i++)
    {
        printf("%d|", queue[i]);
    }
    Sleep(1000);
}

void deQueue(int *element)
{
    if(head==-1)
    {
        printf("\nQueue is Empty.\n");
        Sleep(1000);
        return;
    }
    else if(head==tail)
    {
        *element = queue[head];
        head = tail = -1;
    }
    else
    {
        *element=queue[head];
        head++;
    }
    printf("\nItem removed: %d", *element);
    Sleep(1000);
}

int main()
{
    int temp, op, element;
    while(1)
    {
        system("cls");
        printf("1:Enqueue\n2:Dequeue\n3:Display\n4:Exit\n\nSelect an Option:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                printf("\nEnter an element to insert:");
                scanf("%d", &temp);
                enQueue(temp);
                break;
            case 2:
                deQueue(&element);
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("\nInvalid entry!\n");
                Sleep(1000);
                break;
        }
    }
    return 0;
}
