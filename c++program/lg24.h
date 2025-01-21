#ifndef __LG24_H_
#define __LG24_H_

#include <algorithm>
#include <iostream>
using namespace std;





/*int lg24(std::string a,std::string b,std::string o){
    if(a=="test"){
        if(b=="cin"){
            std::cin>>o;
        }
        if(b=="cout"){
            std::cout<<o;
        }

    }
}*/

template <typename T>
class MyIStream {
    operator>>(T& n) {
        std::cin >> n;
    }
};

MyIStream<int> lg24cin();


#endif
