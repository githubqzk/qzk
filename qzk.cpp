//
// Created by 邱泽鲲 on 2019/9/14.
//

#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            cout<<j<<"*"<<i<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
}