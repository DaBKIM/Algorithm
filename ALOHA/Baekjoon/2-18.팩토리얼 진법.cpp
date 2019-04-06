#include<stdio.h>

int fac(int a){
    
    if(a<=1) return 1;
    else return a*fac(a-1);
}

int main(){
    
    while(1){
        
        int n;
        int cnt=1;
        int res=0;
        scanf("%d",&n);
        if(n==0) return 0;
        
        while(n!=0){
            
            res=res+(n%10)*fac(cnt);
            n=n/10;
            cnt++;
        }
        
        printf("%d\n",res);
    }
}//2-18.팩토리얼 진