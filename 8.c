#include<stdlib.h>
#include<stdio.h>
void main()
{
int w,f;
printf("\n PLEASE ENTER THE SIZE OF UR WINDOW");
scanf("%d",&w);
printf("\n enter the no of frame u want\n");
scanf("%d",&f);
int a[f];
printf("enter all the %d frames",f);
for(int i=1;i<=f;i++)
{scanf("%d",&a[i]);
}
for(int i=1;i<=f;i++)
{
if(i%w==0)
{
printf(" %d\n",a[i]);
printf("\n acknowledgement received for the above frames\n");
}
else
printf(" %d  ",a[i]);
}
}
