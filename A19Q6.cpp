#include<string.h>
#include<stdio.h>
int main()
{
        int i=0,j=2;
        char a[3][20]={"gopal","gautam","gopal"};
        while(i<=j)
        {
                if(strcmp(a[i],a[j])!=0)
                {
                        printf("NOt palindrome");
                        break;
                }
                i++;
                j--;
        }
        if(i>j)
        printf("Palindrome");
}
