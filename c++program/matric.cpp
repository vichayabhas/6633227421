#include <iostream>
#include <cmath>
using namespace std;
int ans[256][256];
void rec(int a,int b ,int x, int y){
    if(a==0){
        ans[x][y]=b;
        return;

    }
    int m;
    m=pow(2,(a-1));
    rec(a-1,b,x,y);
    rec(a-1,b-1,x+m,y);
    rec(a-1,b+1,x,y+m);
    rec(a-1,b,x+m,y+m);
}
int main(){
    int a,b,i,k,m,j;
    cin>>a>>b;
    rec(a,b,0,0);
    i=0;
    m=pow(2,a);
    while(i<m){
        j=0;
        while(j<m){
            cout<<ans[j++][i]<<" ";
        }
        i++;
        cout<<endl;
    }
}