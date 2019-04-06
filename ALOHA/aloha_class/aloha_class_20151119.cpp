//
//  aloha_class_20151119.cpp
//  aloha_class
//
//  Created by KimDabin on 2015. 11. 19..
//  Copyright © 2015년 KimDabin. All rights reserved.
//
/*
#include <iostream>//1181 단어정렬
#include <string>
#include <algorithm>
using namespace std;

bool func(string a, string b) // bool함수==true,false를 나누는 함수
{
    if (a.length() == b.length())
    {
        return a < b; // 사전 순 비교
    }
    return a.length() < b.length(); // 길이 순 비교
}
int main()
{
    string str[20000];
    int a;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> str[i];
    }
    sort(str, str + a,func); // func이 기준
    for (int i = 0;i < a;i++){
        
        if(str[i]!=str[i+1]) // 예외 처리(같을 때)
            cout << str[i] << endl;
    }
    return 0;
}
*/
/*
#include<iostream> //1543 문서 검색
#include<string>
#include<algorithm>
using namespace std;

int main(){
    
    string s;
    getline(cin,s);
    
    string s_ans;
    getline(cin,s_ans);
    
    int cnt=0;
    
    int index_s=s.find(s_ans);
    
    while(index_s>=0){
        
        cnt++;
        index_s=s.find(s_ans,index_s+s_ans.length());
    }
    
    printf("%d\n",cnt);
}
*/
#include<stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    int a,b,c;
    
    scanf("%d:%d UTC%d",&a,&b,&c);
}


