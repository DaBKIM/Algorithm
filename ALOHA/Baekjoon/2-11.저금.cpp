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