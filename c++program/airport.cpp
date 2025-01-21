#include <iostream>
#include <map>
#include <set>
using namespace std;
map<int,set<int>> out;
typedef map<int,set<pair<int,int>>> msp;
msp ms;
void rec(int cur,int sum,int &tar,set<int> &s){
    if(cur==tar){
        out[tar].insert(sum);
        return;
    }
    if(ms[cur].empty()){
        //out[tar].insert(-1);
        //return;
    } 
    for(auto w:ms[cur]){
        if(s.erase(w.second)){
            rec(w.second,sum+w.first,tar,s);
        }
    }


}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    set<int> s;
    int n,m,t,a,b,ty;
    cin>>n>>m;
    int co[n],ci[n];
    t=0;
    while(t<n) cin>>ci[t++];
    t=0;
    while(t<n) cin>>co[t++];
    t=0;
    while(t<m){
        cin>>a>>b;
        (ms[a]).insert(make_pair((co[a]+ci[b]),b));
        t++;
        //
    }
    t=1;
    while(t<n){
        ty=0;
        while(ty<n){
            s.insert(ty);
            ty++;
        }
        rec(0,0,t,s);
        t++;
        
    }
    t=1;
    cout<<0<<" ";
    while(t<n){
        int kl=*(out[t].begin());
        if(kl==0) kl=-1;
        cout<<kl<<" ";
        t++;

    }
    

    
}