#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1,2,3,4,5};
    list<int> l2 = {100,200};
    // list<int> l2;
    // l2 = l;

    // l.push_back(6);
    // l.push_front(0);

    // l.pop_back();
    // l.pop_front();

    // cout << *next(l.begin(),2);

    l.insert(next(l.begin(),2),l2.begin(),l2.end());

    for(int val : l){
        cout << val << " ";
    }
    return 0;
}