#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
map<int,set<int>> m;
set<int> single,multi,era;
void rem(int sin){
    m[*(m[sin].begin())].erase(sin);
    era.insert(sin);
    m[sin].erase(m[sin].begin(),m[sin].end());
    if(m[*(m[sin].begin())].size()==1){
        rem(*(m[*(m[sin].begin())].begin()));
    }
  
}
int main(){
    int n,t,a,b;
    t=0;
    cin>>n;
    while(t<n){
        cin>>a>>b;
        m[a].insert(b);
        m[b].insert(a);
        t++;
        if(multi.erase(a)) multi.insert(a); else if(single.erase(a)) multi.insert(a); else single.insert(a);
        if(multi.erase(b)) multi.insert(b); else if(single.erase(b)) multi.insert(b); else single.insert(b);
        
        
    }
    //for(auto d:multi) cout<<d<<" ";
    //cout<<"O"<<endl;
    while(true){
    for(auto w:single){
            rem(w);
        }
        if(era.empty()) break;
        
        //cout<<endl;
        for(auto d:era){
            //single.erase(d);
            multi.erase(d);
        }
        era.erase(era.begin(),era.end());
    }




    cout<<multi.size()<<endl;
    for(auto d:multi) cout<<d<<" ";

}