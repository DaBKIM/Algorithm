// boj_11719
// print string
// a harder problem than boj_11718

#include<string>
#include<iostream>
using namespace std;

int main(){
    
    while(1){
    	
    	string str1;
    	string str2;
    	getline(cin,str1);
    	
        // check blank line
        // If next line is also blank break;
        // else print blank and continue;
    	if(str1 == "\0"){
    		getline(cin,str2);
    		if(str2 == "\0") break;
    		else{
    			cout << str1 <<endl;
    			cout << str2 <<endl;
    			continue;
    		}
    	}
    	
        cout << str1 <<endl;
    }

    return 0;
}