#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
        int i,j,k,l;
        char a[5][10]={"the","quick","brown","fox","quick"};
        char b[]="quick";
        char c[]="fox";
        for(i=0;i<5;i++)
        {
                if((strcmp(a[i],b)==0))
                {
                j=i;
                }
                if((strcmp(a[i],c)==0))
                {
                k=i;
                }
                if(j!=0&&k!=0)
                {
                l=abs(j-k);
                printf("Distance between two word is %d",l);
    }
        }
}
