#include <iostream>
#include <set>
using namespace std;
set<int> s;
int tar;
int out;
void rec(int add,int sum){
    if(sum+add>tar) return;
    if(sum+add==tar){
        out++;
        return;
    }
    sum=sum+add;
    for(auto h:s){
        rec(h,sum);
    }
}
int main(){
    int n,t,k,h;
    cin>>tar>>n;
    t=0;
    while(t<n){
        cin>>k;
        s.insert(k);
        t++;
    }
    out=0;
    for(auto h:s){
        rec(h,0);
    }
    cout<<out;
}