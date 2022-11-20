#include<string.h>
#include<stdio.h>
int main()
{
        int i;
        char a[3][20];
        for(i=0;i<3;i++)
        fgets(a[i],20,stdin);
        for(i=0;i<3;i++)
        {
                if(strchr(a[i],'@')!=0)
                {
                        printf("%s\n",a[i]);
                }
        }
        
}
