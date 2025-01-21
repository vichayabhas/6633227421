#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;
void rec(set<int> rem ,map<int,set<int>> &forw, int add,vector<int> have){
    auto e=forw[add].begin();
    while(e!=forw[add].end()){
        rem.insert(*e);
        e++;
    }
    have.push_back(add);
    rem.erase(add);
    if(rem.empty()){
        for(auto q:have) cout<<q<<" ";
        cout<<"\n";
        return;
    }
    auto g=rem.begin();
    while(g!=rem.end()){
        rec(rem,forw,(*g),have);
        g++;
    }
}
set<int> runnum(int tar){
    int t;
    set<int> s;
    t=0;
    while(t<tar) s.insert(t++);
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tar,n,t;
    map<int,set<int>> forw;
    int a,b;
    vector<int> have;
    set<int> rem;
    t=0;
    cin>>tar>>n;
    rem=runnum(tar);
    while(t<n){
        cin>>a>>b;
        forw[a].insert(b);
        rem.erase(b);
        t=t+1;
    }
    auto g=rem.begin();
    while(g!=rem.end()){
        rec(rem,forw,(*g),have);
        g++;
    }
}