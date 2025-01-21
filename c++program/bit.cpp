#include <iostream>
#include <string>
using namespace std;
void rec(string s,int &tar,int numr,bool pass,int nump ,int &numtar ){
    if(tar<=numr){
        if(pass) cout<<s<<endl;
        return;
    }
    rec(s+"0",tar,++numr,pass,0,numtar);
    if(++nump>=numtar) pass=true;
    rec(s+"1",tar,numr,pass,nump,numtar);
}
int main(){
   int n,tar; 
   cin>>tar>>n;
   rec("",tar,0,false,0,n);
}