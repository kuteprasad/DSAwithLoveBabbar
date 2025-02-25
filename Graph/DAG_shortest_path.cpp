// shortest path in Directed acyclic graph
#include <iostream>
#include <unordered_map>
#include <list>
#include <stack>
#include <limits>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int> > > adj;

    void addEdge(int u, int v, int weight)
    {
        pair<int, int> p = make_pair(v, weight);
        adj[u].push_back(p);
    }

    void printAdj()
    {
        // int n = 3;
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << "), ";
            }
            cout << endl;
        }
    }

    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s)
    {
        visited[node] = true;

        for (auto nbr : adj[node])
        {
            if (!visited[nbr.first])
            {
                dfs(nbr.first, visited, s);
            }
        }

        s.push(node);
    }

    void shortestPath(stack<int> &s, int n){
         unordered_map<int, int> distance;

    for (int i = 0; i < n; i++)
    {
        distance[i] = INT_MAX;
    }

    int src = 1;

    distance[src] = 0;

    while (!s.empty())
    {
        int top = s.top();
        s.pop();

        if (distance[top] != INT_MAX)
        {

            for (auto i : adj[top])
            {

                if (distance[top] + i.second < distance[i.first])
                {
                    distance[i.first] = distance[top] + i.second ;
                }
            }
        }
    }
    // print shortest path 

    for (int i = 0; i < n ; i++)
    {
        cout<<distance[i]<< " - ";
    }
    

    }

    
};

int main()
{
    Graph g;

    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);

    //    g.printAdj();

    stack<int> s;

    unordered_map<int, bool> visited;

    int n = 6;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.dfs(i, visited, s);
        }
    }

    g.shortestPath(s, n);

   

    return 0;
}