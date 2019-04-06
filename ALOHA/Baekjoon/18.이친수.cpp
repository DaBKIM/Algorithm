#include<stdio.h>

int main(){
    
    int t;
    long long int arr[100000][2];
    scanf("%lld",&t);
    
    arr[1][0]=0;
    arr[1][1]=1;
    
    for(int i=2;i<=t;i++){
        arr[i][0]=arr[i-1][0]+arr[i-1][1];
        arr[i][1]=arr[i-1][0];
    }
    
    printf("%lld\n",arr[t][0]+arr[t][1]);
    
}//18.이친수