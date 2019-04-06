#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=n;i>0;i--){
        
        for(int j=1;j<i;j++){
            printf(" ");
        }
        
        for(int z=i;z<=n;z++){
            printf("* ");
        }
        printf("\n");
    }
}//24.별찍기-16