#include<stdio.h>
#include<stdlib.h>
#define min(x,y)(x>y)?y:x
int main()
{
  int orate,count=0,x,inp[10]={0},drop=0,cap,nsec,i=0,ch;
  printf("\n enter the size of bucket");
  scanf("%d",&cap);
  printf("\n  enter the output rate");
  scanf("%d",&orate);
do{
  printf("\nenter the number of packets coming at second %d",i+1);
   scanf("%d",&inp[i]);
i++;
   printf("\n enter 1 to continue or 0 to discontinue");
   scanf("%d",&ch);
}
while(ch);
  nsec=i;
 printf("\nsecond\treceived\tsent\tdrop\tremained\n");
for(i=0;count||i<nsec;i++)
{
  printf("%d",i+1);
  printf("\t%d\t",inp[i]);
  printf("\t%d\t",min(count+inp[i],orate));
  if((x=inp[i]+count-orate)>0)
 {if(x>cap)
  {
  count=cap;
  drop=x-cap;}
 else{
count=x;
drop=0;
}
}
else
{
count=0;
drop=0;
}
printf("\t%d\t%d\t\n",drop,count);
}
return 0;
}
		


