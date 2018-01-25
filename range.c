#include<stdio.h>
int main()
{
    int a;
    printf("eneter the number");
    scanf("%d",&a);
    if(a>=1&&a<=10)
    {
        printf("number is within range");
    }
    else
    {
        printf("out side range");
    }
    return 0;    
}
