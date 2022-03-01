#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(23);
    cout<<s.empty();
    cout<<endl<<s.top();
    s.pop();
    s.pop();
    cout<<endl<<s.empty();
    return 0;
}