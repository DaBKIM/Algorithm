#include<stdio.h>

int min(int a,int b){
    if(a>b) return b;
    else return a;
}

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    
    while(1){
        
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==0&&b==0) return 0;
        
        int A=min(a,b);
        int B=max(a,b);
        
        printf("%d\n",2*A-B);
    }
}//2-19.평균 중앙값 문제