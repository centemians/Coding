//
//  main.cpp
//  Jump Out
//
//  Created by Abhishek Kumar Shakya on 17/06/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,value,ans;
    cin>>n;
    //vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>value;
        //a.push_back(value+i+1);
        if((value+i+1)>n){
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
