#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    char ori[55];
    char comp[55];
    
    scanf("%d",&n);
    
    scanf("%s",ori);
    
    for(int j=0;j<n-1;j++){
        
        scanf("%s",comp);
        
        for(int i=0;i<strlen(ori);i++){
            
            if(ori[i]!=comp[i]) ori[i]='?';
        }
    }
    
    printf("%s\n",ori);
    
}//8.명령프롬프트