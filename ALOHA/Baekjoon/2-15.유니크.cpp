#include<stdio.h>

int main(){
    
    int n;
    int game[201][3];
    int score[201]={0};
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&game[i][j]);
        }
    }
    
    for(int j=0;j<3;j++){
        int check[201]={0};
        for(int i=0;i<n;i++){
            
            for(int z=0;z<n;z++){
                
                if(i!=z&&game[i][j]==game[z][j]) check[i]++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(check[i]==0) score[i]=score[i]+game[i][j];
            else score[i]=score[i];
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d\n",score[i]);
    }
}//2-15.유니크