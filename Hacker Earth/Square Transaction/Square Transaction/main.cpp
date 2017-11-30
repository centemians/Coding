//
//  main.cpp
//  Square Transaction
//
//  Created by Abhishek Kumar Shakya on 17/07/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,num,q,counter;
    cin>>t;
    vector <int> a(t,0);
    for(int i=0;i<t;i++){
        cin>>num;
        if(i==0)
            a[i]=num;
        else
            a[i]=a[i-1]+num;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        counter=0;
        cin>>num;
        for(int j=0;j<t;j++){
            if(num<=a[j]){
                cout<<j+1<<endl;
                counter ++;
                break;
            }
        }
        if(counter==0)
        cout<<-1<<endl;
        
    }
    return 0;
}
