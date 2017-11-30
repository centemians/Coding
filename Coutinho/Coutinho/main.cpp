//
//  main.cpp
//  Coutinho
//
//  Created by Abhishek Kumar Shakya on 03/06/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int g(int num){
    int ans;
    for (int i=2;i<=num; i++) {
        if(num%i==0){
            ans=i;
            break;
        }
    }
    return ans;
}

int f(int num){
    if(num==1)
        return 0;
    else{
        return (1+f(num/g(num)));
    }
}

int main() {
    int n,q,num;
    long long k=1;
    cin>>n>>q;
    vector <int> a(n),ans;
    long long *z=new long long(q);
    for(int i=0;i<n;i++){
        cin>>a[i];
        k*=a[i];
    }
    for(int i=1;i<=k;i++){
        if(k%i==0){
            ans.push_back(i);
        }
    }
    long long finans,temp=pow(10,9)+7;
    for(int i=0;i<q;i++){
        cin>>num;
        finans=0;
        for(int j=0;j<ans.size();j++){
            if(f(ans[j])==num)
                finans+=ans[j];
        }
        z[i]=finans%temp ;
    }
    for(int i=0;i<q;i++)
        //int temp=z[i] % (pow(10,9));
        cout<<z[i]<<endl;
    
    return 0;
}
