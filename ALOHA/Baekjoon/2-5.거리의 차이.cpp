#include<stdio.h>
#include<math.h>

int main(){
    
    int t;
    long long cnt=0;
    int arr[10001];
    
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            
            cnt=cnt+fabs(arr[i]-arr[j]);
        }
    }
    
    printf("%lld\n",cnt);
}//2-5.거리의 차이