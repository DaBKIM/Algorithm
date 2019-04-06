#include<stdio.h>

int main(){
    
    long long int s,f;
    long long int tmp;
    scanf("%lld %lld",&s,&f);
    
    if(s>f) {
        tmp=s;
        s=f;
        f=tmp;
    }
    
    printf("%lld",((f-s+1)*(f+s))/2);
    
}//20.시그마