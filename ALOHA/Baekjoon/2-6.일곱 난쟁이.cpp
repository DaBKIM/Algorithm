#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    
    int arr[9];
    int sum=0;
    
    for(int i=0;i<9;i++){
        
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    
    sum=sum-100;
    sort(arr,arr+9);
    
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            
            if(sum==arr[i]+arr[j]){
                
                arr[i]=-1;
                arr[j]=-1;
                break;
            }
        }
    }
    
    for(int i=0;i<9;i++){
        
        if(arr[i]==-1) continue;
        else printf("%d\n",arr[i]);
    }
    
}//2-6.일곱 난쟁이