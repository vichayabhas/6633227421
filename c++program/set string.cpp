#include <iostream>
#include <set>
using namespace std;
int main(){
    set<string> s;
    s.insert("");
    s.insert("5");
    int a;
    a=0;
    auto w=s.begin();
    while(w!=s.end()){
        cout<<a<<" "<<*w<<endl;
        a++;
        w++;

    }
}