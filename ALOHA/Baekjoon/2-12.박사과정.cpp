#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    scanf("%d",&t);
    char g[10];
    
    for(int i=0;i<t;i++){
        scanf("%s",g);
        
        if(g[0]=='P') printf("skipped\n");
        else{
            int j;
            for(j=0;g[j]!='+';j++);
            printf("%d\n",atoi(g)+atoi(g+j+1));
        }
    }
    
}//2-12.박사과정