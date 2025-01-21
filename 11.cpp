#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
long long out;
int tar;
//template <typename,vb>int;
//vector<vector<bool>> s;
void rec2(vector<bool> &fir,vector<bool> &cur, int r){
    if(r==tar){
        out++;
        return;
    }
    cur.push_back(false);
    rec2(fir,cur,r+1);
    if(r==0){
        if(!fir[0]){
            cur[0]=true;

           rec2(fir,cur,+r+1); 
        }  
    }else if((!fir[r])&&(!cur[r-1])){
        cur.pop_back();
        cur.push_back(true);
        rec2(fir,cur,+r+1);
    }
    cur.pop_back();


} 
void rec1(int r,vector<bool> &c){
    if(r==tar){
        vector<bool> v;
        //s.push_back(c);
        rec2(c,v,0);
        return;
    }
    c.push_back(false);
    rec1(r+1,(c));
        if(!c[r-1]){
            c.pop_back();
            c.push_back(true);
        rec1(r+1,c);
        }
        c.pop_back();
}
int main(){
    cin>>tar;
    out=0;
    vector<bool> va,vb;
    va.push_back(false);
    vb.push_back(true);
    rec1(1,va);
    rec1(1,vb);
    cout<<out;
}