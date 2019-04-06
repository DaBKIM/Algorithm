#include<stdio.h>

int main(){
    
    int n;
    int cnt=0;
    scanf("%d",&n);
    
    for(int i=1;i<=500;i++){
        for(int j=1;j<=500;j++){
            
            if(i*i-j*j==n) cnt++;
        }
    }
    
    printf("%d\n",cnt);
}//2-23.완전제곱수