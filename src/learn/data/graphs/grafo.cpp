#include <vector>
#include <iostream>

using namespace std;

vector < vector<int> > lista;

void create_graph(int nodes)
{
    for (int i = 0; i < nodes; i++)
    {
        vector<int> row(nodes, 0);
        lista.push_back(row);
    }
    
}

void add_relation(int node1, int node2)
{
    lista[node1][node2] = 1;
    lista[node2][node1] = 1;
}

void delete_relation(int node1, int node2)
{
    lista[node1][node2] = 0;
    lista[node2][node1] = 0;
}

void print_graph()
{
    for (int i = 0; i < lista.size(); i++)
    {
        for (int j = 0; j < lista[i].size(); j++)
        {
            if (lista[i][j] == 1) {
                cout << i << " " << j << endl;
            }
        }
        cout << endl;
    }
    
}

int main()
{

    create_graph(4);
    add_relation(1, 2);
    add_relation(1, 3);

    print_graph();

    return EXIT_SUCCESS;
}