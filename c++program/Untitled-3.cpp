#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string,string> m;
    int n,h,l,t,e;
    string f,s;
    bool k;
    cin>>n>>e;
    t=0;
    while(t<n){
        cin>>f>>s;
        m[s]=f;
        t=t+1;
    }
    t=0;
    while(t<e){
        cin>>f>>s;
        k=true;
        while(true){
            if(f==s){
                //cout<<"P"<<endl;
                break;
            } 
            if(m[s]==m[f]) break;
            if(m[m[s]]!=m[m[f]]) break;
            if(m[s]==f) break;
            if(m[f]==s) break;
            if(m[f]=="") break;
            if(m[m[f]]=="") break;
            if(m[s]=="") break;
            if(m[m[s]]=="") break;
            k=false;
            cout<<"YES"<<endl;
            break;
        }
        if(k){
            cout<<"NO"<<endl;



        }
        t=t+1;

    }
}