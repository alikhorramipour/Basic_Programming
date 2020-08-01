//A.Khorrami Pour - 9631407
#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

int arr[SIZE], front=-1, rear=-1;

struct Queue
{
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
		arr[rear] = a;
	}
	void deQueue(int *element)
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
		return arr[front];
	}
};

int main()
{
	Queue q;
	int flag=1, op, temp;
	while(flag)
	{
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
				q.enQueue(temp);
			case 2:
				q.deQueue();
			case 3:
				int count = (rear+SIZE-front)%SIZE + 1;
				printf("Queue       : ");
				for(int i = 0; i < count; i++)
				{
					int index = (front+i) % SIZE;
					printf("%d", arr[index]);
				}
			case 4:
				flag = 0;
				break;
			default:
				printf("Invalid Entry!\n");		
		}
	}
}
