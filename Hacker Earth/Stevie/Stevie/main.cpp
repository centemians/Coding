//
//  main.cpp
//  Stevie
//
//  Created by Abhishek Kumar Shakya on 02/06/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>a(n),b(n),ans(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    for (int i=0; i<n; i++) {
        cin>>b[i];
    }
    for (int i=0; i<n; i++) {
        vector <int> c;
        int max=b[i];
        for (int j=0; j<n; j++) {
            if(i==j||a[i]==a[j]){
                //c.push_back(j);
                if(b[j]>max)
                    max=b[j];

            }
        }
       /*int max=b[i];
        for(int k=0;k<c.size();k++){
            if(b[c[k]]>max)
                max=b[c[k]];
        }*/
        ans[i]=max;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
    
    
}
