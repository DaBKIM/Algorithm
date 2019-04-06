#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        
        int res=0;
        
        for(int i=n;i<=m;i++){
            
            vector<int>arr;
            vector<int>look;
            int tmp=i;
            
            while(tmp!=0){
                
                arr.push_back(tmp%10);
                tmp=tmp/10;
                
            }
            
            
            look=arr;
            int check=0;
            for(int i=0;i<arr.size();i++){
                for(int j=i+1;j<arr.size();j++){
                    
                    if(arr[i]==look[j]) check++;
                }
            }
            
            if(check==0) res++;
            
            arr.clear();
            look.clear();
        }
        printf("%d\n",res);
    }
}//2-17.호텔방