#include <iostream>
#include <vector>
#include <set>
#include <map>


using namespace std;
bool mode,dhave;
int start;

map<int,set<int>> m;
int tar;
void rec(int add,vector<int> v){
    v.push_back(add);
    if(add==tar){
        if(mode){
            cout<<start;
            for(auto k:v) cout<<" -> "<<k;
            cout<<endl;
        }
        dhave=false;
        return;
    }
    if(add>tar) return;
    auto w=m[add].begin();
    while(w!=m[add].end()){
        rec(*w,v);
        w++;
    }
    
}
int main(){
    mode =true;
    vector<int> v;
    int add,n,t,a,b;
    cin>>n>>add>>tar;
    t=0;
    start =add;
    dhave=true;
    while(t<n){
        cin>>a>>b;
        m[a].insert(b);
        t++;

    }
    auto w=m[add].begin();
    while(w!=m[add].end()){
        rec(*w,v);
        w++;
    }
    if(dhave) cout<<"no";
    else if(mode==false) cout<<"yes";


}