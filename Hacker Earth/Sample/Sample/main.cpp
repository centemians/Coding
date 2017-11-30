//
//  main.cpp
//  RepeatedKTimes
//
//  Created by Abhishek Kumar Shakya on 07/06/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int n,k,mycount,num=-1;
    cin>>n;
    vector <int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set <int> s(a.begin(),a.end());
    sort(s.begin(),s.end());
    cin>>k;
    sort(a.begin(),a.begin()+n);
    set<int>::iterator it=s.begin();
    //for (set<int>::iterator it=s.begin(); it!=s.end(); ++it){
    while(it!=s.end()){
        mycount=0;
        mycount = count(a.begin(),a.end(),*it);
        if(mycount==k){
            num=*it;
            break;
        }
        ++it;
    }
    cout<<num<<endl;
    return 0;
    
}




