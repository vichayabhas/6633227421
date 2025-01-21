#include <iostream>
#include <vector>
#include <map>
using namespace std;
int k;
int a;
//vector<int> v;
map<int,int> mre,mto;
long long rec(int &i, int rem, int tot, vector<int> &v,int ro){
    
    auto w=v.begin();
    w=w+i;
    if (   (   (a-rem-*w )<k  ) || ( w==v.end() )   ) {
        //cout<<<<"\n";
        return tot;
    }
    /*if(mre[ro]){
        return rec(i,mre[ro]+rem,mto[ro]+tot,v,ro+1);

    }*/
    tot=tot+*w;
    /*mto[ro]=tot;
    mre[ro]=rem;*/
    
   
    rem=rem+k+*w;
    i=i+1;
    return rec(i,rem,tot,v,ro+1);

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> v;
  
    int n,m,t,e,b,i;
    cin>>n>>m>>k;
    t=0;
    while(t<n){
        cin>>e;
        v.push_back(e);
        t=t+1;

    }
    t=0;
     int rem;
     int tot;
     
     auto w=v.begin();
    
    while(t<m){
        cin>>i>>a;

        cout<<rec(i,0,0,v,1)<<"\n";
        //tot=0;
        
        /*while(true){
        w=v.begin();
          w=w+i;
          if (   (  ( (rem-*w) )<k  ) || ( w==v.end() )   ) {
          cout<<tot<<"\n";
          break;
          }
        tot=tot+*w;
   
        rem=rem-k-*w;
        i=i+1;
        //rec(i,rem,tot,v);
        }*/

        t=t+1;
    }
    

}