#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
bool mode,dhave;
int start,rem,k;
map<int,set<int>> m;
int tar;
void rec(int add,vector<int> v,int r,set<int> &s){
    //v.push_back(add);
    /*if(add==tar){
        if(mode){
            cout<<start;
            //for(auto k:v) cout<<" -> "<<k;
            cout<<endl;
        }
        dhave=false;
        return;
    }*/
    //if(add>tar) return;
    //r++;
    
    if((s.erase(add))==0) rem++;
    s.insert(add);
    if(r==k) return;
    
    auto w=m[add].begin();
    while(w!=m[add].end()){
        rec(*w,v,r+1,s);
        w++;
    }
}
int main(){
    mode =true;
    vector<int> v;
    int add,n,t,a,b,p,max;
    cin>>p>>n>>k;
    t=0;
    start =add;
    dhave=true;
    while(t<n){
        cin>>a>>b;
        m[b].insert(a);
        m[a].insert(b);
        t++;
    }
    t=0;
    max=0;
    while(t<p){
        rem=0;
        set<int> s;
        rec(t,v,0,s);
        if(rem>max) max=rem;
        t++;
    }
    /*if(dhave) cout<<"no";
    else if(mode==false) cout<<"yes";*/
    cout<<max;
}