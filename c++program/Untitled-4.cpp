#include <iostream>
#include <vector>
using namespace std;
int k;
vector<int> v;
void rec(int i,int rem,int tot){
    auto w=v.begin();
    w=w+i;
    if(((rem-k-*w)<=0)||(w==v.end())){
        cout<<tot<<"\n";
        return;
    }
    tot=tot+*w;
    rem=rem-k-*w;
    rec(i+1,rem,tot);

}
int main(){
    int n,m,t,e,a,b;
    cin>>n>>m;
    t=0;
    while(t<n){
        cin>>e;
        v.push_back(e);
        t=t+1;

    }
    t=0;
    while(t<m){
        cin>>a>>b;
        rec(a,b,0);
        t=t+1;
    }

}