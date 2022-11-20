#include<stdio.h>
#include<string.h>
int main()
{
        int i;
        char a[3][20]={"gopal","akhil","atual"},b[20];
        for(i=0;i<3;i++)
        {
                scanf("%s",b);
                {
                        if(strcmp(a[i],b)==0)
                        {
                                int n,i,m=1;
                                printf("Entre the number for factorial\n");
                                scanf("%d",&n);
                                for(i=1;i<=n;i++)
                                m=m*i;
                                printf("%d factorial is %d",n,m);
                                break;
                                
                        }
                        else
                        {
                        printf("an error message");
                        break;
            }
                }
        }
}
