#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
//int i[200000][200000];
//long long o[200000][200000]{{200000000}};
int h,k,op;

typedef vector<vector<int>> vvi;
typedef set<pair<int,pair<int,int>>> spp;


void rec(int x,int y,vvi &i, vvi &o,vector<vector<bool>> &ch,int rt){
    bool ub,db,lb,rb;
    //if(op==0) return;
    ub=db=lb=rb=false;
    int ui,di,li,ri,min;
    min=200000001;
    spp s;
    op--;
   // ch[x][y]=true;
    
    
  
    if((x>0)&&(o[x-1][y]>o[x][y]+i[x-1][y])){
      o[x-1][y]=o[x][y]+i[x-1][y];
      
        if(!ch[x-1][y]){
            
        ui=o[x][y]+i[x-1][y];
        /*if(ui==2000000001){
            rec(x-1,y,i,o);
        }else{
           
        }*/
        s.insert(make_pair(ui,make_pair(0,-1)));
        ub=true;
        //ch[x-1][y]=true;
        }
        
  
        
    }
    //min=ui;
    if((x<h-1)&&(o[x+1][y]>o[x][y]+i[x+1][y])){
      
      o[x+1][y]=o[x][y]+i[x+1][y];
      
        if(!ch[x+1][y]){
            
        di=o[x][y]+i[x+1][y];
        /*if(di==2000000001){
            rec(x+1,y,i,o);
        }else{
        
        }*/
        db=true;
        //ch[x+1][y]=true;
        s.insert(make_pair(di,make_pair(0,1)));
        }




        
        

        
    }
    
    if((y>0)&&(o[x][y-1]>o[x][y]+i[x][y-1])){
      
       o[x][y-1]=o[x][y]+i[x][y-1];
      
        if(!ch[x][y-1]){

        ri=o[x][y]+i[x][y-1];
        //ch[x][y-1]=true;
  
        s.insert(make_pair(ri,make_pair(-1,0)));
rb=true;
 

        }



       


        

    }

    if((y<k-1)&&(o[x][y+1]>o[x][y]+i[x][y+1])){
       o[x][y+1]=o[x][y]+i[x][y+1];
      
      
        if(!ch[x+1][y]){
           
            //ch[x+1][y]=true;
        li=o[x][y]+i[x][y+1];
        s.insert(make_pair(li,make_pair(1,0)));
        lb=true;
        }
        






        /*if(li==2000000001){
            rec(x,y-1,i,o);
        }else{
        

        }*/

 



        
    }
  
    for(auto qw:s){
        //cout<<x+qw.second.second<<" "<<y+qw.second.first<<endl;
        rec(x+qw.second.second,y+qw.second.first,i,o,ch,rt-1);
    }

}
int main(){
  
    cin>>k>>h;
    int t,j;
    int r,c;
    
 
    r=h;
    c=k;
    //b=h;
    //d=k;
    
    vector<vector<int>> o(r+1, vector<int>(c+1, 2000000001));
    vector<vector<int>> i(r+1, vector<int>(c+1, 2000000001));
    vector<vector<bool>> ch(r+1, vector<bool>(c+1, false));
    j=0;
    while(j<k){
        t=0;
        while(t<h){
            cin>>i[t][j];
            t++;
        }
        j++;
    }
    o[0][0]=0;
    op=9;
    rec(0,0,i,o,ch,3);
    j=0;
    while(j<k){
        t=0;
        while(t<h){
            cout<<o[t][j]<<" ";
            t++;
        }
        cout<<endl;
        j++;
    }
}