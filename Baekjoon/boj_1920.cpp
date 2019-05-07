
// Use recursive function
// boj_1920
// binary Search

#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
#define MAXNUM 100001

int* arr;

int binarySearch(int left, int right, int find){

    int mid = (left+right) / 2;

    if(left <= right){
        if(arr[mid]>find)
            // 기존 미드 보다 작은 값 이므로 mid - 1
            return binarySearch(left,mid-1,find);
        else if(arr[mid]<find)
            // 기존 미드 보다 큰 값 이므로 mid + 1
            return binarySearch(mid+1,right,find);
        else 
            return 1;
    }

    return 0;

}

int main(){

    int n;
    scanf("%d",&n);

    arr = (int*)malloc(sizeof(int)*n);
    for(int i = 0;i<n;i++) scanf("%d",&arr[i]);

    sort(arr,arr+n);
    
    int m;
    scanf("%d",&m);

    for(int i = 0;i<m;i++){
        int tmp;
        scanf("%d",&tmp);

        int res = binarySearch(0,n-1,tmp);
        
        printf("%d\n",res);
    }

    return 0;
}