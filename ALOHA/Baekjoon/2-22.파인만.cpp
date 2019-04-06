#include<stdio.h>

int main(){
    
    while(1){
        
        int t;
        int sum=0;
        scanf("%d",&t);
        if(t==0) return 0;
        
        for(int i=1;i<=t;i++){
            sum=sum+i*i;
        }
        
        printf("%d\n",sum);
    }
}//2-22.파인만