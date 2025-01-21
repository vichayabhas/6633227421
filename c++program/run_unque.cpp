#include <iostream>
#include <set>
#include <string>
using namespace std;
typedef int data;
typedef int data2;
string con(char in){
    return string(1,in);
}
int con(int in){
    return in;
}
int main(){
    set<data2> s;
    set<data> ex;
    int t,n,except,extra;
    data in,da;
    data2 ext;
    cin>>in;
    cin>>n;
    t=0;
    cin>>except;
    while(t<except){
        cin>>da;
        ex.insert(da);
        t++;
    }
    t=0;
    cin>>extra;
    while(t<extra){
        cin>>ext;
        s.insert(ext);
        t++;
    }
    n=n-extra;
    t=0;
    while(t!=n){
        if(ex.erase(in+t)) n++; else s.insert(con((data)(in+t)));
        t++;
    } 
    while(!(s.empty())){
        for(auto it:s) cout<<it<<" ";
        cout<<endl;
        data2 er;
        cin>>er;
        if(s.erase(er)) cout<<"YES"<<endl; else cout<<"NO"<<endl;
    } 
}