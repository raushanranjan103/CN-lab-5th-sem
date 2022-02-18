#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int checksum(int f)
{  int i=0,sum=0,n,temp;
   char in[100];
    scanf("%s",in);
   if(strlen(in)%2!=0)
   n=(strlen(in)+1)/2;
   else
   n=strlen(in)/2;
   for(i=0;i<n;i++)
   {
    temp=in[i*2];
    temp=(temp*256)+in[(i*2)+1];
    sum=sum+temp;
   }
if(f==1)
{
 printf("\n enter the checksum value \n");
 scanf("%x",&temp);
 sum=sum+temp;}
 if(sum%65536!=0)
{
 n=sum%65536;
 sum=(sum/65536)+n;
}
 sum=65535-sum;
 return sum;
}
void main()
{
int ch,sum,flag=1;
while(flag)
{
printf("1 encode\n 2 decode \n 3 exit \n");
scanf("%d",&ch);
switch(ch)
{
 case 1:printf("enter the string\n");
        sum=checksum(0);
        printf("checksum to append is %x\n",sum);   
        break;
case 2:printf("\n enter the string\n");
       sum=checksum(1);
       if(sum!=0)
       printf("the data has been temepered with or invalid checksum\n");
       else printf("valid \n");
 case 3:flag=0;
        break;
default:printf("invalid option");
}
}
}

