#include <iostream>
#include <vector>
#include <map>
using namespace std;
int k,n;
map<int,int> out;
int fibo(int curn,vector<int> &c,vector<int> &a){
    
    if(curn<k){
        return a[curn];
    }
    int t,sum,e;
    t=0;
    sum=0;
    //cout<<"G"<<t<<" "<<k<<endl;
    while(t<k){
        if(out[curn-1-t]==0){
            e=fibo(curn-1-t,c,a);
            //cout<<"R"<<endl;
        out[curn-1-t]=e;
        }else{
            e=out[curn-1-t];
        }
        sum=(sum+(e*(c[t])))%32717;
        t++;
        //cout<<"P"<<endl;

    }
    return sum;

}
int main(){
    vector<int> a,c;
    cin>>k>>n;
    int t=0;
    int e;
    while(t<k){
        cin>>e;
        c.push_back(e);
        t++;


    }
    t=0;
    while(t<k){
        cin>>e;
        a.push_back(e);
        t++;


    }
    cout<<fibo(n,c,a);
}