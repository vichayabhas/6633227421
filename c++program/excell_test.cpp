#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;
typedef string data;
vector<vector<data>> i;
vector<vector<pair<data,int>>> ip;
vector<set<pair<data,int>>> vsp;
int r,c;


int main(){
    r=5;    //อย่าลืมแก้
    c=8;
    int h,k;
    
    h=0;
    i.resize(r);
    ip.resize(r);
    vsp.resize(r);
    while(h<r){
        i[h].resize(c);
        ip[h].resize(c);
        k=0;
        while(k<c){
            data w;

            cin>>w;
            i[h][k]=w;
            ip[h][k]=make_pair(w,k);
            vsp[h].insert(make_pair(w,k));
            k++;
        }
        h++;
    }
    h=0;
    

    
    while(h<r){
       
        k=0;
        while(k<c){
            cout<<(ip[h][k]).first<<" "<<(ip[h][k]).second+1;
            
            cout<<" ";
            k++;
        }
        h++;
        cout<<endl;
    }
    

    
}
