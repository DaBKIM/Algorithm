#include<stdio.h>

int gcd(int a,int b){
    
    if(b==0) return a;
    else return gcd(b,a%b);
    
}

int main(){
    int a1, a2, b1, b2;
    scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
    
    int bunmo=a2*b2;
    int bunza=a1*b2+a2*b1;
    
    int div=gcd(bunmo,bunza);
    
    printf("%d %d\n",bunza/div,bunmo/div);
    
}//2-7.분수합