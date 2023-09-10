#include <vector>
#include <stack>
#include <iostream>
#include <queue>

#define vii vector< vector<int> > 

using namespace std;

void create_graph(int nodes, vii &graph)
{
    for (int i = 0; i <= nodes; i++)
    {
        vector <int> row(0, 0);
        graph.push_back(row);
    }
}

void add_relation(int node1, int node2, vii &graph)
{
    graph[node1].push_back(node2);
    graph[node2].push_back(node1);
}

void dfs(int current_node, vii &graph, vector<bool> &visited)
{
    visited[current_node] = true;
    cout << "Visitando nodo: " << current_node << endl;

    for (int i = 0; i < graph[current_node].size(); i++)
    {
        int neighbor = graph[current_node][i];
        if (!visited[neighbor])
        {
            dfs(neighbor, graph, visited);
        }
    }
}

void bfs(int start_node, vii &graph, vector<bool> &visited)
{
    queue<int> q;
    q.push(start_node);
    visited[start_node] = true;

    while (!q.empty())
    {
        int current_node = q.front();
        q.pop();
        cout << "Visitando nodo: " << current_node << endl;

        for (int i = 0; i < graph[current_node].size(); i++)
        {
            int neighbor = graph[current_node][i];
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

void print_graph(vii &graph)
{
    for (int i = 1; i < graph.size(); i++)
    {
        cout << "Nodo " << i << ": ";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    vii grafo1;

    create_graph(5, grafo1);
    add_relation(1, 4, grafo1);
    add_relation(1, 2, grafo1);
    add_relation(2, 3, grafo1);
    add_relation(2, 5, grafo1);
    add_relation(4, 3, grafo1);
    add_relation(4, 5, grafo1);
    print_graph(grafo1);

    vector<bool> visited(grafo1.size(), false);
    vector<bool> visited2(grafo1.size(), false);

    cout << "Recorrido DFS:" << endl;
    dfs(1, grafo1, visited);

    cout << "Recorrido BFS:" << endl;
    dfs(1, grafo1, visited2);

    return EXIT_SUCCESS;
}