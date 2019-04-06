#include<stdio.h>

int main(){
    
    long long N,F;
    scanf("%lld %lld",&N,&F);
    
    long long div=N%100;
    N=N-div;
    
    long long res=0;
    
    for(long long i=N;i<=N+99;i++){
        
        if(i%F==0) {
            res=i;
            break;
        }
    }
    
    res=res%100;
    if(res<10) printf("0%lld\n",res);
    else printf("%lld\n",res);
}//22.나누기