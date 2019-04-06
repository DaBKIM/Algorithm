#include<stdio.h>

int main(){
    
    int n,t;
    int cnt=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        
        int div=0;
        scanf("%d",&t);
        
        for(int j=1;j<t;j++){
            
            if(t%j==0) div+=1;
        }
        
        if(div==1) cnt+=1;
    }
    
    printf("%d\n",cnt);
}//10. 소수찾기