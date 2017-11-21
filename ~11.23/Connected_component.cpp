//2015004375_김다빈_A(508호)

#include<stdio.h>
#include<stdlib.h>

int arr[1001];


int main() {
    
    int n;
    //int max=1;
    int c;
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        
        arr[i] = i+1+n;
        // printf("%d %d\n",i,arr[i]);
    }
    //printf("\n");
    int a, b;
    
    while (scanf("%d %d",&a,&b) != EOF) {
       
        if(arr[a]!=arr[b]){
            
            int tmp=arr[b];
            
            for(int i=1;i<=n;i++){
                
                if(arr[i]==tmp) arr[i]=arr[a];
            }
        }
    }
    
    int cnt=1;
    
    for(int i=1;i<=n;i++){
        
        if(arr[i]>n){
            int tmp=arr[i];
            
            for(int j=1;j<=n;j++){
                if(arr[j]==tmp) arr[j]=cnt;
            }
            cnt++;
        }
    }
    
    printf("%d\n",cnt-1);
    
    for(int i=1;i<=n;i++) printf("%d\n",arr[i]);
    
}
