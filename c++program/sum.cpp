#include <iostream>
#include <vector>
#include <set>
using namespace std;
int com;
set<int> s;
bool ch(vector<int> &v,vector<int>::iterator i ,int va){
    bool u (va==com) ;
    if (i!=v.end()){
    bool c1 =ch(v,i+1,va);
    bool c2 =ch(v,i+1,va+*i);
    return c1||c2||u;
    }
    s.insert(va); 
    return u;
}
int main(){
    int in;
    vector<int> v;
    cin>>in;
    while (in!=0)
    {
        v.push_back(in);
        cin>>in;
    }
    cin>>com;
    auto i=v.begin();
    cout<<ch(v,i,0)<<endl;
    for(auto y:s){
        cout<<y<<" ";
    }
}
