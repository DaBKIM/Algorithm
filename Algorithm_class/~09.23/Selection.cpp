//2015004375_김다빈_A


#include<stdio.h>
#include<stdlib.h>


int arr[30001];

int main(){
    
    
    int n,m;
    int z;
    
    scanf("%d %d",&n,&m);
    
    for(z=0;z<n;z++){
        
        scanf("%d",&arr[z]);
    }
    
    int iMin,i,j,tmp;
    
    for(i=0;i<m;i++){
        
        iMin=i;
        
        for(j=i+1;j<n;j++){
            
            if(arr[j]<arr[iMin]){
                iMin=j;
            }
        }
        if(i!=iMin){
            
            tmp=arr[iMin];
            arr[iMin]=arr[i];
            arr[i]=tmp;
        }
    }
    
    for(z=0;z<n;z++){
        printf("%d\n",arr[z]);
    }
    
    return 0;
}
