#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
typedef map<int,set<pair<int,int>>> msp;
msp m;
int tar;
set<int> out;

void rec(pair<int,int> &p,int sum,set<int> &pass,int pre){

    if(p.second==tar){
        //cout<<
        out.insert(sum+p.first);
        return;
    }
    pass.insert(pre);

    for(auto g:(m[p.second])){
        if(pass.erase(p.second)) {
            pass.insert(p.second);
        }else{
            //cout<<"U";
            rec(g,sum+p.first,pass,p.second);
            
        }
    }
    pass.erase(pre);


}
int main(){
    cin>>tar;
    int e,i,j;
    i=0;
    while(i<tar){
        j=0;
        while(j<tar){
            cin>>e;
            if(e>0){
                m[i+1].insert(make_pair(j+1,e));
            }
            j++;
        }
        i++;
    }
    //cout<<"O";
    pair<int,int> w;
    w.first=0;
    w.second=1;
    set<int> s;
    
    rec(w,0,s,-1);

    cout<<(*(out.begin()));
    //cout<<"P";
    //for(auto q:out) cout<<q<<" ";
    
}