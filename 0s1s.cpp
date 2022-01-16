#include <bits/stdc++.h>
using namespace std;

void solve(int one, int zero, int n, string op, vector<string> &ans){
    if(n==0){
        ans.push_back(op);
        return;
    }
    string op1=op;
    op1.push_back('1');
    solve(one+1,zero,n-1,op1,ans);
    if (one > zero){
        string op2=op;
        op2.push_back('0');
        solve(one,zero+1,n-1,op2,ans);
    }
    return;
}
int main(){
    cout<<"Enter n";
    int n;
    vector<string> ans;
    string op="";
    cin>>n;
    int one = 0, zero = 0;
    solve(one,zero,n,op,ans);
    for(int i=0;i<ans.size();i++){
    cout<<ans[i];
    }
}