//
//  main.cpp
//  Subsequence Equality
//
//  Created by Abhishek Kumar Shakya on 17/09/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        char s[100];
        cin>>s;
        int counter=0;
        int len = strlen(s);
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(s[i]==s[j]){
                    counter ++;
                    break;
                }
            }
        }
    
    if(counter == 0)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
    }
    return 0;
}
