//2015004375_김다빈_A

#include<stdio.h>
#include<stdlib.h>

int arr[30001];

int main(){
    
    int n;
    scanf("%d",&n);
    
    int i;
    
    for(i=1;i<=n;i++){
        
        int tmp;
        scanf("%d",&tmp);
        
        arr[i]=tmp;
    }
    
    int j;
    int d,key;
    
    for(j=2;j<=n;j++){
        
        key=arr[j];
        d=j-1;
        
        while(d>0&&arr[d]>key){
            
            arr[d+1]=arr[d];
            d=d-1;
        }
        
        arr[d+1]=key;
    }
    
    int last;
    
    for(last=n;last>=1;last--){
        printf("%d\n",arr[last]);
    }
}
