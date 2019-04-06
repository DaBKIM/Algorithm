//
//  main.cpp
//  aloha_heemang
//
//  Created by KimDabin on 2015. 12. 23..
//  Copyright © 2015년 KimDabin. All rights reserved.
//
/*
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    if(t%400==0) printf("1\n");
    else if(t%4==0&&t%100!=0) printf("1\n");
    else printf("0\n");
    
    return 0;
}//1.윤년
*/

/*
#include<stdio.h>

int gcd(int a,int b)
{
    int tmp=a%b;
    
    if(tmp==0) return b;
    
    return gcd(b,tmp);
}


int main(){
    
    int t,n;
    scanf("%d %d",&t,&n);
          
    int lcm=t*n/gcd(t,n);
    
    printf("%d\n%d\n",gcd(t,n),lcm);
}//7.최대공약수와 최소공배수
*/

/*
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=n;i>0;i--){
        
        for(int j=1;j<i;j++){
            printf(" ");
        }
        
        for(int z=i;z<=n;z++){
            printf("* ");
        }
        printf("\n");
    }
}//24.별찍기-16
*/

/*
#include<stdio.h>
#include<string.h>

int main(){
    
    char num[105];
    scanf("%s",num);
    
    for(int i=0;i<strlen(num);i++){
        
        printf("%c",num[i]);
        if((i+1)%10==0) printf("\n");
    }
}//25. 열개씩 끊어서 출력하기
*/

/*
#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    
    int arr[3];
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    
    sort(arr,arr+3);
    
    printf("%d\n",arr[1]);
    
}//16.세수
*/

/*
#include<stdio.h>

int main(){
    
    char n;
    scanf("%c",&n);
    
    printf("%d\n",n);
}//15.아스키 코드
*/

/*
#include<stdio.h>

int main(){
    
    int m,d;
    int date[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int res=0;
    scanf("%d %d",&m,&d);
    
    for(int i=0;i<m-1;i++){
        
        res=res+date[i];
        
    }
    
    res=res+d;
    
    int fin=res%7;
    
    switch(fin){
        case 1:
            printf("MON\n");
            break;
        case 2:
            printf("TUE\n");
            break;
        case 3:
            printf("WED\n");
            break;
        case 4:
            printf("THU\n");
            break;
        case 5:
            printf("FRI\n");
            break;
        case 6:
            printf("SAT\n");
            break;
        default:
            printf("SUN\n");
            break;
    }
    
}//13.2007년
*/

/*
#include<stdio.h>

int main(){
    
    int t;
    long long int arr[100000][2];
    scanf("%lld",&t);
    
    arr[1][0]=0;
    arr[1][1]=1;
    
    for(int i=2;i<=t;i++){
        arr[i][0]=arr[i-1][0]+arr[i-1][1];
        arr[i][1]=arr[i-1][0];
    }
    
    printf("%lld\n",arr[t][0]+arr[t][1]);
    
}//18.이친수
*/

/*
#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    
    int arr[n+m];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j=n;j<m+n;j++){
        scanf("%d",&arr[j]);
    }
    
    sort(arr,arr+n+m);
    
    for(int z=0;z<n+m;z++){
        printf("%d ",arr[z]);
    }
}//6.배열합치기
*/

/*
#include<stdio.h>

int main(){
    
    int n,t;
    int cnt=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        
        int div=0;
        scanf("%d",&t);
        
        for(int j=1;j<t;j++){
            
            if(t%j==0) div+=1;
        }
        
        if(div==1) cnt+=1;
    }
    
    printf("%d\n",cnt);
}//10. 소수찾기
*/

/*
 #include<stdio.h>
 #include<algorithm>
 #include<iostream>
 using namespace std;
 
 int main(){
 
 int n;
 scanf("%d",&n);
 int arr[n];
 
 for(int i=0;i<n;i++){
 scanf("%d",&arr[i]);
 }
 
 sort(arr,arr+n);
 
 if(n%2==0) printf("%d\n",arr[n/2-1]*arr[(n/2)]);
 else printf("%d\n",arr[n/2]*arr[n/2]);
 }//2-1.약수
*/

/*
#include<stdio.h>

int main(){
    
    char arr[333335];
    scanf("%s",arr);
    
    switch(arr[0]){
        case '1':
            printf("1");
            break;
        case '2':
            printf("10");
            break;
        case '3':
            printf("11");
            break;
        case '4':
            printf("100");
            break;
        case '5':
            printf("101");
            break;
        case '6':
            printf("110");
            break;
        case '7':
            printf("111");
            break;
        default:
            printf("");
            break;
    }
    
    
    for(int i=1;arr[i]!='\0';i++){
        
        switch(arr[i]){
            case '1':
                printf("001");
                break;
            case '2':
                printf("010");
                break;
            case '3':
                printf("011");
                break;
            case '4':
                printf("100");
                break;
            case '5':
                printf("101");
                break;
            case '6':
                printf("110");
                break;
            case '7':
                printf("111");
                break;
            default:
                printf("000");
                break;
        }
    }
}//3.8진수 2진수
*/

/*
#include<stdio.h>

int main(){
    
    int a,b,c;
    int cnt=0;
    int max=0;
    scanf("%d %d %d",&a,&b,&c);
    
    int arr[85]={0};
    
    for(int i=1;i<=a;i++){
        
        for(int j=1;j<=b;j++){
            
            for(int z=1;z<=c;z++){
                
                cnt=i+j+z;
                
                arr[cnt]++;
            }
        }
    }
    
    int res;
    
    for(int l=3;l<=80;l++){
        
        if(max<arr[l]) {
            
            max=arr[l];
            res=l;
        }
    }
    
    printf("%d\n",res);
}//4.주사위
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    double a, hour, min, num;
    scanf("%lf",&a);
    
    scanf("%lf:%lf UTC%lf", &hour, &min, &num);
    
    getchar();
    for (int i = 0; i < a; i++)
    {
        double num1, time;
        scanf("UTC%lf", &num1);
        
        getchar();
        
        time = hour * 60 + min + ((num1 - num) * 60);
        
        if ((int)time / 60 >= 24)
            printf("%02d:%02d\n", (int)time / 60 - 24, (int)time % 60);
        else if ((int)time / 60 < 0 && (int)time % 60 < 0)
            printf("%02d:%02d\n", 23 + (int)time / 60, 60 + (int)time % 60);
        else if((int)time / 60 < 0)
            printf("%02d:%02d\n", 24 + (int)time / 60, (int)time % 60);
        else if ((int)time % 60 < 0) {
            if((int)time / 60 -1 < 0)
                printf("%02d:%02d\n", (int)time / 60 +23, 60 + (int)time % 60);
            else
                printf("%02d:%02d\n", (int)time / 60 -1, 60 + (int)time % 60);
        }
        else
            printf("%02d:%02d\n", (int)time / 60, (int)time % 60);
    }
}//5.international meeting
*/

/*
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
*/

/*
#include<stdio.h>
#include<queue>
using namespace  std;

int n,m,v;
int x,y;
int map[1005][1005];
int check1[1005];
int check2[1005];

void dfs(int now){
    
    check1[now]=1;
    
    printf("%d ",now);
    
    for(int i=1;i<=n;i++){
        
        if(map[now][i]==1&&check1[i]==0){
            check1[i]=1;
            dfs(i);
        }
    }
}

int main(){
    
    scanf("%d %d %d",&n,&m,&v);
    
    for(int j=0;j<m;j++){
        
        scanf("%d %d",&x,&y);
        
        map[x][y]=1;
        map[y][x]=1;
    }
    
    dfs(v);
    
    printf("\n");
    
    queue<int>q;
    
    q.push(v);
    check2[v]=1;
    
    while(!q.empty()){
        
        int start=q.front();
        q.pop();
        
        printf("%d ",start);
        
        for(int k=1;k<=n;k++){
            
            if(map[start][k]==1&&check2[k]==0){
                
                q.push(k);
                check2[k]=1;
            }
        }
    }
}//11.dfsbfs
*/

/*
#include<stdio.h>

int main(){
    
    long long N,F;
    scanf("%lld %lld",&N,&F);
    
    long long div=N%100;
    N=N-div;
    
    long long res=0;
    
    for(long long i=N;i<=N+99;i++){
        
        if(i%F==0) {
            res=i;
            break;
        }
    }
    
    res=res%100;
    if(res<10) printf("0%lld\n",res);
    else printf("%lld\n",res);
}//22.나누기
*/

/*
#include<stdio.h>

int main(){
    
    long long int s,f;
    long long int tmp;
    scanf("%lld %lld",&s,&f);
    
    if(s>f) {
        tmp=s;
        s=f;
        f=tmp;
    }
    
    printf("%lld",((f-s+1)*(f+s))/2);
    
}//20.시그마
*/

/*
 #include<stdio.h>
 #include<iostream>
 #include<string.h>
 using namespace std;
 
 int main(){
 char str1[1000];
 char str2[1000];
 
 scanf("%s",str1);
 scanf("%s",str2);
 
 if (strlen(str1) >= strlen(str2)) printf("go\n");
 else printf("no\n");
 }//2-10 아!
*/

/*
#include<stdio.h>

int main(){
    
    int pe[4][2];
    int res=0;
    int max=0;
    
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            
            scanf("%d",&pe[i][j]);
            
            if(j==0){
                res=res-pe[i][j];
                if(res>max) max=res;
            }
            else {
                res=res+pe[i][j];
                if(res>max) max=res;
            }
        }
    }
    printf("%d\n",max);
}//2-2지능형 열차
*/

/*
#include<stdio.h>

int gcd(int a,int b){
    
    if(b==0) return a;
    else return gcd(b,a%b);
    
}

int main(){
    int a1, a2, b1, b2;
    scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
    
    int bunmo=a2*b2;
    int bunza=a1*b2+a2*b1;
    
    int div=gcd(bunmo,bunza);
    
    printf("%d %d\n",bunza/div,bunmo/div);
    
}//2-7.분수합
*/

/*
#include<stdio.h>

int main(){
    
    double day,math,korean,day_m,day_k;
    scanf("%lf %lf %lf %lf %lf",&day,&math,&korean,&day_m,&day_k);
    
    math=math/day_m;
    
    if(math-(int)math!=0) math=(int)math+1;
    else math=(int)math;
    
    korean=korean/day_k;
    
    if(korean-(int)korean!=0) korean=(int)korean+1;
    else korean=(int)korean;
    
    if(math>=korean)printf("%.0lf\n",day-math);
    else printf("%.0lf\n",day-korean);
}//2-14.방학숙제
*/

/*
#include<stdio.h>

int main(){
    
    long long int arr[45][2];
    long long int t;
    scanf("%lld",&t);
    long long int inp;
    
    arr[0][0]=1;
    arr[0][1]=0;
    
    arr[1][0]=0;
    arr[1][1]=1;
    
    for(long long int i=2;i<41;i++){
        
        for(long long int j=0;j<2;j++){
            
            arr[i][j]=arr[i-1][j]+arr[i-2][j];
        }
    }
    
    for(long long int z=0;z<t;z++){
        
        scanf("%lld",&inp);
        
        printf("%lld %lld\n",arr[inp][0],arr[inp][1]);
    }
}//23.피보나치 함수
*/

