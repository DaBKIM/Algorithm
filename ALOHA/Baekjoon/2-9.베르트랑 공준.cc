
#include<stdio.h>


int main()
{
    
    int prime[246913]={0};
    int i,j;
    
    for(i=2;i<=246912;i++){
        int check=0;
        
        for(j=2;j*j<=i;j++){
            
            if(i%j==0) {
                
                check=1;
                break;
            }
        }
        if(check==0) prime[i]=1;
    }
    
    
    while(1){
        int n;
        int cnt=0;
        scanf("%d",&n);
        
        if(n==0) return 0;
        
        for(int z=n+1;z<=2*n;z++){
            
            if(prime[z]==1) cnt++;
        }
        
        printf("%d\n",cnt);
    }
}//2-9.베르트랑 공준