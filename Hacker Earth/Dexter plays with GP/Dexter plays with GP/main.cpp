//
//  main.cpp
//  Dexter plays with GP
//
//  Created by Abhishek Kumar Shakya on 17/06/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        long long r,S,p;
        cin>>r>>S>>p;
        vector <long long> seq(p);
        seq[0]=1;
        long long sum=1,ans=-1;
        if((sum%p)==S){
            ans=1;
        }
        else{
        for(long long i=2;i<p;i++){
            seq[i-1]=(seq[i-2]*r)%p;
            if(count(seq.begin(),seq.end(),seq[i-1])>1)
                break;
            sum+=seq[i-1];
            if((sum%p)==S){
                ans=i;
                break;
            }
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}
