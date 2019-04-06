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
