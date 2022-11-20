#include<stdio.h>
#include<string.h>
int main()
{
        int i,j,v;
        char a[5][20];
        for(i=0;i<5;i++)
        fgets(a[i],20,stdin);
        for(i=0;i<5;i++)
        {      v=0;
                for(j=0;a[i][j];j++)
                {
                        if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
                        v++;
                }
                printf("Total no. of string in a[%d] is %d\n",i,v);
        }
}
