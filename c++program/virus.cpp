#include <iostream>
#include <cmath>
using namespace std;

bool check(vector<int> v,int n){
    if(n=1){
        if((v[0]==0)&&(v[1]==1)) return true; else return false;
    }
    




   
}
int main(){
    int n,k,h,t,g;
    cin>>n>>k;
    h=pow(2,k);
    t=0;
    g=0;
    bool pass,s;
    int w[h];
    while(t<n){
        g=0;
        pass =false;
        while(g<h) cin>>w[g++];
        g=0;
        s=true;
        while(true){
            if(w[h-2]==1) break;
            if(w[h-1]==0) break;
            while(g<h){
                if((w[g]+w[g+1]!=1)){
                    
                    s=false;
                    break;
                }
                g=g+2;
            }
            if(s) pass=true;
            break; 
        }
        if(pass) cout<<"yes"<<endl; else cout<<"no"<<endl;
        t=t+1;
    }

}