/*
#include<stdio.h>

int main(){
    
    int t;
    int input;
    long long int arr[10005]={0};
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        scanf("%d",&input);
        
        arr[input]++;
        
    }
    
    for(int j=0;j<10001;j++){
        
        if(arr[j]==0) continue;
        else {
            for(int z=0;z<arr[j];z++){
                printf("%d\n",j);
            }
        }
    }
}//21.수 정렬하기
*/



/*
#include <stdio.h>

int n;
int a[305];
int dp[305][3];

int max(int a,int b){
    
    if(a>b) return a;
    else return b;
}


int main() {
    
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
        scanf("%d", &a[i]);
    
    dp[1][1] = dp[1][2] = a[1];
    
    for(int i=2; i<=n; i++) {
        dp[i][1] = dp[i-1][2] + a[i];
        dp[i][2] = max(dp[i-2][1], dp[i-2][2]) + a[i];
    }
    
    printf("%d", max(dp[n][1], dp[n][2]));
}//19.계단오르기(다시풀기)
*/

/*
#include<stdio.h>
#include<queue>
using namespace std;

int visit[10000001];


int main(){
    
    int t;
    scanf("%d",&t);
    
    queue<pair<int,int>>q;
    
    q.push(make_pair(t,0));
    
    while(!q.empty()){
        
        if(t==1) break;
        
        int now=q.front().first;
        int cnt=q.front().second;
        
        q.pop();
        
        if(now==1){
            printf("%d\n",cnt);
            break;
        }
        
        
        if(now%3==0&&visit[now/3]==0){
            
            visit[now/3]=1;
            q.push(make_pair(now/3,cnt+1));
        }
        
        if(now%2==0&&visit[now/2]==0){
            
            visit[now/2]=1;
            q.push(make_pair(now/2,cnt+1));
        }
        
        if(visit[now-1]==0){
            
            visit[now-1]=1;
            q.push(make_pair(now-1,cnt+1));
        }
        
    }
}//9.1로 만들기
*/

/*
#include<stdio.h>

int main(){
    
    int n,k;
    int arr[105];
    int max=-105;
    int tmp=0;
    scanf("%d %d",&n,&k);
    
    for(int i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    
    for(int j=0;j<=n-k;j++){
        
        tmp=0;
        
        for(int z=j;z<j+k;z++){
            
            tmp=tmp+arr[z];
        }
        
        if(tmp>max) max=tmp;
    }
    
    printf("%d\n",max);
}//2-4.기상청 인턴
*/

/*
#include<stdio.h>
#include<math.h>

int main(){
    
    int t;
    long long cnt=0;
    int arr[10001];
    
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            
            cnt=cnt+fabs(arr[i]-arr[j]);
        }
    }
    
    printf("%lld\n",cnt);
}//2-5.거리의 차이
*/

/*
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    
    int arr[9];
    int sum=0;
    
    for(int i=0;i<9;i++){
        
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    
    sum=sum-100;
    sort(arr,arr+9);
    
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            
            if(sum==arr[i]+arr[j]){
                
                arr[i]=-1;
                arr[j]=-1;
                break;
            }
        }
    }
    
    for(int i=0;i<9;i++){
        
        if(arr[i]==-1) continue;
        else printf("%d\n",arr[i]);
    }
    
}//2-6.일곱 난쟁이
 */

/*
#include<stdio.h>

double yiza(double a,double b){
    
    return a*b/100;
}

int main(){
    
    double n,b,m;
    
    while(scanf("%lf %lf %lf",&n,&b,&m)!=EOF){
        
        if(n==m) printf("0\n");
        else{
            
            double be=n;
            int cnt=0;
            
            while(be<m){
                
                be=be+yiza(be,b);
                cnt++;
            }
            
            printf("%d\n",cnt);
        }
    }
}//2-11.저금
*/

/*
#include<stdio.h>

int main(){
    
    int n;
    int game[201][3];
    int score[201]={0};
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&game[i][j]);
        }
    }
    
    for(int j=0;j<3;j++){
        int check[201]={0};
        for(int i=0;i<n;i++){
            
            for(int z=0;z<n;z++){
                
                if(i!=z&&game[i][j]==game[z][j]) check[i]++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(check[i]==0) score[i]=score[i]+game[i][j];
            else score[i]=score[i];
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d\n",score[i]);
    }
}//2-15.유니크
*/

/*
#include<stdio.h>

int main(){
    char input[15] = { '\0', };
    int i = 0;
    int sum = 0;
    
    scanf("%s", input);
    
    for (i = 0; input[i] != '\0'; i++){
        switch (input[i]){
            case 'A':
            case 'B':
            case 'C':
                sum += 3;
                break;
            case 'D':
            case 'E':
            case 'F':
                sum += 4;
                break;
            case 'G':
            case 'H':
            case 'I':
                sum += 5;
                break;
            case 'J':
            case 'K':
            case 'L':
                sum += 6;
                break;
            case 'M':
            case 'N':
            case 'O':
                sum += 7;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                sum += 8;
                break;
            case 'T':
            case 'U':
            case 'V':
                sum += 9;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                sum += 10;
                break;
        }
    }
    
    printf("%d", sum);
}//2-16.다이얼
 */

/*
#include<stdio.h>

int main(){
    
    while(1){
        
        int t;
        int sum=0;
        scanf("%d",&t);
        if(t==0) return 0;
        
        for(int i=1;i<=t;i++){
            sum=sum+i*i;
        }
        
        printf("%d\n",sum);
    }
}//2-22.파인만
*/

/*
#include<stdio.h>

int main(){
    
    int n;
    int cnt=0;
    scanf("%d",&n);
    
    for(int i=1;i<=500;i++){
        for(int j=1;j<=500;j++){
            
            if(i*i-j*j==n) cnt++;
        }
    }
    
    printf("%d\n",cnt);
}//2-23.완전제곱수
*/

/*
#include<stdio.h>

int main(){
    
    int e,f,c;
    scanf("%d %d %d",&e,&f,&c);
    
    int sum=e+f;
    int res_cn=0;
    int cnt=0;
    
    while(sum!=0) {
        
        
        while(sum>=c){
            sum=sum-c;
            cnt++;
        }
        
        if(sum+cnt>=c){
            sum=sum+cnt;
            res_cn=res_cn+cnt;
            cnt=0;
        }
        else{
            sum=0;
            res_cn+=cnt;
        }
        
    }
    
    printf("%d\n",res_cn);
    
}//2-13.탄산음료
 */

/*
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
*/

/*
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
 */

/*
#include<stdio.h>

int fac(int a){
    
    if(a<=1) return 1;
    else return a*fac(a-1);
}

int main(){
    
    while(1){
        
        int n;
        int cnt=1;
        int res=0;
        scanf("%d",&n);
        if(n==0) return 0;
        
        while(n!=0){
            
            res=res+(n%10)*fac(cnt);
            n=n/10;
            cnt++;
        }
        
        printf("%d\n",res);
    }
}//2-18.팩토리얼 진번
*/

/*
#include<stdio.h>

int min(int a,int b){
    if(a>b) return b;
    else return a;
}

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    
    while(1){
        
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==0&&b==0) return 0;
        
        int A=min(a,b);
        int B=max(a,b);
        
        printf("%d\n",2*A-B);
    }
}//2-19.평균 중앙값 문제
*/

/*
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
 */

/*
#include<stdio.h>
#include<math.h>

int main(){
    
    int x1, y1, r1, x2, y2, r2;
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        scanf("%d %d %d %d %d %d",&x1, &y1, &r1, &x2, &y2, &r2);
        
        if(x1==x2&&y1==y2&&r1==r2) printf("-1\n");
        else{
            
            double tmp=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
            double r=r1+r2;
            
            if(tmp>r) printf("0\n");
            else if(tmp==r) printf("1\n");
            else{
                
                if(tmp+r2<r1||tmp+r1<r2) printf("0\n");
                else if(tmp+r2==r1||tmp+r1==r2) printf("1\n");
                else printf("2\n");
            }
        }
    }
}//12.터렛
*/

/*
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
}//2-?.호텔방
*/

/*
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
        
        if(binary_search(a.begin(),a.end(),find[j])){
            printf("1\n");
        }else printf("0\n");
    }
}//17.수 찾기
*/

/*
#include<stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    
        
        for(int i=0;i<4*t-3;i++){
            
            if(i==0||i==4*t){
                for(int j=0;j<4*t-3;j++) printf("*");
                printf("\n");
            }
            else if(i%2==0&&i<=(4*t-4)/2){
                for(int l=0;l<i;l++){
                    if(l%2==0) printf("*");
                    else printf(" ");
                }
                for(int z=i;z<4*t-3-i;z++) printf("*");
                for(int k=4*t-3-i;k<4*t-3;k++){
                    if(k%2==0) printf("*");
                    else printf(" ");
                }

                printf("\n");
            }
            else if(i%2!=0&&i<=(4*t-4)/2){
                for(int l=0;l<i;l++){
                    if(l%2==0) printf("*");
                    else printf(" ");
                }
                for(int z=i;z<4*t-3-i;z++) printf(" ");
                for(int k=4*t-3-i;k<4*t-3;k++){
                    if(k%2==0) printf("*");
                    else printf(" ");
                }
                printf("\n");
            }
            else if(i%2==0&&i>(4*t-4)/2){
                for(int l=0;l<4*t-3-i-1;l++){
                    if(l%2==0) printf("*");
                    else printf(" ");
                }
                for(int z=4*t-3-i-1;z<i;z++) printf("*");
                for(int k=i;k<4*t-3;k++){
                    if(k%2==0) printf("*");
                    else printf(" ");
                }
                printf("\n");
            }
            else{
                for(int l=0;l<4*t-3-i-1;l++){
                    if(l%2==0) printf("*");
                    else printf(" ");
                }
                for(int z=4*t-3-i-1;z<i;z++) printf(" ");
                for(int k=i;k<4*t-3;k++){
                    if(k%2==0) printf("*");
                    else printf(" ");
                }
                printf("\n");

            }
        }
    }
//2.별찍기-19
*/
/*
#include<stdio.h>


int main()
{
    
    int prime[246913]={0};
    int i,j;
    
    for(i=2;i<=246912;i++){
        int check=0;
        
        for(j=2;j*j<=i;j++){
            
            if(i%j==0) {
                
                check=1;
                break;
            }
        }
        if(check==0) prime[i]=1;
    }
    
    
    while(1){
        int n;
        int cnt=0;
        scanf("%d",&n);
        
        if(n==0) return 0;
        
        for(int z=n+1;z<=2*n;z++){
            
            if(prime[z]==1) cnt++;
        }
        
        printf("%d\n",cnt);
    }
}//2-9.베르트랑 공준
*/
/*
#include<stdio.h>
#include<queue>
#include<stack>
using namespace std;

int map[1005][1005];
int check1[1005];
int check2[1005];
int n,m,v,inp1,inp2;


int main(){
    
    scanf("%d %d %d",&n,&m,&v);
    
    for(int i=1;i<=m;i++){
        
        scanf("%d %d",&inp1,&inp2);
        map[inp1][inp2]=1;
        map[inp2][inp1]=1;
    }
    
    stack<int>s;
    s.push(v);
    
    while(!s.empty()){
        
        int now=s.top();
        s.pop();
        
        if(check1[now]==1) continue;
        
        check1[now]=1;
        printf("%d ",now);
        
        for(int j=n;j>=1;j--){
            
            if(map[now][j]==1&&check1[j]==0){
                s.push(j);
            }
        }
        
    }
    
    printf("\n");
    
    queue<int>q;
    q.push(v);
    check2[v]=1;
    
    while(!q.empty()){
        
        int now=q.front();
        q.pop();
        
        printf("%d ",now);
        
        for(int j=1;j<=n;j++){
            
            if(map[now][j]==1&&check2[j]==0){
                
                q.push(j);
                check2[j]=1;
            }
        }
    }
    
}
*/

