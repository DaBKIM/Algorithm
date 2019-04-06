#include<stdio.h>

int main(){
    
    long long int arr[45][2];
    long long int t;
    scanf("%lld",&t);
    long long int inp;
    
    arr[0][0]=1;
    arr[0][1]=0;
    
    arr[1][0]=0;
    arr[1][1]=1;
    
    for(long long int i=2;i<41;i++){
        
        for(long long int j=0;j<2;j++){
            
            arr[i][j]=arr[i-1][j]+arr[i-2][j];
        }
    }
    
    for(long long int z=0;z<t;z++){
        
        scanf("%lld",&inp);
        
        printf("%lld %lld\n",arr[inp][0],arr[inp][1]);
    }
}//23.피보나치 함수