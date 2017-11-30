#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            s.erase(i,2);
        }
    }
    if(!s.empty())
    cout<<s<<endl;
    else
        cout<<"Empty String";
    return 0;
}
