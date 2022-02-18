#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    char input[100],key[100],key1[100],temp[100],rem[100],quotient[100];
    printf("enter the dividened \n");
    scanf("%s",input);
    printf("enter the divisor \n");
    scanf("%s",key);
    int message_len = strlen(input);
    int keylen = strlen(key);
    for(int i=0;i<keylen-1;i++)
    input[message_len+i]='0';
    strcpy(key1,key);
    for(int i=0;i<keylen;i++)
    temp[i]=input[i];
    for(int i=0;i<message_len;i++)
    {
        quotient[i]=temp[0];
        if(quotient[i]=='0')
        {
            for(int j=0;j<keylen;j++)
            key[j]='0';//means if we find 0 as quotient 1st bit then compltete key will be 0
        }
        else
        {
            for(int j=0;j<keylen;j++)
            key[j]=key1[j];//if we find 1 as dirst bit then complete previous key
        }
        for(int j=keylen-1;j>0;j--)
        {
            if(temp[j]==key[j])
            rem[j-1]='0';
            else
            rem[j-1]='1';
        }
        rem[keylen-1]=input[keylen+i];
        strcpy(temp,rem);
    }
    strcpy(rem,temp);
    char input1[100];
    printf("data to be sent is ");
    for(int i=0;i<strlen(input);i++)
    {
    input1[i]=input[i];    
    printf("%c",input[i]);
    }
    for(int i=0;i<keylen-1;i++)
    input[message_len+i]=rem[i];
    printf("\nthe recieved data is \n");
    for(int i=0;i<strlen(input);i++)
    printf("%c",input[i]);
    
    printf("\nthe remainder is\n");
    for(int i=0;i<strlen(rem);i++)
    printf("%c",rem[i]);
    int flag=0;
    for(int i=0;i<strlen(input);i++)
    {
        flag=1;
        if(input1[i]!=input[i])
        printf("\nerror found at position %d \n",i+1);
    }
    if(flag==0)
    printf("error not found");
    return 0;
}