/*
//섬의 개수
#include<stdio.h>
#include<queue>
using namespace std;

int map[55][55];
int dir[2][8]={{0,0,1,1,1,-1,-1,-1},{1,-1,0,1,-1,0,1,-1}};
int main(){
    
    while(1){
        
        int w,h;
        int cnt=0;
        scanf("%d %d",&w,&h);
        
        if(w==0&&h==0) return 0;
        
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                
                scanf("%d",&map[i][j]);
            }
        }
        
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                
                
                if(map[i][j]==1){
                    
                    queue<pair<int,int>>q;
                    q.push(make_pair(i,j));
                    
                    while(!q.empty()){
                        
                        int x=q.front().first;
                        int y=q.front().second;
                        
                        q.pop();
                        
                        for(int z=0;z<8;z++){
                            
                            int nowx=x+dir[0][z];
                            int nowy=y+dir[1][z];
                            
                            
                            if(nowx>=0&&nowx<h&&nowy>=0&&nowy<w&&map[nowx][nowy]==1){
                                
                                map[nowx][nowy]=0;
                                q.push(make_pair(nowx,nowy));
                            }
                        }
                        
                    }
                    
                    cnt++;
                }
                
            }
        }
        printf("%d\n",cnt);
    }
    
}
*/

/*
//미로탐색
#include<stdio.h>
#include<queue>
using namespace std;

int map[105][105];
int check[105][105];
int loop[2][4]={{0,0,1,-1},{1,-1,0,0}};

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            
            scanf("%1d",&map[i][j]);
        }
    }
    
    queue<pair<int,int>>q;
    q.push(make_pair(1,1));
    check[1][1]=1;
    
    while(!q.empty()){
        
        int x=q.front().first;
        int y=q.front().second;
        
        q.pop();
        
        for(int z=0;z<4;z++){
            
            int nowx=x+loop[0][z];
            int nowy=y+loop[1][z];
            
            if(nowx>0&&nowx<=n&&nowy>0&&nowy<=m&&check[nowx][nowy]==0&&map[nowx][nowy]==1){
                
                check[nowx][nowy]=check[x][y]+1;
                q.push(make_pair(nowx,nowy));
                
            }
        }
    }
    
    printf("%d\n",check[n][m]);
}
*/

/*
//촌수계산
#include<stdio.h>
#include<queue>
using namespace std;

int map[105][105];
int check[105];
int n,start,fin;
int t;
int inp1,inp2;

int main(){
    
    scanf("%d %d %d",&n,&start,&fin);
    
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++){
        
        scanf("%d %d",&inp1,&inp2);
        map[inp1][inp2]=1;
        map[inp2][inp1]=1;
    }
    
    
    int cmp=start;
    int cnt=0;
    int go=0;
    int step=0;
    
    queue<pair<int,int>>q;
    q.push(make_pair(cmp,cnt));
    check[cmp]=1;
    
    while(!q.empty()){
        
        go=q.front().first;
        step=q.front().second;
        
        q.pop();
        
        if(go==fin) break;
        
        for(int i=1;i<=n;i++){
            
            if(map[go][i]==1&&check[i]==0){
                
                cmp=i;
                cnt=step+1;
                q.push(make_pair(cmp,cnt));
                check[i]=1;
            }
        }
    }
    
    if(go==fin) printf("%d\n",step);
    else printf("-1\n");
    
}
*/

/*
//1로 만들기
#include<stdio.h>
#include<queue>
using namespace std;

int visit[1000001];

int main(){
    
    int n;
    scanf("%d",&n);
    
    queue<pair<int,int>>q;
    q.push(make_pair(n,0));
    
    while(!q.empty()){
        
        int now=q.front().first;
        int cnt=q.front().second;
        q.pop();
        
        if(now==1){
            printf("%d\n",cnt);
            return 0;
        }
        
        if(now%2==0&&visit[now/2]==0){
            
            visit[now/2]=1;
            q.push(make_pair(now/2,cnt+1));
        }
        
        if(now%3==0&&visit[now/3]==0){
            
            visit[now/3]=1;
            q.push(make_pair(now/3,cnt+1));
        }
        
        if(visit[now-1]==0){
            visit[now-1]=1;
            q.push(make_pair(now-1,cnt+1));
        }
        
    }
}
*/

/*
//유기농 배추
#include<stdio.h>
#include<queue>
using namespace std;

int loop[2][4]={
    {0,0,1,-1},{1,-1,0,0}
};
int map[55][55];

int main(){
    
    int t,m,n,k;
    int x,y;
    
    scanf("%d",&t);
    
    
    for(int r=0;r<t;r++){
        
        int cnt=0;
        scanf("%d %d %d",&m,&n,&k);
        
        for(int j=0;j<n;j++){
            
            for(int z=0;z<m;z++){
                
                map[j][z]=0;
            }
        }
        
        for(int i=0;i<k;i++){
            scanf("%d %d",&y,&x);
            map[y][x]=1;
        }
    
    
        queue<pair<int,int>>q;
    
    
        for(int j=0;j<n;j++){
            for(int z=0;z<m;z++){
            
                if(map[j][z]==1){
                
                    q.push(make_pair(j,z));
                    while(!q.empty()){
        
                        int tmpx=q.front().first;
                        int tmpy=q.front().second;
                        q.pop();
                    
                        for(int l=0;l<4;l++){
                        
                            int nowx=tmpx+loop[0][l];
                            int nowy=tmpy+loop[1][l];
                        
                            if(nowx>=0&&nowx<n&&nowy>=0&&nowy<m&&map[nowx][nowy]==1){
                            
                                map[nowx][nowy]=0;
                                q.push(make_pair(nowx,nowy));
                            }
                        }
                    }
                
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }
}
*/

/*
//나이트의 이동
#include<stdio.h>
#include<queue>
using namespace std;

int map[305][305];
int loop[2][8]={
    {-2,-2,-1,-1,1,1,2,2},{-1,1,-2,2,-2,2,-1,1}
};

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        int l;
        scanf("%d",&l);
        
        for(int j=0;j<l;j++){
            for(int z=0;z<l;z++){
                
                map[j][z]=0;
            }
        }
        
        int stax,stay,finx,finy;
        scanf("%d %d %d %d",&stax,&stay,&finx,&finy);
        
        queue<pair<pair<int,int>,int>>q;
        q.push(make_pair(make_pair(stax,stay),0));
        
        while(!q.empty()){
            
            int x=q.front().first.first;
            int y=q.front().first.second;
            int cnt=q.front().second;
            
            q.pop();
            
            if(x==finx&&y==finy){
                printf("%d\n",cnt);
                break;
            }
            
            for(int k=0;k<8;k++){
                
                int nowx=x+loop[0][k];
                int nowy=y+loop[1][k];
                
                if(nowx>=0&&nowx<l&&nowy>=0&&nowy<l&&map[nowy][nowx]==0){
                    
                    map[nowy][nowx]=1;
                    q.push(make_pair(make_pair(nowx,nowy),cnt+1));
                }
                
            }
        }
    }
}
 */
/*
//알파벳
#include<stdio.h>

char map[25][25];
int max=1;
int r,c;
int loop[2][4]={
    {0,0,1,-1},{1,-1,0,0}
};
int alpha[26];

void dfs(int x,int y,int cnt){
    
    if(max<cnt) max=cnt;
    
    for(int z=0;z<4;z++){
        int nowx=x+loop[0][z];
        int nowy=y+loop[1][z];
        
        if(nowx>0&&nowx<=r&&nowy>0&&nowy<=c&&alpha[map[nowx][nowy]-'A']==0){
            
            alpha[map[nowx][nowy]-'A']=1;
            dfs(nowx,nowy,cnt+1);
            alpha[map[nowx][nowy]-'A']=0;
        }
        
    }
    
}

int main(){
    
    scanf("%d %d",&r,&c);
    
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            
            scanf(" %1c",&map[i][j]);
        }
        
    }
    
    alpha[map[1][1]-'A']=1;
    dfs(1,1,1);
    
    printf("%d\n",max);
}
 */

/*
//안전영역
#include<stdio.h>

int map[105][105];
int check[105][105];
int cmp_map[105][105];
int loop[2][4]={{0,0,1,-1},{1,-1,0,0}};
int n,cnt,max_c=0;

void dfs(int x,int y){
    
    check[x][y]=1;
    
    for(int l=0;l<4;l++){
        
        int nowx=x+loop[0][l];
        int nowy=y+loop[1][l];
        
        if(nowx>0&&nowx<=n&&nowy>0&&nowy<=n&&cmp_map[nowx][nowy]!=0&&check[nowx][nowy]==0){
            dfs(nowx,nowy);
        }
    }
}

int main(){
    
    int max=0;
    int min=101;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&map[i][j]);
            if(max<map[i][j]) max=map[i][j];
            if(min>map[i][j]) min=map[i][j];
        }
    }
    
    if(min==max) {
        printf("1\n");
        return 0;
    }
    
    for(int z=min;z<=max;z++){
        
        cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                
                check[i][j]=0;
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                
                if(map[i][j]<=z) cmp_map[i][j]=0;
                else cmp_map[i][j]=1;
                
                
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                
                if(cmp_map[i][j]==1&&check[i][j]==0){
                    cnt++;
                    dfs(i,j);
                    
                    if(cnt>max_c) max_c=cnt;
                }
            }
        }
    
    }
    
    printf("%d\n",max_c);
}
*/

