#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n,i,j,counter=0;
    set<int> result;
    cin>>n;
    int *array = new int[n];
    for(i=0;i<n;i++){
        cin>>array[i];
        result.insert(array[i]);
    }
    
    //set<int> result(array+0,array+n);
    long t=result.size();   //number of unique elements in array
    for(i=0;i<n-1;i++){
        for(j=n;j>=i+1;j--){
            set<int> result1(array+i,array+j);
            long t1=result1.size();
            if(t1==t)
                counter ++;
            else
                break;
        }
    }
    cout<<counter;
    cout<<"\n";
    return 0;
}
