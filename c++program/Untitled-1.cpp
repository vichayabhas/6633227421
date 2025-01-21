#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
void test( set<int> &pass, map<int,vector<int>> &reg, int add, int &tar ,int &run, int num ,int sum,vector<int> copy){
    if(sum==tar){
        pass.insert(num);
    }
    if((sum+add)>tar) return;
    reg[num]=copy;
    reg[num].push_back(add);
    if((sum+add)==tar){
        pass.insert(num);
        return;
    }

    int t;
    //add--;
    while((sum+add)<tar){
        t=run;
        run++;
        //add++;
        test(pass,reg,add,tar,run,t,sum+add,reg[num]);
        add++;
    }
}
int main(){
    set<int> pass;
    int k;
     map<int,vector<int>> reg;
    int add;
     int tar;
     int run;
      int num;
      int sum;
      vector<int> copy;
      int t;
    
    
    run=0;
    cin>>tar;
    t=1;
    add=1;
  
    sum=0;
    //add--;
    while((add)<tar){
        t=run;
        run++;
        //add++;
        test(pass,reg,add,tar,run,t,sum+add,reg[num]);
        add++;
    }
    k=pass.size();
    cout<<k<<endl;




}
