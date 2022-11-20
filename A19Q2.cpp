#include<stdio.h>
#include<string.h>
int main()
{
        int i,j;
        char a[10][20],t[20];
        for(i=0;i<10;i++)
        gets(a[i]);
        for(i=0;i<10;i++)
        {
                for(j=i+1;j<10;j++)
                {
                        if(strcmp(a[i],a[j])>0)
                        {
                        strcpy(t,a[i]);
                        strcpy(a[i],a[j]);
                        strcpy(a[j],t);
            }
                        
                }
        }
        for(i=0;i<10;i++)
        printf("%s\n",a[i]);
}
