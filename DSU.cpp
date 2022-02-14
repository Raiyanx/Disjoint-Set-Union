#include "bits/stdc++.h"
 
using namespace std;
typedef long long ll; 
#define FASTio ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

struct DSU{

    vector<int> parent;
    vector<int> size;
    int comp;

    DSU(int n_) : parent(n_ + 1) , size(n_ + 1 , 1), comp(n_) {
        for(int i=1;i<=n_;i++)
            parent[i]=i;
    }

    int find(int v){
        if (v == parent[v])
            return v;
        return parent[v] = find(parent[v]);
    }

    void unions(int a, int b){
        a = find(a);
        b = find(b);
        if (a != b) {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
            comp--;
        }
    }

    bool same(int a, int b){
        return find(a)==find(b);
    }

    int compsize(ll a){
        a=find(a);
        return size[a];
    }
};


int main()
{
    FASTio

    
}




