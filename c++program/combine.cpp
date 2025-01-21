#include <iostream>
#include <vector>
using namespace std;
int main(){
    string a,b;
    vector<string> v;
    while(cin>>a){
        if(a=="*") break;
        cin>>b;
        
    
        v.push_back(a+" "+b);
    }
    for(auto i:v){
        cout<<i<<endl;
    }
}