#include <iostream>
#include <vector>
#include <set>
using namespace std;
string mo[3]{"A","C","B"};
int r,c;
set<vector<int>> s;
vector<vector<int>> i;
void rec(int x,int y,vector<vector<bool>> &pass,vector<int> &ans,int add){
    if(add!=0) ans.push_back(add);
    
    if((x==c-1)&&(y==r-1)){
        //cout<<"O";
        string out;
        
        for(auto g:ans){
            //out=out+mo[g-1];
            //cout<<g<<"K"<<endl;
        }
        s.insert(ans);
        if(add!=0) ans.pop_back();
        return;
    }
    
    pass[y][x]=true;
    if((i[y][x+1]==0)&&(pass[y][x+1]==false)&&(x<c-1)){
        rec(x+1,y,pass,ans,1);
    }
    if((i[y-1][x]==0)&&(pass[y-1][x]==false)&&(y>0)){
        rec(x,y-1,pass,ans,2);
    }
    if((i[y+1][x]==0)&&(pass[y+1][x]==false)&&(y<r-1)){
        rec(x,y+1,pass,ans,3);
    }
    pass[y][x]=false;
    if(add!=0) ans.pop_back();


}


int main(){
    cin>>r>>c;
    int t,w;
    w=0;
    vector<vector<bool>> pass;
    i.resize(r);
    pass.resize(r+1);
    while(w<r){
        t=0;
        i[w].resize(c);
        pass[w].resize(c+1);
        while(t<c){
            cin>>i[w][t];
            t++;
        }
        w++;
    }
    vector<int> ans;
    rec(0,0,pass,ans,0);
    //rec(0,0,pass,ans,3);
    for(auto d:s){
        for(auto j:d) cout<<mo[j-1];
        cout<<endl;
    }
    cout<<"DONE";



    /*w=0;
    //i.resize(r);
    while(w<r){
        t=0;
        //i[w].resize(c);
        while(t<c){
            cout<<i[w][t]<<" ";
            t++;
        }
        cout<<endl;
        w++;
    }*/


}