#include <iostream>
#include <set>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
    int t;
    int n,m,i,j;
    cin>>t;
    while(t){
        cin>>n>>m;
        long long minsal[n+1];
        long long comp[m+1][2];
        for(i=1;i<n+1;i++){
            cin>>minsal[i];
        }
        for(i=1;i<m+1;i++){
            cin>>comp[i][0]>>comp[i][1];
        }
        
        int desc[n+1][m+1];
        string s,s1;
        for(i=1;i<n+1;i++){
            cin>>s;
            for(j=1;j<m+1;j++){
                desc[i][j]=(s[j-1]-'0');
            }
        }
        
         int job,counter,cand=0;
         long long totsal=0;
         set<int>myset;
         for(i=1;i<n+1;i++){
         counter = 0;
         for(j=1;j<m+1;j++){
         if(desc[i][j]==1){
         if(comp[j][0]>=minsal[i]&&comp[j][1]>0){
         minsal[i]=comp[j][0];
         job=j;
         counter = 1;
         }
         }
         }
         if(counter==1){
         cand ++;
         totsal += minsal[i];
         comp[job][1] -=1 ;
         myset.insert(job);
         }
         }
         cout<<cand<<" "<<totsal<<" "<<m-myset.size()<<endl;
        t --;
    }
    return 0;
}
