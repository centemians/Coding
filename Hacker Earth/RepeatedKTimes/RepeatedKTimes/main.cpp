#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int n,k,mycount,num;
    cin>>n;
    vector <int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set <int> s(a.begin(),a.end());
    cin>>k;
    sort(a.begin(),a.begin()+n);
    for (set<int>::iterator it=s.begin(); it!=s.end(); ++it){
        mycount=0;
        mycount = count(a.begin(),a.end(),*it);
        if(mycount==k){
            num=*it;
            break;
        }
    }
    cout<<num<<endl;
    return 0;
    
}
