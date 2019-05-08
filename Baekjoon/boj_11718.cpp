
// boj_11718
// print string

#include<string>
#include<iostream>
using namespace std;

int main(){
    
    while(1){
    	
    	string str;
    	getline(cin,str);
    	if(str == "\0") break;
    	
        cout << str << endl;
    }

    return 0;
}