#include<stdio.h>
#include<stdlib.h>
int main()
{
    int w,f;
    printf("\nenter the size of window\n");
    scanf("%d",&w);
    printf("\n enter the no of frames to transmit\n");
    scanf("%d",&f);
    int a[f];
    printf("enter the frames\n");
    for(int i=1;i<=f;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("with slinding window protocol the frames will be sent in the following manner and %d frames at a time\n",w);
    //printf("%d",a[0]);
    for(int i=1;i<=f;i++)
    {   //printf("  %d  ",a[i]);
        if(i%w==0)
        {printf("  %d\n  ",a[i]);
        printf("\n ack of above frames sent is received by sender\n\n");}
        else
        {printf("  %d  ",a[i]);
        }
        
        
        
    }
}
