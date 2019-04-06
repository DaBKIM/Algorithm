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