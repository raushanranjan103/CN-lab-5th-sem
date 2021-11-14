#include<stdio.h>
#include<stdlib.h>
#define size 10
int rear=-1,front=0,a[size];
void insert()
{
   if(rear==size-1)
   printf("\n full queue");
   else
     {    printf("\n enter the item to be inserted\n");
          int item;
          scanf("%d",&item);
          if(rear==-1&&front==0)
          {a[++rear]=item;
          }
          else
         { int j=rear;
           while(j>=0&&item<a[j])
         { a[j+1]=a[j];
            j--;
         }
         a[j+1]=item;
         rear++;
          }
      }
  }        
void delete()
{
   if(rear==-1)
   {  
  printf("\n there is no item to be deleted\n");
   }
else if(front==rear)
{
   printf("%d succesffuly deleted\n",a[front]);
    front=0;
    rear=-1;
}   
else
{
printf("\nthe item %d is deleted",a[front++]);
}
}
void display()
{
  if(rear==-1)
  printf("\n there is no item in the queue\n");
   else
 { for(int i=front;i<=rear;i++)
   printf(" %d ",a[i]);
   printf("\n");
 }
}
void main()
{
int ch,flag=1;
while(flag)
{
printf("\n eneter the choice");
printf("\n 1>insert 2>pop 3>display 4>exit");
scanf("%d",&ch);
switch(ch)
{  case 1:insert();
          break;
   case 2:delete();
          break;
    case 3:display();
            break;
     case 4:
            flag=0;
            printf("thanks\n");
            break;
     default:printf("wrong choice\n");
             break;
             }
             }
             }




