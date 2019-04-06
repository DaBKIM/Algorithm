#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    if(t%400==0) printf("1\n");
    else if(t%4==0&&t%100!=0) printf("1\n");
    else printf("0\n");
    
    return 0;
}//1.윤년