/*
#include<stdio.h>
#include<queue>
using namespace std;

int map[51][51];
int check[51][51];
int loop[2][4]={
    {0,0,1,-1},{1,-1,0,0}
};

int main(){
    
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<= n;i++){
        for(int j=1;j<=n;j++){
            scanf("%1d",&map[i][j]);
        }
    }
    for(int i=1;i<= n;i++){
        for(int j=1;j<=n;j++){
            check[i][j]=10000000;
        }
    }
    
    check[1][1]=0;
    
    queue<pair<int,int>>q;
    q.push(make_pair(1,1));
    
    while(!q.empty()){
        
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        
        for(int j=0;j<4;j++){
            
            int nowx=x+loop[0][j];
            int nowy=y+loop[1][j];
            
            if (nowx<1 || nowx>n || nowy<1 || nowy>n)continue;
            if (check[nowx][nowy] <= check[x][y])continue;
                
            if(map[nowx][nowy]==1){
                check[nowx][nowy]=check[x][y];
                q.push(make_pair(nowx,nowy));
            }
            else{
                check[nowx][nowy]=check[x][y]+1;
                q.push(make_pair(nowx,nowy));
            }
            
        }
    }
    printf("%d\n",check[n][n]);
}
 */

/*
//최소비용 구하기
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
#define INF 100000001

vector<vector<pair<int,int>>>map;

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    
    map.resize(n+1);
    
    int tmps,tmpf,w;
    for(int i=1;i<=m;i++){
        
        scanf("%d %d %d",&tmps,&tmpf,&w);
        map[tmps].push_back(make_pair(tmpf,w));
    }
    
    int s,f;
    scanf("%d %d",&s,&f);
    
    vector<int>dist(n+1,INF);
    dist[s]=0;
    
    priority_queue<pair<int,int>>q;
    q.push(make_pair(0,s));
    
    while(!q.empty()){
        
        int now=q.top().second;
        int nowdis=-q.top().first;
        
        q.pop();
        
        for(int i=0;i<map[now].size();i++){
            
            int next=map[now][i].first;
            
            if(dist[next]>nowdis+map[now][i].second){
                
                dist[next]=nowdis+map[now][i].second;
                q.push(make_pair(-dist[next],next));
            }
        }
    }
    
    printf("%d\n",dist[f]);
}
*/

/*
 //최단경로
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
#define INF 1000000

vector<pair<int,int>>val[20001];

int main(){
    
    int v,e;
    scanf("%d %d",&v,&e);
    
    int k;
    scanf("%d",&k);
    
    for(int i=0;i<e;i++){
        
        int from,to,w;
        
        scanf("%d %d %d",&from,&to,&w);
        
        val[from].push_back(make_pair(to,w));
        
    }
    
    vector<int>dist(v+1,INF);
    dist[k]=0;
    
    priority_queue<pair<int,int>>q;
    
    q.push(make_pair(0,k));
    
    while(!q.empty()){
        
        int now=q.top().second;
        int value=-q.top().first;
        q.pop();
        
        if(value>dist[now]) continue;
        
        for(int i=0;i<val[now].size();i++){
            
            int tmp_n=val[now][i].first;
            int nextdi=value+val[now][i].second;
            
            if(nextdi<dist[tmp_n]){
                dist[tmp_n]=nextdi;
                q.push(make_pair(-nextdi,tmp_n));
            }
        }
    }
    
    for(int i=1;i<=v;i++){
        
        if(dist[i]==INF) printf("INF\n");
        else printf("%d\n",dist[i]);
    }
    
    return 0;
}
*/

/*
//플로이드
#include<stdio.h>
#include<algorithm>
using namespace std;
#define INF 100000001

int flo[105][105];
int dist[105][105];
int n,m;



int main(){
    
    
    
    scanf("%d %d",&n,&m);
    
    int i,j,w;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            flo[i][j]=INF;
        }
    }
    
    for(int z=0;z<m;z++){
        
        scanf("%d %d %d",&i,&j,&w);
        
        if(flo[i][j]>w)flo[i][j]=w;
    }
    
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dist[i][j]=flo[i][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                
                if(dist[j][k]>dist[j][i]+dist[i][k]){
                    dist[j][k]=dist[j][i]+dist[i][k];
                    flo[j][k]=dist[j][k];
                }
            }
        }
        
    }
    
    for(int q=1;q<=n;q++){
        for(int p=1;p<=n;p++){
            if(p==q) flo[q][p]=0;
            printf("%d ",flo[q][p]);
        }
        printf("\n");
    }

}
 */

/*
//경로찾기
#include<stdio.h>
#include<algorithm>
#define INF 10000001
using namespace std;

int dist[105][105];
int flo[105][105];

int main(){
    
    int n;
    int tmp;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            flo[i][j]=INF;
        }
    }

    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            scanf("%d",&tmp);
            
            if(tmp!=0) flo[i][j]=tmp;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                
                if(flo[j][k]>flo[j][i]+flo[i][k]){
                    flo[j][k]=flo[j][i]+flo[i][k];
                }
            }
        }
    }
    
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            if(flo[i][j]!=INF) dist[i][j]=1;
            else dist[i][j]=0;
            printf("%d ",dist[i][j]);
        }
        printf("\n");
    }
}
 */

/*
#include<stdio.h>
#include<algorithm>
using namespace std;
#define INF 1000001

int dist[1005][1005];
int n,m,x;


int main(){
    
    
    
    scanf("%d %d %d",&n,&m,&x);
    
    int i,j,w;
    int max=-1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dist[i][j]=INF;
        }
    }
    
    for(int z=0;z<m;z++){
        
        scanf("%d %d %d",&i,&j,&w);
        
        if(dist[i][j]>w)dist[i][j]=w;

    }
    
   
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                
                if(dist[j][k]>dist[j][i]+dist[i][k]){
                    dist[j][k]=dist[j][i]+dist[i][k];
                }
            }
        }
        
    }
    
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dist[i][j]==INF)dist[i][j]=0;
        }
    }
    
    for(int q=1;q<=n;q++){
            
        
             if(max<dist[q][x]+dist[x][q]) max=dist[q][x]+dist[x][q];
            
    }
    
    printf("%d\n",max);
}
*/

/*
//파티
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<vector>
#define INF 87654321
using namespace std;

int n,m,x;
int s,f,t;
vector<vector<pair<int,int>>>map;

int dij(int start,int fin){
    
    vector<int>dist(n+1,INF);
    
    dist[start]=0;
    priority_queue<pair<int,int>>q;
    
    q.push(make_pair(0,start));
    
    while(!q.empty()){
        
        int now=q.top().second;
        int nowdist=-q.top().first;
        q.pop();
        
        if(now==fin) break;
        
        for(int j=0;j<map[now].size();j++){
            
            int next=map[now][j].second;
            
            if(dist[next]>nowdist+map[now][j].first){
                dist[next]=nowdist+map[now][j].first;
                q.push(make_pair(-dist[next],next));
            }
        }
    }
    
    return dist[fin];
    
}

int main(){
    
    scanf("%d %d %d",&n,&m,&x);
    map.resize(n+1);
    int max=-1;
    
    for(int z=1;z<=m;z++){
        
        scanf("%d %d %d",&s,&f,&t);
        map[s].push_back(make_pair(t,f));
    }
    
    for(int i=1;i<=n;i++){
        
        int go=dij(i,x);
        int back=dij(x,i);
        
        if(max<go+back) max=go+back;
    }
    
    
    printf("%d\n",max);
}
*/

/*
//저울
#include<stdio.h>
#include<algorithm>
using namespace std;
#define INF 10001

int dist[105][105];
int flo[105][105];
int res[105][105];

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dist[i][j]=INF;
            flo[i][j]=INF;
        }
    }
    
    int tmp1,tmp2;
    for(int z=1;z<=m;z++){
        
        scanf("%d %d",&tmp1,&tmp2);
        dist[tmp1][tmp2]=1;
        flo[tmp2][tmp1]=1;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                
                if(dist[j][k]>dist[j][i]+dist[i][k])
                    dist[j][k]=dist[j][i]+dist[i][k];
                if(flo[j][k]>flo[j][i]+flo[i][k])
                    flo[j][k]=flo[j][i]+flo[i][k];
                
            }
        }
    }
    
    
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=n;j++){
            
            if(dist[i][j]==INF) dist[i][j]=0;
            if(flo[i][j]==INF) flo[i][j]=0;
            res[i][j]=dist[i][j]+flo[i][j];
            
            if(res[i][j]==0&&i!=j)cnt++;
        }
        printf("%d\n",cnt);
    }

}
*/


/*
//특정한 최단경로
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<vector>
#define INF 87654321
using namespace std;

int n,m,x;
int s,f,t;
vector<vector<pair<int,int>>>map;

int dij(int start,int fin){
    
    vector<int>dist(n+1,INF);
    
    dist[start]=0;
    priority_queue<pair<int,int>>q;
    
    q.push(make_pair(0,start));
    
    while(!q.empty()){
        
        int now=q.top().second;
        int nowdist=-q.top().first;
        q.pop();
        
        if(now==fin) break;
        
        for(int j=0;j<map[now].size();j++){
            
            int next=map[now][j].second;
            
            if(dist[next]>nowdist+map[now][j].first){
                dist[next]=nowdist+map[now][j].first;
                q.push(make_pair(-dist[next],next));
            }
        }
    }
    
    return dist[fin];
    
}

int main(){
    
    scanf("%d %d",&n,&m);
    map.resize(n+1);
    
    for(int z=1;z<=m;z++){
        
        scanf("%d %d %d",&s,&f,&t);
        map[s].push_back(make_pair(t,f));
        map[f].push_back(make_pair(t,s));
    }
    
    int x,y;
    scanf("%d %d",&x,&y);
    
    int a1=dij(1,x);
    int b1=dij(x,y);
    int c1=dij(y,n);
    
    int a2=dij(1,y);
    int b2=dij(y,x);
    int c2=dij(x,n);
    
    if(a1==INF||b1==INF||c1==INF||a2==INF||b2==INF||c2==INF) printf("-1\n");
    else {
        if(a1+b1+c1>=a2+b2+c2) printf("%d\n",a2+b2+c2);
        else printf("%d\n",a1+b1+c1);
    }
    
}
 */

