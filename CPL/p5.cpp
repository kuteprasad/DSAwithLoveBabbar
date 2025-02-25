#include<iostream>
#include<set>
#include<vector>

using namespace std; 
int main(int argc, char const *argv[])
{
    int n; 
    cin>>n;
    int m; 
    cin>>m;

    int parent[n];
    int rank[n];
    for(int i = 0 ; i < n ; i++)
    {
        parent[i] = i; 
        rank[i] = 1; 
    }

    int vec[m][2] ;

    for(int i = 0 ; i < m; i++)
    {
        int a , b; 
        cin>>a;
        cin>>b;
        vec[i][0] = a;
        vec[i][1] = b;
    }

    for(int i = 0 ; i < m; i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];

        if(parent[u] != parent[v])
        {

            if(rank[u] > rank[v])
            {
            parent[v] = parent[u];
            rank[u]++;
            }else
            {
                parent[u] = parent[v];
                rank[v]++;
            }
        }
    }

    //find unique
    set<int> st; 
    for(int i = 0 ; i < n; i++)
    {
        st.insert(parent[i]);
    }

    cout<<st.size();

    return 0;

}