#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    int n,m;
    
    int tmp;
    vector<int>a;
    vector<int>find;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        a.push_back(tmp);
    }
    
    scanf("%d",&m);
    for(int j=0;j<m;j++){
        scanf("%d",&tmp);
        find.push_back(tmp);
    }
    
    sort(a.begin(),a.end());
    
    for(int j=0;j<m;j++){
        
        if(binary_search(a.begin(),a.end(),find[j])) printf("1\n");
        else printf("0\n");
    }
}//17.수 찾기