#include<stdio.h>
#include<string.h>
int main()
{
        int i,j;
        char a[10][20],t[20]="gopal";
        for(i=0;i<10;i++)
        gets(a[i]);
        for(i=0;i<10;i++)
        {
                if(strcmp(a[i],t)==0)
                {
                        printf("Find ther string");
                        break;
                }
        }
        if(i==0)
        printf("String is not find");
}
