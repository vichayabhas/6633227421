#include <iostream>
using namespace std;
int main(){
    int a,b,c,t,n,u,p,ahb,ahe;
    cin>>n;
    int w[n];
    t=0;
    a=0;
    b=0;
    c=0;
    p=0;
    while(t<n){
        cin>>u;
        w[t++]=u;
        if(u==1) a++;
        if(u==2) b++;
        if(u==3) c++;
    }
    int ah[b+c];
    int aa[a];

    t=0;
    while(t<a){
        aa[t]=w[t];
t++;
    }
    while(t<n){
        ah[t-(a)]=w[t];
t++;
    }
    ahb=0;
    ahe=b+c-1;
    t=0;
    while(t<a){
        if(aa[t]==2){
            while(ah[ahb]!=1) ahb++;
            ah[ahb]=2;
            aa[t]=1;
            p++;
        }if(aa[t]==3){
            while(ah[ahe]!=1) ahe--;
            ah[ahe]=3;
            aa[t]=1;
            p++;
        }
        t=t+1;
    }
    t=0;
    while(t<b){
        if(ah[t++]==3) p++;

    }
    cout<<p;
    t=0;
}

