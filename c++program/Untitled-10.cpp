#include <iostream>
#include <vector>
#include <set>
using namespace std;
string mo[3]{"A","C","B"};
int r,c;


set<vector<int>> s;
vector<vector<int>> i;



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
            if
            t++;
        }
        w++;
    }
}