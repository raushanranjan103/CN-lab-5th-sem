#include<stdlib.h>
#include<stdio.h>
#define MAX 10
int frontl1=0, rearl1 = -1 ,fronth2=0,rearh2=-1, low[MAX],high[MAX] ;

void push () {int item,ch;
    printf("Enter the element into the queue\n");
    scanf("%d",&item);
    printf("enter the priority of the queue 0 for low 1 for high\n");
    scanf("%d",&ch);
    if(ch==0){

    if (rearl1 == MAX - 1) 
        printf("Queue is full.\n");
    else {
        low[++rearl1] = item;
    }
    }
    else
    {
        
    if (rearh2 == MAX - 1) 
        printf("Queue is full.\n");
    else {
        high[++rearh2] = item;
    }
    }
}

void pop () {

	if(fronth2 == - 1 || fronth2 > rearh2)
	{
		if(frontl1 == - 1 || frontl1 > rearl1)
		{
		printf("Queue Underflow \n");
		return;
		}
		else
		{
		printf("Element deleted from queue is : %d \n", low[frontl1++]);
		}
		return;
	}
	else
	{
	printf("Element deleted from queue is : %d \n", high[fronth2++]);
	}
}

void display () {

    int i;
	printf("High Priority Queue ");
	if(fronth2 == - 1 || fronth2 > rearh2)
	printf("Queue is empty \n");
	else
	{
	printf("Queue is : \n");
	for(i = fronth2; i <= rearh2; i++)
	printf("%d ", high[i]);
	}
	printf("Low Priority Queue ");
	if(frontl1 == - 1 || frontl1 > rearl1)
	printf("Queue is empty \n");
	else
	{
	printf("Queue is : \n");
	for(i = frontl1; i <= rearl1; i++)
	printf("%d ", low[i]);
	}
}

void main () {

    int cho , flag=1;
    printf("Enter the operation to be performed on queue.\n");

    while(flag) {

        printf("1.Push   2.Pop   3.Display   4.Exit   : ");
        scanf("%d" , &cho);

        switch(cho) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: flag=0;
                    printf("Thankyou.\n");
                    break;
            default: printf("Invalid Input.\n");
                     break;
        }
    }
}
  