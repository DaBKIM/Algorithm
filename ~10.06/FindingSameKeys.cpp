//2015004375_김다빈_A(508호)

#include<stdio.h>
#include<stdlib.h>


int a[100001];

int main(){
    
    int n,m;
    int cnt=0;
    scanf("%d %d",&n,&m);
    
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        a[tmp]=1;
    }
    for(int j=0;j<m;j++){
        int tmp;
        scanf("%d",&tmp);
        
        if(a[tmp]==1){
            cnt++;
        }
    }
    
    
    printf("%d\n",cnt);
    return 0;
}