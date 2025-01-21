#include <iostream>
#include <vector>
using namespace std;
int w[500][500];
int h,k,tar,out;
int abb(int i){
    if(i<0){
        return -i;
    }else return i;
}
void infu(int x,int y,int r,int s){
    
    if(r==tar+1) return;
    if(w[x][y]==0) out++;
    w[x][y]=1;
    if((w[x-1][y]==2)||(w[x][y-1]==2)||(w[x+1][y]==2)||(w[x][y+1]==2)) s=2;
    if(s==0){
          
    if((x>0)&&(w[x-1][y]!=2)) infu(x-1,y,r+1,-1);
    if((y>0)&&(w[x][y-1]!=2)) infu(x,y-1,r+1,-1);
    if((x<h-1)&&(w[x+1][y]!=2)) infu(x+1,y,r+1,-1);
    if((y<k-1)&&(w[x][y+1]!=2)) infu(x,y+1,r+1,-1);
    s--;
    return;
    }
    s--;
    

    
    if((x>0)&&(w[x-1][y]==0)) infu(x-1,y,r+1,-1);
    if((y>0)&&(w[x][y-1]==0)) infu(x,y-1,r+1,-1);
    if((x<h-1)&&(w[x+1][y]==0)) infu(x+1,y,r+1,-1);
    if((y<k-1)&&(w[x][y+1]==0)) infu(x,y+1,r+1,-1);
}
/*void infd(int x,int y,int r){
    
    if(r==tar+1) return;
    if(w[x][y]==0) out++;
    w[x][y]=1;
    
    if((x>0)&&(w[x-1][y]!=2)) infu(x-1,y,r+1);
    if((y>0)&&(w[x][y-1]!=2)) infu(x,y-1,r+1);
    if((x<h-1)&&(w[x+1][y]!=2)) infu(x+1,y,r+1);
    if((y<k-1)&&(w[x][y+1]!=2)) infu(x,y+1,r+1);
}
void infl(int x,int y,int r){
    
    if(r==tar+1) return;
    if(w[x][y]==0) out++;
    w[x][y]=1;
    
    //if((x>0)&&(w[x-1][y]!=2)) inf(x-1,y,r+1);
    if((y>0)&&(w[x][y-1]!=2)) infl(x,y-1,r+1);
    if((x<h-1)&&(w[x+1][y]!=2)) infl(x+1,y,r+1);
    if((y<k-1)&&(w[x][y+1]!=2)) infl(x,y+1,r+1);
}
void infr(int x,int y,int r){
    
    if(r==tar+1) return;
    if(w[x][y]==0) out++;
    w[x][y]=1;
    
    if((x>0)&&(w[x-1][y]!=2)) infr(x-1,y,r+1);
    if((y>0)&&(w[x][y-1]!=2)) infr(x,y-1,r+1);
    //if((x<h-1)&&(w[x+1][y]!=2)) inf(x+1,y,r+1);
    if((y<k-1)&&(w[x][y+1]!=2)) infr(x,y+1,r+1);
}*/






int main(){
    
    vector<pair<int,int>> v;
    pair<int,int> p;
    out=0;
    int i,j,e;
    cin>>k>>h>>tar;
    j=0;
    while(j<k){
        i=0;
        while(i<h){
            cin>>e;
            w[i][j]=e;
            if(e==1){
                p.first=i;
                p.second=j;
                v.push_back(p);
                out++;
                

            }
            i++;
        }
        j++;
    }
    for(auto d:v){
        //cout<<d.first<<" "<<d.second<<endl;
        infu(d.first,d.second,0,-1);
        //infd(d.first,d.second,0);
        //infl(d.first,d.second,0);
        //infr(d.first,d.second,0);

    }
    cout<<out<<endl;
    j=0;



    /*while(j<k){
        i=0;
        while(i<h){
            
            cout<<w[i][j]<<" ";
            
            i++;
        }
        cout<<endl;
        j++;
    }*/


}