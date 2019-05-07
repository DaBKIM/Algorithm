//2015004375_김다빈_A(508호)

#include<stdio.h>
#define INF 100000000

int arr[105];
int order[105][105];
int mat[105][105];

int chain(int n){
    
    for(int k=1;k<=n-1;k++){
        for(int i=1;i<=n-k;i++){
            
            int in=i+k;
            mat[i][in]=INF;
            
            for(int j=i;j<=in;j++){
                
                int tmp=mat[i][j]+mat[j+1][in]+(arr[i-1]*arr[j]*arr[in]);
                if(tmp<mat[i][in]){
                    
                    mat[i][in]=tmp;
                    order[i][j]=j;
                }
            }
        }
    }
    return mat[1][n];
}

void print(int i,int j){
    
    if(i==j) printf("%d",i);
    else{
        printf("(");
        print(i,order[i][j]);
        print(order[i][j]+1,j);
        printf(")");
    }
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    
    int res=chain(n);
    printf("%d\n",res);
    //print(1,n);
    //printf("\n");
}
