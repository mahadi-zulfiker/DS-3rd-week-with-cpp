#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l(10,3);
    // for(auto it = l.begin(); it != l.end(); it++){
    //     cout << *it << " ";
    // }

    for(int val : l){
        cout << val << " ";
    }
    return 0;
}