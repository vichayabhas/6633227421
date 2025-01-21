#include <iostream>
#include <set>
using namespace std;
int main(){
    int sum,e,out,sis,op,th,et,eo;
    set<int> s;
    cin>>sum;
    out=0;
    while(cin>>e){
        s.insert(e);
        

    }
    sis=s.size();
    auto p=s.begin();
    while(sis){
        th=*p;
        op=sum-*p;
        s.erase(th);
        if(s.erase(op)){
            sis--;
            out++;
        } 
        
        p++;
        sis--;
        //cout<<et<<" "<<eo<<endl;


    }
    cout<<out;
}