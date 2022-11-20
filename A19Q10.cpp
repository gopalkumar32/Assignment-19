#include<string.h>
#include<stdio.h>
int main()
{
        int choice;
        printf("1. Entre the your name\n");
        printf("2. Entre The password\n");
        char a[2][20]={"gopal","6525"},b[20],c[20];
        printf("Entre the your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:
               printf("1. Entre the your name\n");
               scanf("%s",b);
               if(strcmp(a[0],b)==0)
               printf("OK open your laptop\n");
               else
               printf("Your entre the worng name\n");
               break;
               case 2:
               printf("Entre the your password\n");
               scanf("%s",c);
               if(strcmp(a[1],c)==0)
               printf("Ok you open your laptop");
               else
               printf("you entre the worng password");
        }
}