/*
//빙산
#include<stdio.h>
#include<queue>
using namespace std;

int map[305][305];
int copy_m[305][305];
int loop[2][4]={
    {0,0,1,-1},{1,-1,0,0}
};
int check[305][305];
int n,m;

void clear_check(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            check[i][j]=0;
        }
    }
}

bool seperate(){
   
    int comp=0;
    clear_check();
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            
            if(copy_m[i][j]>0&&check[i][j]==0){
                
                check[i][j]=1;
                
                queue<pair<int,int>>que;
                que.push(make_pair(i,j));
                
                while(!que.empty()){
                    
                    int x=que.front().first;
                    int y=que.front().second;
                    
                    que.pop();
                    
                    for(int z=0;z<4;z++){
                        
                        int nowx=x+loop[0][z];
                        int nowy=y+loop[1][z];
                        
                        if(nowx>0&&nowx<=n&&nowy>0&&nowy<=m&&check[nowx][nowy]==0&&copy_m[nowx][nowy]>0){
                            
                            check[nowx][nowy]=1;
                            que.push(make_pair(nowx,nowy));
                        }
                    }
                }
                
                comp++;
            }
        }
    }
    
    if(comp>1) return true;
    else return false;
}

int main(){
    
    scanf("%d %d",&n,&m);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            
            scanf("%d",&map[i][j]);
            copy_m[i][j]=map[i][j];
        }
    }
    
    int res=0;
    while(seperate()==false){
    
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
            
                if(copy_m[i][j]<=0){
                
                    for(int z=0;z<4;z++){
                        int nowx=i+loop[0][z];
                        int nowy=j+loop[1][z];
                        
                        copy_m[nowx][nowy]=copy_m[nowx][nowy]-1;
                    }
                }
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(copy_m[i][j]<=0) copy_m[i][j]=0;
            }
        }
        res++;
    }
    
    printf("%d\n",res);
}
*/

/*
//치즈
#include<stdio.h>

int map[105][105];
int n,m;
int loop[2][4]={
    {0,0,1,-1},{1,-1,0,0}
};
int check[105][105];

void erase(int x,int y){
    
    if(x>0&&x<=n&&y>0&&y<=m){
        
        if(map[x][y]==0&&check[x][y]==0){
            
            for(int d=0;d<4;d++){
                
                check[x][y]=1;
                erase(x+loop[0][d],y+loop[1][d]);
            }
        }
        else if(map[x][y]>0&&check[x][y]==0){
            map[x][y]=map[x][y]+1;
        }
        
    }
}


int checking(){
    
    int res=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            
            if(map[i][j]==2||map[i][j]==1) {
                map[i][j]=1;
                res=1;
            }
            else map[i][j]=0;
        }
    }
    return res;
}


int main(){
    
    scanf("%d %d",&n,&m);
    
    int tmp;
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            
            scanf("%d",&tmp);
            map[i][j]=tmp;
        }
    }
    int res=0;
    
    while(1){
        
        erase(1,1);
        cnt++;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                check[i][j]=0;
            }
        }
        
        res=checking();
        
        if(res==0) break;
        
        
    }
    
    printf("%d\n",cnt);
    
}
 */

/*
//웜홀
#include<stdio.h>
#include<vector>
#include<queue>
#define INF 87654321
using namespace std;

int dist[505];

struct edge{
    
    int s=0,f=0,w=0;
};

edge tmp1,tmp2;


int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int l=0;l<t;l++){
        
        int n,m,worm;
        vector<edge>map;
        
        scanf("%d %d %d",&n,&m,&worm);
        
        for(int k=0;k<m;k++){
            scanf("%d %d %d",&tmp1.s,&tmp1.f,&tmp1.w);
            tmp2.s=tmp1.f;
            tmp2.f=tmp1.s;
            tmp2.w=tmp1.w;
            
            map.push_back(tmp1);
            map.push_back(tmp2);
        }
        
        for(int k=0;k<worm;k++){
            scanf("%d %d %d",&tmp1.s,&tmp1.f,&tmp1.w);
            tmp1.w=tmp1.w*(-1);
            
            map.push_back(tmp1);
            
        }
        
        
        for(int i=1;i<=n;i++) dist[i]=INF;
        
        dist[map[0].s]=0;
        
        for(int i=1;i<=n;i++){
            
            int judge=0;
            for(int j=0;j<map.size();j++){
                
                int s=map[j].s;
                int f=map[j].f;
                int w=map[j].w;
                
                if(dist[f]>dist[s]+w){
                    
                    dist[f]=dist[s]+w;
                    judge++;
                }
            }
            
            if(i==n&&judge>0) printf("YES\n");
            else if(i==n&&judge==0) printf("NO\n");
        }
    }
    return 0;
}
*/

/*
//오일러 회로
#include<stdio.h>
#include<vector>
using namespace std;

int map[1005][1005];
int n;

void dfs(int go,vector<int >& d){
    
    for(int i=0;i<n;i++){
        
        while(map[go][i]>0){
            
            map[go][i]--;
            map[i][go]--;
            dfs(i,d);
        }
    }
     d.push_back(go+1);
}

int main(){
    
    int oddcheck=0;
    int odd=1;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            
            scanf("%d",&map[i][j]);
           
        }
    }
    
    for(int i=0;i<n;i++){
        
        oddcheck=0;
        for(int j=0;j<n;j++){
            
            oddcheck=map[i][j]+oddcheck;
        }
        if(oddcheck%2!=0) odd=0;
        if(odd==0) break;
    }
    
    vector<int>d;
    
    if(odd==1){
        
        dfs(0,d);
        
        for(int i=0;i<d.size();i++){
            printf("%d ",d[i]);
        }
        printf("\n");
    }
    else printf("-1\n");
}
*/

/*
//피보나치 함수
#include<stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        int n;
        scanf("%d",&n);
        
        int dp[45][2];
        
        dp[0][0]=1;
        dp[0][1]=0;
        dp[1][0]=0;
        dp[1][1]=1;
        
        for(int j=2;j<=n;j++){
            
            dp[j][0]=dp[j-1][0]+dp[j-2][0];
            dp[j][1]=dp[j-1][1]+dp[j-2][1];
        }
        
        printf("%d %d\n",dp[n][0],dp[n][1]);
    }
    
}
*/

/*
//기상청 인턴 신현수
#include<stdio.h>

int main(){
    
    int n,k;
    int max=-105;
    int arr[205];
    scanf("%d %d",&n,&k);
    
    for(int i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    
    
    for(int i=0;i<=n-k;i++){
        int tmp=0;
        for(int j=0;j<k;j++){
            
            tmp=tmp+arr[i+j];
        }
        
        if(max<tmp) max=tmp;
    }
    
    printf("%d\n",max);
}
*/

/*
//달팽이는 올라가고 싶다
#include<stdio.h>

int main(){
    
    int a,b,v;
    scanf("%d %d %d",&a,&b,&v);
    
    int n=0;
    
    while(a+n*(a-b)<v){
        n++;
    }
    
    printf("%d\n",n+1);
}
*/

/*
//연속부분최대곱
#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    
    double data[10005];
    
    for(int i=0;i<n;i++){
        
        scanf("%lf",&data[i]);
    }
    
    double max=0;
    
    for(int i=0;i<n;i++){
        double tmp=1;
        for(int j=i;j<n;j++){
            
            tmp=tmp*data[j];
            if(max<tmp) max=tmp;
        }
        
    }
    
    printf("%.3lf",max);
}
*/

/*
//보석 줍기
#include<stdio.h>

int main(){
    
    double n,m;
    double max=0;
    double data[100001];
    scanf("%lf %lf",&n,&m);
    
    for(int i=0;i<n;i++){
        
        scanf("%lf",&data[i]);
    }
    
    for(int i=0;i<n;i++){
        double tmp=0;
        for(int j=i;j<i+m;j++){
            
            if(n-i>6) tmp=tmp+data[j];
            else break;
        }
        if(n-i<=6) break;
        if(max<tmp) max=tmp;
    }
    
    double res=1000*(max/m);
    
    printf("%.0lf\n",res);
}
*/

/*
#include<stdio.h>

int dp[30001][30001];
int weight[30001];
int value[30001];

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    
    int n,k;
    scanf("%d %d",&n,&k);
    
    for(int j=0;j<n;j++){
        scanf("%d",&value[j]);
    }
    
    for(int i=0;i<k;i++){
        scanf("%d",&weight[i]);
    }
    
    for(int i=1;i<n;i++){
        
        for(int j=1;j<k;j++){
            
            if(i>=weight[j]) dp[i][j]=max(dp[i][j-1],dp[i-weight[j]][j]+value[j]);
            else dp[i][j]=dp[i][j-1];
        }
    }
    
    int sum=0;
    for(int i=0;i<k;i++) sum=sum+dp[weight[i]][n-1];
    
    printf("%d\n",sum);
}
 */

/*
//다리 놓기
#include<stdio.h>

double mo(int n,int m){
    
    double res=1;
    for(int i=m;i>m-n;i--){
        res=res*i;
    }
    return res;
}

double za(int n){
    
    double res2=1;
    for(int j=n;j>0;j--){
        res2=res2*j;
    }
    return res2;
}

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        int n,m;
        scanf("%d %d",&n,&m);
        
        double up=mo(n,m);
        double down=za(n);
        
        printf("%.0lf\n",up/down);
        
    }
}
 */

/*
//돌게임3
#include<stdio.h>

int check[1001];

int main(){
    
    int n;
    scanf("%d",&n);
    
    check[1]=check[3]=check[4]=1;
    check[2]=0;
    
    for(int i=5;i<=n;i++){
        
        if(check[i-1]==1&&check[i-3]==1&&check[i-4]==1) check[i]=0;
        else check[i]=1;
    }
    
    if(check[n]==1) printf("SK\n");
    else printf("CY\n");
}
*/

/*
//돌게임4
#include<stdio.h>

int check[1001];

int main(){
    
    int n;
    scanf("%d",&n);
    
    check[1]=check[3]=0;
    check[2]=check[4]=1;
    
    for(int i=5;i<=n;i++){
        
        if(check[i-1]==1&&check[i-3]==1&&check[i-4]==1) check[i]=0;
        else check[i]=1;
    }
    
    if(check[n]==1) printf("SK\n");
    else printf("CY\n");
}
 */

/*
//타일채우기
#include<stdio.h>

int dp[10000001];

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        int n;
        scanf("%d",&n);
        
        dp[1]=1;
        dp[2]=5;
        dp[3]=11;
        dp[4]=36;
        
        for(int j=5;j<=n;j++){
            
            dp[j]=dp[j-1]+dp[2]*dp[j-2]+dp[j-3]-dp[j-4];
        }
        
        printf("%d\n",dp[n]);
    }
}
 */

/*
//기업투자

#include<stdio.h>

int dp[25][305];
int map[305][25];
int remap[25][305];
int arr[25];
int n,m;


int main(){
    
    scanf("%d %d",&n,&m);
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            scanf("%d",&map[i][j]);
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            remap[j][i]=map[i][j];
        }
    }
    
    for(int j=1;j<=n;j++){
        dp[1][j]=remap[1][j];
    }
    
    for(int i=2;i<=m;i++){
        for(int j=1;j<=n;j++){
            int max=0;
            for(int k=0;k<=j;k++){
                
                if(max<dp[i-1][k]+remap[i][j-k]){
                    
                    max=dp[i-1][k]+remap[i][j-k];
                    dp[i][j]=max;
                    
                    arr[i-1]=k;
                    arr[i]=j-k;
                }
            }
        }
 
    }
    
    
    printf("%d\n",dp[m][n]);
    for(int j=1;j<=m;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}
*/

