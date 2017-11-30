//
//  main.cpp
//  TheBreakupApp
//
//  Created by Abhishek Kumar Shakya on 31/05/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    //char s1[10];
    vector <int> date(32,0);
    string s;
    int n;
    cin>>n;
    while(n>0){
        getline(cin,s);
        string temp = "";
        if(s[0]=='G'){
            for(int i=3;i<s.length();i++){
                temp+=s[i];
                if(s[i] == ' ')
                {
                    if(temp[0]>47 && temp[0]<58){
                    int num = stoi(temp);
                    if(num>0 && num<32){
                        date[num]=date[num]+2;
                    }
                        
                    }
                    temp = "";
                }
                
            }
            if(temp[0]>47 && temp[0]<58){
                int num = stoi(temp);
                if(num>0 && num<32){
                    date[num]=date[num]+2;
                }
                
            }
            
        }
        if(s[0]=='M'){
            for(int i=3;i<s.length();i++){
                temp+=s[i];
                if(s[i] == ' ')
                {
                    if(temp[0]>47 && temp[0]<58){
                    int num = stoi(temp);
                    if(num>0 && num<32){
                        date[num]=date[num]+1;
                    }
                    }
                    temp = "";
                }
                
            }
            if(temp[0]>47 && temp[0]<58){
                int num = stoi(temp);
                if(num>0 && num<32){
                    date[num]=date[num]+1;
                }
            }

        }
        n--;
    }
    
        int max=date[1],ans=1;
        for(int i=1;i<32;i++){
            if(date[i]>max){
                max=date[i];
                ans=i;
            }
        }
        if(ans==19||ans==20)
            cout<<"Date"<<endl;
        else
            cout<<"No Date"<<endl;
    
    
    return 0;
    
}
