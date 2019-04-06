#include<stdio.h>

int gcd(int a,int b)
{
    int tmp=a%b;
    
    if(tmp==0) return b;
    
    return gcd(b,tmp);
}


int main(){
    
    int t,n;
    scanf("%d %d",&t,&n);
          
    int lcm=t*n/gcd(t,n);
    
    printf("%d\n%d\n",gcd(t,n),lcm);
}//7.최대공약수와 최소공배수
