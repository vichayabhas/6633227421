#include <iostream>
#include <set>
#include <map>
#include <vector>

using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int n,t,y,h,k,d,p;
    map<int,int> w;
    set<int> s;
    //vector<int> v;
    pair<int,int> g;
    set<pair<int,int> >f;
    cin>>n;
    t=0;
    d=0;
    while(t<n){
        cin>>y;
        if(y==1){
            cin>>h>>k;
            w[h]=k+1;
            //s.insert(h);
            //s.insert(k+1);
            g.first=h;
            g.second=k+1;
            f.insert(g);
            //v.push_back


        }else{
            d=0;
            auto m=f.begin();
             
            while( m !=f.end()){
                if((m++)->second<(m--)->first){
                    
                    m++;
                    d++;
                }else{
                    
                    d=d+1;
                    //h=m->first;

                    while(true){
                        
                            if(p<m->second){
                               p=m->second;
                            //cout<<*m<<"C"<<w[*m]<<endl; 
                            }
                            
                        
                        
                        //m++;
                        if((p==m->second)&&((m++)->second<(m--)->first)) break;
                        m++;
                        if(m==f.end()) break;
                    }
                    if(m==f.end()) break;
                    //cout<<p<<"T"<<*m<<endl;
                    m++;
                }

            }
            cout<<d<<"\n";
        }
        t=t+1;


    }
}