/*
//색종이 올려놓기
#include<stdio.h>
#include<algorithm>
using namespace std;

int x[101];
int y[101];
int cnt[101];

int main(){
    
    int n,tmp1,tmp2;
    int max=0;
    scanf("%d",&n);
    pair<pair<int,int>,int>p[101];
    
    for(int i=0;i<n;i++){
        
        scanf("%d %d",&tmp1,&tmp2);
        cnt[i]=1;
        
        if(tmp1>=tmp2){
            x[i]=tmp1;
            y[i]=tmp2;
        }
        else {
            x[i]=tmp2;
            y[i]=tmp1;
        }
        
        p[i]=make_pair(make_pair(x[i],y[i]),cnt[i]);
    }
    
    sort(p,p+n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(p[i].first.first>=p[j].first.first&&p[i].first.second>=p[j].first.second){
                if(p[j].second+1>p[i].second) p[i].second=p[j].second+1;
            }
        }
        if(max<p[i].second) max=p[i].second;
    }
    printf("%d\n",max);
    
}
 */

/*
//예산
#include<stdio.h>

int budget[10001];
int st,fin,tmpcheck;
int n,s;

int check()
{
    int tmp=s;
    
    for(int i=1;i<=n;i++){
        if(budget[i]<=tmpcheck) tmp-=budget[i];
        else tmp-=tmpcheck;
    }
    
    if(tmp<0) return 0;
    return 1;
}

int main()
{
    int max=0;
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf("%d",&budget[i]);
        if(budget[i]>max) max=budget[i];
    }
    
    scanf("%d",&s);
    
    st=1;
    fin=s;
    while(st<=fin){
        tmpcheck=(st+fin)/2;
        if(check()) st=tmpcheck+1;
        else fin=tmpcheck-1;
    }
    tmpcheck=(st+fin)/2;
    
    if(tmpcheck>max) printf("%d\n",max);
    else printf("%d\n",tmpcheck);
}
*/

/*
//보석줍기(multiset)
#include<stdio.h>
#include<algorithm>
#include<set>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main(){
    
    pair<int,int>ju[300001];
    multiset<int>bag;
    
    int n,k;
    scanf("%d %d",&n,&k);
    
    for(int i=0;i<n;i++){
        scanf("%d %d",&ju[i].first,&ju[i].second);
    }
    
    int tmp;
    for(int j=0;j<k;j++){
        
        scanf("%d",&tmp);
        bag.insert(tmp);
    }
    
    sort(ju,ju+n,cmp);
    
    long long int res=0;
    
    for(int i=0;i<n;i++){
        if(bag.empty()) break;
        if(bag.lower_bound(ju[i].first)!=bag.end()){
            
            res+=ju[i].second;
            bag.erase(bag.lower_bound(ju[i].first));
        }
    }
    
    printf("%lld\n",res);
}
*/

/*
 //꼬인 전깃줄
#include<stdio.h>
#include<algorithm>
using namespace std;

int tree[100001];
int dp[100001];

int main(){
    
    int n;
    long long int it;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf("%d",&tree[i]);
    }
   
    dp[1]=tree[1];
    int size=1;
    for(int i=2;i<=n;i++){
        if(dp[size]<tree[i]){
            size++;
            dp[size]=tree[i];
            continue;
        }
        it=lower_bound(dp+1,dp+size+1,tree[i])-dp;
        dp[it]=tree[i];
        
    }
    
    printf("%d\n",n-size);
}
*/

/*
#include<stdio.h>

int volum[105];
int dp[105][2];

int main(){
    
    int n,s,m;
    scanf("%d %d %d",&n,&s,&m);
    
    dp[0][0]=s;
    dp[0][1]=s;
    
    for(int i=1;i<=n;i++){
        scanf("%d",&volum[i]);
    }
    
}
*/

/*
//색상환
#include<stdio.h>

int dp[1001][1001];

int main(){
    
    int n,k;
    scanf("%d %d",&n,&k);
    
    if(k*2>n) {
        printf("0\n");
        return 0;
    }
    
    dp[0][0]=dp[1][0]=dp[1][1]=1;
    
    for(int i=2;i<=n;i++){
        for(int j=0;j<=i/2+3;j++){
            if(j==0) dp[i][j]=1;
            else dp[i][j]=(dp[i-1][j]+dp[i-2][j-1])%1000000003;
        }
    }
    
    printf("%d\n",(dp[n-3][k-1]+dp[n-1][k])%1000000003);
}
*/

/*
//기타리스트
#include<stdio.h>

int n,s,m;
int dp[1001][1001];
int vol[101];

int dfs(int a,int b){
    
    int tmp=-1;
    if(dp[a][b]!=-100) return dp[a][b];
    if(n==a) return b;
    
    if(b+vol[a]<=m) dp[a][b]=dfs(a+1,b+vol[a]);
    if(b-vol[a]>=0) tmp=dfs(a+1,b-vol[a]);
    
    if(tmp>dp[a][b]) dp[a][b]=tmp;
    return dp[a][b];
}

int main(){
    
    for(int i=0;i<1001;i++){
        for(int j=0;j<1001;j++){
            dp[i][j]=-100;
        }
    }
    
    scanf("%d %d %d",&n,&s,&m);
    
    for(int i=0;i<n;i++){
        scanf("%d",&vol[i]);
    }
    
    int res=dfs(0,s);
    printf("%d\n",res);
}
*/

/*
 //돌다리 건너기
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

string magic;
string dol1;
string dol2;

long long int dfs(int s,int dollen,int malen){
    
    int res=0;
    
    if(malen==magic.length()) return 1;
    
    if(s==1){
        for(int i=dollen;i<dol1.length();i++){
            if(dol1[i]==magic[malen])
                res+=dfs(2,i+1,malen+1);
        }
    }
    if(s==2){
        for(int j=dollen;j<dol2.length();j++){
            if(dol2[j]==magic[malen])
                res+=dfs(1,j+1,malen+1);
        }
    }
    return res;
}

int main(){
    
    cin>>magic>>dol1>>dol2;
    
    cout<<dfs(1,0,0)+dfs(2,0,0)<<endl;
}
*/

/*
#include<stdio.h>
#include<algorithm>
using namespace std;

int dp[3][3][101];
int day[101];
int n,m;

int dfs(int a,int b,int d){
    
    if(d==n+1) return 1;
    
    if(dp[a][b][d]!=-1) return dp[a][b][d];
    
    if(day[d]==-1){
        
        int res=0;
        if(a==b){
            for(int i=0;i<3;i++){
                if(a!=i){
                    res+=dfs(b,i,d+1);
                    res%=10000;
                }
            }
        }
        else{
            for(int i=0;i<3;i++){
                res+=dfs(b,i,d+1);
                res%=10000;
            }
        }
        dp[a][b][d]=res;
        return dp[a][b][d];
    }
    else{
        if(a==b&&b==day[d]){
            dp[a][b][d]=0;
            return dp[a][b][d];
        }
        else{
            dp[a][b][d]=dfs(b,day[d],d+1);
            return dp[a][b][d];
        }
    }
}

int main(){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<101;k++){
                dp[i][j][k]=-1;
                day[k]=-1;
            }
        }
    }
    
    int daytp,pasta;
    scanf("%d %d",&n,&m);
    
    for(int i=0;i<m;i++){
        scanf("%d %d",&daytp,&pasta);
        day[daytp]=pasta-1;
    }
    
    int res=0;
    
    if(day[1]==-1&&day[2]==-1){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                res+=dfs(i,j,3);
                res%=10000;
            }
        }
    }
    else if(day[1]==-1){
        for(int i=0;i<3;i++){
            res+=dfs(i,day[2],3);
            res%=10000;
        }
    }
    else if(day[2]==-1){
        for(int j=0;j<3;j++){
            res+=dfs(day[1],j,3);
            res%=10000;
        }
    }
    else res=dfs(day[1],day[2],3);
    
    printf("%d\n",res);
}
*/

/*
//꼬인전깃줄
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int arr[100001];
int dp[100001];


int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++){
        scanf("%d",&arr[i]);
    }
    
    dp[1]=arr[1];
    int it;
    int size=1;
    for(int i=2;i<=t;i++){
        
        if(dp[size]<arr[i]){
            size++;
            dp[size]=arr[i];
        }
        else{
            it=lower_bound(dp+1,dp+size+1,arr[i])-dp;
            dp[it]=arr[i];
        }
    }
    
    printf("%d\n",t-size);
}
*/

/*
//lcs
#include<stdio.h>

char map[2][1001];
int dp[1001][1001];

int main(){
    
    int end1=0;
    int end2=0;
    for(int i=1;i<=2;i++){
        for(int j=1;;j++){
            
            scanf("%c",&map[i][j]);
            if(map[i][j]=='\n') {
                
                if(i==1) end1=j;
                if(i==2) end2=j;
                break;
            }
        }
    }
    
    for(int i=1;i<end1;i++){
        for(int j=1;j<end2;j++){
            
            if(map[1][i]==map[2][j]){
                
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                if(dp[i-1][j]>dp[i][j-1]) dp[i][j]=dp[i-1][j];
                else dp[i][j]=dp[i][j-1];
            }
        }
    }
    
    printf("%d\n",dp[end1-1][end2-1]);
}
*/

/*
//유전자
#include<stdio.h>
#include<string.h>

char gene[501];
int dp[501][501];

int main(){
    
    scanf("%s",gene);
    int length,stp,enp;
    
    for(length=2;length<=strlen(gene);length++){
        for(stp=0;stp<strlen(gene)-length+1;stp++){
            
            enp=stp+length-1;
            
            if((gene[stp]=='a'&&gene[enp]=='t')||(gene[stp]=='g'&&gene[enp]=='c')) {
                
                dp[stp][enp]=dp[stp+1][enp-1]+2;
            }
            
            int max=dp[stp][enp];
            
            for(int l=stp;l<enp;l++){
                
                if(max<dp[stp][l]+dp[l+1][enp]) max=dp[stp][l]+dp[l+1][enp];
            }
            
            dp[stp][enp]=max;
        }
    }
    
    printf("%d\n",dp[0][strlen(gene)-1]);
}
*/

/*
//기타리스트
#include<stdio.h>

int n,s,m;
int vol[101];
int dp[101][101];

int dfs(int a,int b){
    
    int tmp=-1;
    
    if(dp[a][b]!=-2) return dp[a][b];
    if(n==a) return b;
    
    if(b+vol[a]<=m) dp[a][b]=dfs(a+1,b+vol[a]);
    if(b-vol[a]>=0) tmp=dfs(a+1,b-vol[a]);
    
    if(tmp>dp[a][b]) dp[a][b]=tmp;
    
    return dp[a][b];
}

int main(){
    
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            dp[i][j]=-2;
        }
    }
    
    scanf("%d %d %d",&n,&s,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&vol[i]);
    }
    
    
    printf("%d\n",dfs(0,s));
    
}
*/

