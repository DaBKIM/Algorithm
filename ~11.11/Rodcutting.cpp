//2015004375_김다빈_A(508호)

#include<stdio.h>
#include<stdlib.h>
#define INF -10000000
int p[105];
int r[105];
int s[105];

void bottom_up(int n){
    
    r[0]=0;
    for(int i=1;i<=n;i++){
        
        int q=INF;
        
        for(int j=1;j<=i;j++){
            if(q<p[j]+r[i-j]){
                q=p[j]+r[i-j];
                s[i]=j;
            }
        }
        r[i]=q;
    }
}

void print_cut(int n){
    
    while(n>0){
        
        printf("%d ",s[n]);
        n=n-s[n];
    }
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++) scanf("%d",&p[i]);
    
    bottom_up(n);
    
    printf("%d\n",r[n]);
    print_cut(n);
    
    return 0;
    
}