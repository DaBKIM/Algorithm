#include<stdio.h>

int main(){
    
    int a,b,c;
    int cnt=0;
    int max=0;
    scanf("%d %d %d",&a,&b,&c);
    
    int arr[85]={0};
    
    for(int i=1;i<=a;i++){
        
        for(int j=1;j<=b;j++){
            
            for(int z=1;z<=c;z++){
                
                cnt=i+j+z;
                
                arr[cnt]++;
            }
        }
    }
    
    int res;
    
    for(int l=3;l<=80;l++){
        
        if(max<arr[l]) {
            
            max=arr[l];
            res=l;
        }
    }
    
    printf("%d\n",res);
}//4.주사위