/*
//lcs2
#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

char map[2][1005];
long long int dp[1005][1005];
vector<char>ans;

int main(){
    
    scanf("%s",map[0]);
    scanf("%s",map[1]);
    
    int end1=strlen(map[0]);
    int end2=strlen(map[1]);
    
    for(int i=1;i<=end1;i++){
        for(int j=1;j<=end2;j++){
            
            if(map[0][i-1]==map[1][j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                
                
                if(dp[i-1][j]>dp[i][j-1]) dp[i][j]=dp[i-1][j];
                else dp[i][j]=dp[i][j-1];
            }
        }
    }

    int i=end1;
    int j=end2;
    
    
    for(int x=1;x<=end1;x++){
        for(int y=1;y<=end2;y++){
            printf("%lld ",dp[x][y]);
        }
        printf("\n");
    }
     
    
    while(i>0 && j>0){
        
        if(map[0][i-1]==map[1][j-1]){
            ans.push_back(map[0][i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i][j]==dp[i-1][j]){
                i--;
            }
            else{
                j--;
            }
            
        }
    }
    printf("%d\n",(int)ans.size());
    int size=(int)ans.size();
    for(int i=size-1;i>=0;i--){
        printf("%c",ans[i]);
    }
    printf("\n");
}
*/

/*
//동전1
#include<stdio.h>

int dp[10005];

int main(){
    
    int n,k;
    scanf("%d %d",&n,&k);
    
    dp[0]=1;
    
    for(int i=1;i<=n;i++){
        int coin;
        scanf("%d",&coin);
        
        for(int j=coin;j<=k;j++){
            dp[j]=dp[j-coin]+dp[j];
        }
    }
    
    printf("%d\n",dp[k]);
}
*/

/*
//동전2
#include<stdio.h>
#define INF 1000000;

int dp[10005];

int min(int a,int b){
    if(a>b) return b;
    else return a;
}

int main(){
    
    int n,k;
    scanf("%d %d",&n,&k);
    
    for(int i=0;i<10005;i++){
        dp[i]=INF;
    }
    
    dp[0]=0;
    for(int i=1;i<=n;i++){
        
        int coin;
        scanf("%d",&coin);
        
        for(int j=coin;j<=k;j++){
            dp[j]=min(dp[j],dp[j-coin]+1);
        }
    }
    printf("%d\n",dp[k]);
}
*/

/*
//lcs3
#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

char map[3][105];
long long int dp[105][105][105];
vector<char>ans;

long long int biggest(long long int a,long long int b,long long int c){
    long long int tmp = a;
    if(b>tmp)tmp=b;
    if(c>tmp)tmp=c;
    return tmp;
}

int main(){
    
    scanf("%s",map[0]);
    scanf("%s",map[1]);
    scanf("%s",map[2]);
    
    int end1=strlen(map[0]);
    int end2=strlen(map[1]);
    int end3=strlen(map[2]);
    
    for(int i=1;i<=end1;i++){
        for(int j=1;j<=end2;j++){
            for(int k=1;k<=end3;k++){
                if(map[0][i-1] == map[1][j-1] && map[0][i-1] == map[2][k-1]){
                    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                }else{
                    dp[i][j][k] = biggest(dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1]);
                }
            }
        }
    }
    
    printf("%lld\n",dp[end1][end2][end3]);
}
 */

/*
//상자넣기
#include<stdio.h>
#include<algorithm>
using namespace std;

int t;
int box[1001];
int dp[1001];

int main(){
    
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++){
        scanf("%d",&box[i]);
    }
    
    dp[1]=box[1];
    int it;
    int size=1;
    
    for(int i=2;i<=t;i++){
        if(dp[size]<box[i]){
            size++;
            dp[size]=box[i];
            printf("%d size %d\n",i,size);
            
            for(int i=1;i<=8;i++){
                printf("%d ",dp[i]);
            }
            printf("\n");
        }
        else{
            it=lower_bound(dp+1,dp+size+1,box[i])-dp;
            printf("%d it %d\n",i,it);
            dp[it]=box[i];
            for(int i=1;i<=8;i++){
                printf("%d ",dp[i]);
            }
            printf("\n");
        }
    }
    printf("%d\n",size);
}
 */

/*
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int t,n;
vector<int>file;
vector<int>ans;

int main(){
    
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        if(file.size()>0){
            file.clear();
        }
        if(ans.size()>0){
            ans.clear();
        }
        
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int tmp;
            scanf("%d",&tmp);
            file.push_back(tmp);
        }
        
        
        sort(file.begin(),file.end());
        
        int size=0;
        while(file.size()!=0){
            
            ans.push_back(file[0]+file[file.size()-1]);
            
            vector<int>::iterator it=lower_bound(file.begin(),file.end(),file[0]+file[1]);
            int iter=it-file.begin();
            
            printf("%d %d\n",ans[size],iter);
            
            file.insert(file.begin()+iter,file[0]+file[1]);
            
            file.erase(file.begin());
            file.erase(file.begin());
            
            size++;
        }
        
        for(int i=0;i<ans.size();i++){
            printf("%d ",ans[i]);
        }
        
    }
}
*/

/*
 //내리막길
#include<stdio.h>

int m,n;
int map[501][501];
int check[501][501];
int loop[2][4]{
    {0,0,1,-1},{1,-1,0,0}
};

int dfs(int m,int n){
    
    if(m==0&&n==0){
        check[m][n]=1;
        return check[m][n];
    }
    if(check[m][n]==0){
        for(int i=0;i<4;i++){
            
            int x=m+loop[0][i];
            int y=n+loop[1][i];
            
            if(map[x][y]>map[m][n]){
                check[m][n]+=dfs(x,y);
            }
        }
    }
    return check[m][n];
}

int main(){
    
    int m,n;
    scanf("%d %d",&m,&n);
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&map[i][j]);
        }
    }
    printf("%d\n",dfs(m-1,n-1));
}
*/

/*
//팰린드롬 재귀
#include<stdio.h>

int n;
int pellin[5005];
int dp[5005][5005];

int min(int a,int b){
    if(a>b) return b;
    else return a;
}

int dfs(int start,int end){
    
    if(start>=end) return dp[start][end]=0;
    if(dp[start][end]!=0)return dp[start][end];
    if(pellin[start]==pellin[end]) return dp[start][end]=dfs(start+1,end-1);
    
    return dp[start][end]=1+min(dfs(start+1,end),dfs(start,end-1));
    
}

int main(){
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&pellin[i]);
    }
    
    printf("%d\n",dfs(0,n-1));
    
}
*/

/*
//유전자와 동일한 1차원->2차원 배열로의 확장
#include<stdio.h>

int pellin[5005];
int dp[5005][5005];

int min(int a,int b){
    if(a>b) return b;
    else return a;
}


int main(){
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&pellin[i]);
    }
    
    
    for(int i=1;i<=n-1;i++){
        
        int s=0;
        for(int e=i;e<=n-1;e++){
            
            if(pellin[s]==pellin[e]) dp[s][e]=dp[s+1][e-1];
            else dp[s][e]=1+min(dp[s+1][e],dp[s][e-1]);
            s++;
        }
    }
    
    printf("%d\n",dp[0][n-1]);
}
*/
/*
//파일합치기
#include<stdio.h>

int arr[505];
int dp[505][505];
int save[505];

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        for(int i=0;i<505;i++){
            for(int j=0;j<505;j++){
                dp[i][j]=0;
            }
        }
        
        int n;
        scanf("%d",&n);
        
        for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
            save[i]=save[i-1]+arr[i];
        }
        

        int s,e;
        
        for(int l=2;l<=n;l++){
            for(s=1;s<=n-l+1;s++){
                e=s+l-1;
                int min=1000000000;
                for(int k=s;k<e;k++){
                    if(min>dp[s][k]+dp[k+1][e]) min=dp[s][k]+dp[k+1][e];
                }
                dp[s][e]=save[e]-save[s-1]+min;
            }
        }
        
        printf("%d\n",dp[1][n]);
    }
}
*/

/*
//구간합구하기
#include<stdio.h>

long long int indextree[4000001];
long long int n,m,k;
long long int left,right,cnt;
long long int a,b,c;

void update(long long int s,long long int b,long long int c){
    
    long long int ad=s+b-1;
    long long int tmp=c-indextree[ad];
    indextree[ad]=c;
    ad=ad/2;
    
    while(ad>0){
        indextree[ad]+=tmp;
        ad=ad/2;
    }
 
    for(int i=1;i<s+n;i++){
        printf("%lld ",indextree[i]);
    }
    printf("\n");
 
}

long long int sum(long long int s,long long int b,long long int c){
    
    left=b+s-1;right=c+s-1;
    long long int ans=0;
    
    while(left<=right){
        
        if(left%2!=0) {
            ans+=indextree[left];
           // printf("tree %lld %lld\n",left,indextree[left]);
            left++;
            left=left/2;
            //printf("ans %lld %lld\n",left,ans);
        }
        else {left=left/2;printf("tree %lld %lld\n",left,indextree[left]);}
        
        if(right%2==0){
            ans+=indextree[right];
            //printf("tree %lld %lld\n",right,indextree[right]);
            right--;
            right=right/2;
            //printf("ans %lld %lld\n",right,ans);
        }
        else {right=right/2;printf("tree %lld %lld\n",right,indextree[right]);}
    }
    return ans;
}



int main(){
    
    scanf("%lld %lld %lld",&n,&m,&k);
    
    long long int s;
    for(s=1;s<n;s*=2);
    for(long long int i=s;i<s+n;i++){
        scanf("%lld",&indextree[i]);
        
    }
    
    for(long long int i=s-1;i>0;i--){
        indextree[i]=indextree[i*2]+indextree[i*2+1];
    }
    
    for(long long int i=0;i<m+k;i++){
        
        scanf("%lld %lld %lld",&a,&b,&c);
        
        
        if(a==1) update(s,b,c);
        if(a==2) printf("%lld\n",sum(s,b,c));
    }
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<vector>
using namespace std;

int t;
int arr[400001];
pair<int,int>indextree[400001];
vector<int> ans;


int main(){
    
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++){
        int tmp,tmp2;
        scanf("%d %d",&tmp,&tmp2);
        arr[tmp]=tmp2;
        indextree[i]=make_pair(arr[tmp],tmp);
    }
    sort(indextree+1,indextree+t+1);
    
    
    for(int i=1;i<=t;i++){
        printf("%d %d\n",indextree[i].first,indextree[i].second);
        
    }
    
    for(int i=1;i<=t;i++){
        
        if(indextree[i].first<=indextree[i].second) continue;
        else ans.push_back(indextree[i].second);
    }
    
}
*/

