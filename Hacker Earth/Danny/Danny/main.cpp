//
//  main.cpp
//  Danny
//
//  Created by Abhishek Kumar Shakya on 02/06/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,k,num;
    cin>>n>>k;
    vector <int> a(n),b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            num = abs(a[i]-a[j]);
            b.push_back(num);
        }
    }
    long long len=b.size();
    sort(b.begin(),b.begin()+len);
    //for(int i=0;i<b.size();i++)
      //  cout<<b[i]<<" ";
    cout<<b[k-1]<<endl;
    //cout<<endl;
    return 0;

}
   
