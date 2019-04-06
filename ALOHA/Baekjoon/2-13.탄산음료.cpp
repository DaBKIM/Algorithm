#include<stdio.h>

int main(){
    
    int e,f,c;
    scanf("%d %d %d",&e,&f,&c);
    
    int sum=e+f;
    int res_cn=0;
    int cnt=0;
    
    while(sum!=0) {
        
        
        while(sum>=c){
            sum=sum-c;
            cnt++;
        }
        
        if(sum+cnt>=c){
            sum=sum+cnt;
            res_cn=res_cn+cnt;
            cnt=0;
        }
        else{
            sum=0;
            res_cn+=cnt;
        }
        
    }
    
    printf("%d\n",res_cn);
    
}//2-13.탄산음료