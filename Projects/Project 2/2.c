//A.Khorrami Pour - 9631407
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define SIZE 5

int queue[SIZE], front=-1, rear=-1;

bool isEmpty()
{
    return (front == -1 && rear == -1);
}

bool isFull()
{
    return (rear+1)%SIZE == front ? 1 : 0;
}

void enQueue(int a)
{
    if (isFull())
    {
        return;
    }
    if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear+1)%SIZE;
    }
    queue[rear] = a;
}

void deQueue()//(int *element)
{
    if (isEmpty())
    {
        return;
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front+1)%SIZE;
    }
}

int peek()
{
    if(front == -1)
    {
        printf("Error! Queue is Empty!\n");
        return -1;
    }
    return queue[front];
}

int main()
{
	int op, temp, i, count, index;
	while(1)
	{
	    Sleep(800);
	    system("cls");
		printf("Enter Desired Function: \n");
		printf("1.Enqueue(1) \n");
		printf("2.Dequeue(2) \n");
		printf("3.Display(3) \n");
		printf("4.Quit(4) \n");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
				printf("Enter the Number You Want to Enqueue: \n");
				scanf("%d", &temp);
				enQueue(temp);
			case 2:
				deQueue();
			case 3:
				count = (rear+SIZE-front)%SIZE + 1;
				printf("Queue       : ");
				for(i = 0; i < count; i++)
				{
					index = (front+i) % SIZE;
					printf("%d", queue[index]);
				}
			case 4:
				break;
			default:
				printf("Invalid Entry!\n");
		}
	}
}
