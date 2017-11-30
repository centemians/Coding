//
//  main.cpp
//  practice
//
//  Created by Abhishek Kumar Shakya on 05/08/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main ()
{
    char szInput[256];
    string s;
    cout<<"Enter a sentence: \n";
    cin>>szInput;
    cout<<"Enter your name"<<endl;
    cin>>s;
    cout<<"The sentence entered is "<<strlen(szInput)<<" characters long.";
    cout<<s.length();
    return 0;
}
