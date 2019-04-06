#include<stdio.h>

int main(){
    
    int t;
    int input;
    long long int arr[10005]={0};
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        scanf("%d",&input);
        
        arr[input]++;
        
    }
    
    for(int j=0;j<10001;j++){
        
        if(arr[j]==0) continue;
        else {
            for(int z=0;z<arr[j];z++){
                printf("%d\n",j);
            }
        }
    }
}//21.수 정렬하기3