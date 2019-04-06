#include<stdio.h>

int main(){
    
    int pe[4][2];
    int res=0;
    int max=0;
    
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            
            scanf("%d",&pe[i][j]);
            
            if(j==0){
                res=res-pe[i][j];
                if(res>max) max=res;
            }
            else {
                res=res+pe[i][j];
                if(res>max) max=res;
            }
        }
    }
    printf("%d\n",max);
}//2-2지능형 열차