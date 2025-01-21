#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    int n,w,y,t,a,k,out,rem;
    cin>>n>>w>>y;
    t=0;
    k=2*w;
    rem=0;
    out=0;
    while(t<n){
        cin>>a;
        s.insert(a);
        t++;
    }
    for(auto u:s){
        if(rem<u){
            out++;
            rem=u+k;
        }
    }
    cout<<out;
}