/*
//군인
#include<stdio.h>
typedef long long int lli;

lli n,m,s;
lli indextree[2000001];
lli left,right,cnt;
lli a,b,c;

lli calcu(lli start,lli end){
    
    left=start;
    cnt=0;
    
    while(1){
        
        cnt+=indextree[left];
        
        if(cnt>=end){
            
            return left;
        }
        else{
            
            left++;
        }
        
    }
    
}

int main(){
    
    scanf("%lld",&n);
    
    for(lli i=1;i<=n;i++){
        scanf("%lld",&indextree[i]);
    }
    
    scanf("%lld",&m);
    
    for(lli i=0;i<m;i++){
        
        scanf("%lld",&a);
        
        if(a==1) {
            scanf("%lld %lld",&b,&c);
            indextree[b]+=c;

        }
        if(a==2) {
            scanf("%lld",&b);
            printf("%lld\n",calcu(1,b));
        }
    }
    
}
*/

/*
 //음주코딩
#include<stdio.h>
typedef long long int ll;

ll n,k;
ll bit[400001];
char last[4000001];
char input;
ll a,b,s;
ll right,left,cnt;

void update(ll b,ll c){
    
    ll ad=s+b-1;
    bit[ad]=c;
    
    ad=ad/2;
    
    while(ad>0){
        
        bit[ad]=bit[ad*2]*bit[ad*2+1];
        ad=ad/2;
    }
 
    for(int i=1;i<s+n;i++){
        printf("%lld ",bit[i]);
    }
    printf("\n");
}

ll res(ll b,ll c){
    
    left=b+s-1;
    right=c+s-1;
    
    ll ans=1;
    
    while(left<=right){
        if(left%2!=0){
            ans*=bit[left];
            left++;
            left=left/2;
        }
        else{
            left=left/2;
        }
        
        if(right%2==0){
            ans*=bit[right];
            right--;
            right=right/2;
        }
        else right=right/2;
    }
    return ans;
}

int main(){
    
    
    
    for(;scanf("%lld%lld",&n,&k)==2;){
        
        for(s=1;s<n;s*=2);
        
        ll tmp;
        for(ll i=s;i<s+n;i++){
            
            scanf("%lld",&tmp);
            
            if(tmp>0) tmp=1;
            else if(tmp==0) tmp=0;
            else tmp=-1;
            
            bit[i]=tmp;
            
        }
        
        for(ll i=s-1;i>0;i--){
            bit[i]=bit[i*2]*bit[i*2+1];
        }
        
        for(ll i=0;i<k;i++){
            
            getchar();
            scanf("%c",&input);
            getchar();
            
            if(input=='C'){
                scanf("%lld %lld",&a,&b);
                if(b>0) b=1;
                else if(b==0) b=0;
                else b=-1;
                update(a,b);
            }
            else {
                scanf("%lld %lld",&a,&b);
                cnt=res(a,b);
                
                if(cnt>0) printf("+");
                else if(cnt==0) printf("0");
                else printf("-");
            }
        }
        
        getchar();
        printf("\n");
        
        
    }
    
    
}*/

/*
 //최대값과 최소값
#include<stdio.h>
typedef long long int ll;

ll mini[400001];
ll maxi[400001];
ll n,m;
ll s;

ll min(ll a, ll b){
    
    if(a>b) return b;
    else return a;
}

ll max(ll a, ll b){
    
    if(a<b) return b;
    else return a;
}

void search(ll a,ll b){
    
    ll left=a+s-1;
    ll right=b+s-1;
    ll gomin=1000000001,gomax=0;
    ll gomi=1000000001,goma=0;
    
    while(left<=right){
        
        
        if(left%2!=0){
            gomin=min(gomin,mini[left]);
            gomax=max(gomax,maxi[left]);
            left++;
            left=left/2;
        }
        else {

            left=left/2;
        }
        
        if(right%2==0){
            gomi=min(gomi,mini[right]);
            goma=max(goma,maxi[right]);
            right--;
            right=right/2;
        }
        else {
            
            right=right/2;
        }
        
    }
    
    printf("%lld %lld\n",min(gomin,gomi),max(gomax,goma));
}


int main(){
    
    scanf("%lld %lld",&n,&m);
    
    for(ll i=0;i<400001;i++){
        mini[i]=1000000001;
        maxi[i]=0;
    }
    
    
    for(s=1;s<n;s*=2);
    
    for(ll i=s;i<s+n;i++){
        ll tmp;
        scanf("%lld",&tmp);
        
        mini[i]=tmp;
        maxi[i]=tmp;
    }
    
    for(ll i=s-1;i>0;i--){
        
        maxi[i]=max(maxi[i*2],maxi[i*2+1]);
        mini[i]=min(mini[i*2],mini[i*2+1]);
    }
    
    ll a,b;
    for(ll j=0;j<m;j++){
        
        scanf("%lld %lld",&a,&b);
        
        search(a,b);
        
   
 }*/

/*
#include<stdio.h>
#include<algorithm>
using namespace std;

int n,k;
int q,a,b;
int bit[400001];
int tmp[400001];

bool find(int a,int b){
    
    for(int i=a;i<=b;i++){
        tmp[i]=bit[i];
    }
    
    sort(tmp+a,tmp+b+1);
 
    for(int i=a;i<=b;i++){
        printf("%d ",tmp[i]);
    }
    printf("\n");
 
    for(int i=a;i<=b;i++){
        if(i==tmp[i]) continue;
        else return 0;
    }
    
    return 1;
    
}

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        
        scanf("%d %d",&n,&k);
        
        for(int j=0;j<n;j++){
            bit[j]=0;
        }
        
        for(int j=0;j<n;j++){
            bit[j]=j;
        }
        
        for(int j=0;j<k;j++){
            scanf("%d",&q);
            
            if(q==0){
                scanf("%d %d",&a,&b);
                
                int tmp;
                tmp=bit[a];
                bit[a]=bit[b];
                bit[b]=tmp;
            }
            else{
                scanf("%d %d",&a,&b);
                
                if(!find(a,b)) printf("NO\n");
                else printf("YES\n");
            }
        }
        
    }
}*/

/*
#include<stdio.h>
#include<vector>
using namespace std;

vector<int>dvd;
int n,m;

void search(int a){
    
    int s=0;
    int e=dvd.size()-1;
    
    while (s<=e) {
        if(dvd[s]==a) {
            dvd.erase(dvd.begin()+s);
            printf("%d ",s);
            dvd.insert(dvd.begin(),a);
            break;
        }
        if(dvd[e]==a) {
            dvd.erase(dvd.begin()+e);
            printf("%d ",e);
            dvd.insert(dvd.begin(),a);
            break;
        }
        s++;e--;
    }
}


int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        scanf("%d %d",&n,&m);
        
        for(int j=1;j<=n;j++){
            int re=j;
            dvd.push_back(re);
        }
        
        int tmp;
        for(int j=0;j<m;j++){
            
            scanf("%d",&tmp);
            search(tmp);
        }
        
        printf("\n");
        dvd.clear();
    }
    
}
*/

/*
#include<stdio.h>
#include<algorithm>
using namespace std;

int mini[400400];
int maxi[400400];
int q,a,b;
int s;

int check(int left,int right){
    int Max=-987654321;
    int Min=987654321;
    
    int firstl=left;
    int firstr=right;
    
    left+=s;
    right+=s;
    
    while(left<=right){
        if(left%2==1){
            Max=max(Max,maxi[left]);
            Min=min(Min,mini[left]);
            left++;
        }
        if(right%2!=1){
           
            Max=max(Max,maxi[right]);
            Min=min(Min,mini[right]);
            right--;
        }
        left=left/2;
        right=right/2;
    }
    
    if(Min==firstl&&Max==firstr) return 1;
    else return 0;
}

void change(int index, int item){
    index += s;
    
    mini[index] = item;
    maxi[index] = item;
    
    for (int i = index/2; i >= 1; i/=2){
        mini[i] = min(mini[i * 2], mini[i * 2 + 1]);
        maxi[i] = max(maxi[i * 2], maxi[i * 2 + 1]);
    }
}
int main(){
    
    int t;
    scanf("%d",&t);
    
    while(t--){
        
        int n,k;
        scanf("%d %d",&n,&k);
        
        for(s=1;s<n;s*=2);
        
        for (int i = 0; i< n; i++){
            maxi[i + s] = i;
            mini[i + s] = i;
        }
        for (int i = s+n; i <s*2 ; i++){
            maxi[i] = -987654321;
            mini[i] = 987654321;
        }
        //부모 구성
        for (int i = s - 1; i >= 1; i--){
            maxi[i] = max(maxi[i * 2], maxi[i * 2 + 1]);
            mini[i] = min(mini[i * 2], mini[i * 2 + 1]);
        }
        for (int i = 0; i < k; i++){
            scanf("%d %d %d", &q, &a, &b);
            if (q == 0){
                int left_temp = mini[a + s];
                int right_temp = mini[b + s];
                change(a, right_temp);
                change(b, left_temp);
            }
            else{
                int tmp = check(a, b);
                if (tmp == 1) printf("YES\n");
                else printf("NO\n");
            }
        }
    }
}
 */

/*
 //coderhigh-1
#include<stdio.h>

int y[10],k[10];

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        for(int j=0;j<9;j++){
            int a,b;
            scanf("%d %d",&a,&b);
            
            y[j]=y[j]+a;
            k[j]=k[j]+b;
        }
       
        if(k[8]>y[8]) printf("Korea\n");
        else printf("Yonsei\n");
        
        for(int j=0;j<9;j++){
            y[j]=0;
            k[j]=0;
        }
    }
}
*/

/*
//meats on the crill
#include<stdio.h>

char map[13][13];

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        
        int a,b;
        scanf("%d %d",&a,&b);
        
        for(int j=0;j<a;j++){
            for(int k=0;k<b;k++){
                
                scanf(" %1c",&map[j][k]);
                
            }
           
        }

        for(int j=a-1;j>=0;j--){
            for(int k=0;k<b;k++){
                
                printf("%c",map[j][k]);
            }
            printf("\n");
        }
    }
}
*/


#include<stdio.h>
#include<algorithm>
using namespace std;

int dp[105][105];
int check[105][105];

int main(){
    
    int t;
    scanf("%d",&t);
    
    while(t--){
        
        
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=987654321;
            }
        }
        
        int u,v,x,d;
        for(int i=0;i<k;i++){
            
            
            scanf("%d %d %d %d",&u,&v,&x,&d);
            
            
            dp[u][v]=min(dp[u][v],d);
            check[u][v]=x;
            
            int mini=dp[u][v];
            int checking=0;
            
            for(int j=u+1;j<v;j++){
                if(mini>dp[u][j]+dp[j][v]){
                    
                    mini=dp[u][j]+dp[j][v];
                    checking=check[u][j]+check[j][v];
    
                }
            }
            
            dp[u][v]=min(mini,dp[u][v]);
            
            if(dp[u][v]==mini){
                check[u][v]=checking;
            }
        }
        
        
        if(dp[1][n]!=987654321&&check[1][n]<=100) printf("%d\n",dp[1][n]);
        else printf("Poor KCM\n");
    }
}






























