#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v;
    vector<pair<int,int>> p;
    unordered_set<int> hori;
    unordered_set<int> vert;
    for(int i=0;i<m;i++){
        vector<int> a;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            a.push_back(x);
            if(x==0){
                hori.insert(i);
                vert.insert(j);
            }
        }
        v.push_back(a);
    }
    for(auto it=hori.begin();it!=hori.end();it++){
        int a=*it;
        for(int i=0;i<n;i++){
            v[a][i]=0;
        }
    }
    for(auto it=vert.begin();it!=vert.end();it++){
        int a=*it;
        for(int i=0;i<m;i++){
            v[i][a]=0;
        }
    }
   
}