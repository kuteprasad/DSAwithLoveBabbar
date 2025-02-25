#include <iostream>
#include <unordered_map>
#include<list>
using namespace std;
template <typename T>

class graph
{
public:
    unordered_map<T, list<T> > adj;

    void addEdge(T u, T v, bool isDirected)
    {
        adj[u].push_back(v);

        if(!isDirected) 
        adj[v].push_back(u);

    }

    void print(int n, int m)
    {
        for(auto i : adj)
        {
            cout<<i.first <<" -> ";
            for(auto j: i.second)
            {
                cout<<j<<", ";
            }
            cout<<endl;
        }
        
    }
};

int main()
{
    // let's create a adjacency graph
    // using unordered map

    graph<int> g;

    int m, n;
    cout << "Enter number of nodes" << endl;
    cin >> n;
    cout << "Enter number of Edges" << endl;
    cin >> m;

    int u, v;
    cout << "Enter Edges" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }

    g.print(n, m);

    return 0;
}