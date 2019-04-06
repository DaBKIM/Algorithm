#include<stdio.h>

int main(){
    
    int n,k;
    int arr[105];
    int max=-105;
    int tmp=0;
    scanf("%d %d",&n,&k);
    
    for(int i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    
    for(int j=0;j<=n-k;j++){
        
        tmp=0;
        
        for(int z=j;z<j+k;z++){
            
            tmp=tmp+arr[z];
        }
        
        if(tmp>max) max=tmp;
    }
    
    printf("%d\n",max);
}//2-4.기상청 인턴