//2015004375_김다빈_A

#include<stdio.h>
#include<stdlib.h>

int arr[30001];

int main(){
    
    int n;
    scanf("%d",&n);
    
    int i;
    
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    
    int j,z;
    int key;
    
    for(j=1;j<n;j++){
        
        key=arr[j];
        
        for(z=j-1;(z>=0)&&(arr[z]<key);z--){
            
            arr[z+1]=arr[z];
        }
        arr[z+1]=key;
    }
    
    int last;
    
    for(last=0;last<n;last++){
        printf("%d\n",arr[last]);
    }
    
    return 0;
}