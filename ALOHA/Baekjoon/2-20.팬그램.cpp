#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
    
    while(1){
        
        char s[201];
        int arr[123]={0};
        int cnt=0;
        gets(s);
        if(s[0]=='*') break;
        
        for(int i=0;i<strlen(s);i++){
            
            arr[(int)s[i]]++;
            
        }
        
        for(int j=97;j<123;j++){
            
            if(arr[j]==0) cnt++;
            
        }
        
        
        if(cnt==0) printf("Y\n");
        else printf("N\n");
    }
}//2-20.팬그램