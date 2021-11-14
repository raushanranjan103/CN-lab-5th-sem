#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n,r;
struct frame
{
    char ack;
    int data;
}frm[10];
int sender(void);
void resend_sr(void);
void recvack(void);
void selective(void);
int main()
{selective();

}
void selective()
{
    sender();
    recvack();
    resend_sr();
    printf("\n all frames sent succesfully\n");
}
int sender()
{
    int i;
    printf("\n enter the no of frames to be sent");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n enter data for frame [%d]",i);
        scanf("%d",&frm[i].data);
        frm[i].ack='y';
    }

}
void recvack()
{
    int i;
    rand();
    r=rand()%n;
    frm[r].ack='n';
    for(i=1;i<=n;i++)
    {
        if(frm[i].ack=='n')
        printf("\nthe frame number %d is not received\n",r);
    }
}
void resend_sr()
{
    printf("\nresending frame %d",r);
    sleep(2);
    frm[r].ack='y';
    printf("\n the received frame is %d",frm[r].data);
}


