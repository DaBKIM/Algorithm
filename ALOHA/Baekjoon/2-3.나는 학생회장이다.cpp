#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    
    int t;
    int arr[1001][3]={0};
    int score_c[3][3]={0};
    int high[3]={0};
    int max=0;
    
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
            
            score_c[j][arr[i][j]-1]++;
            high[j]+=arr[i][j];
        }
    }
    
    if(high[0]==high[1]){
        if(score_c[0][2]>score_c[1][2]) printf("1 %d\n",high[0]);
        else if(score_c[0][2]<score_c[1][2]) printf("2 %d\n",high[1]);
        else{
            if(score_c[0][1]>score_c[1][1]) printf("1 %d\n",high[0]);
            else if(score_c[0][1]<score_c[1][1]) printf("2 %d\n",high[1]);
            else{
                if(score_c[0][0]>score_c[1][0]) printf("1 %d\n",high[0]);
                else if(score_c[0][0]<score_c[1][0]) printf("2 %d\n",high[1]);
                else printf("0 %d\n",high[0]);
            }
        }
    }
    else if(high[0]==high[2]){
        if(score_c[0][2]>score_c[2][2]) printf("1 %d\n",high[0]);
        else if(score_c[0][2]<score_c[2][2]) printf("3 %d\n",high[2]);
        else{
            if(score_c[0][1]>score_c[2][1]) printf("1 %d\n",high[0]);
            else if(score_c[0][1]<score_c[2][1]) printf("3 %d\n",high[2]);
            else{
                if(score_c[0][0]>score_c[2][0]) printf("1 %d\n",high[0]);
                else if(score_c[0][0]<score_c[2][0]) printf("3 %d\n",high[2]);
                else printf("0 %d\n",high[0]);
            }
        }
    }
    else if(high[1]==high[2]){
        if(score_c[1][2]>score_c[2][2]) printf("2 %d\n",high[1]);
        else if(score_c[1][2]<score_c[2][2]) printf("3 %d\n",high[2]);
        else{
            if(score_c[1][1]>score_c[2][1]) printf("2 %d\n",high[1]);
            else if(score_c[1][1]<score_c[2][1]) printf("3 %d\n",high[2]);
            else{
                if(score_c[1][0]>score_c[2][0]) printf("2 %d\n",high[1]);
                else if(score_c[1][0]<score_c[2][0]) printf("3 %d\n",high[2]);
                else printf("0 %d\n",high[1]);
            }
        }
    }
    else {
        int last=0;
        for(int j=0;j<t;j++)
            if(max<high[j]) {
                max=high[j];
                last=j+1;
            }
        
        printf("%d %d\n",last,max);
    }
}//2-3.나는 학생회장이다.