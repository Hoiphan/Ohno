#include <iostream>
#include <list>

using namespace std;

class Adjancy
{
private:
    list<int> adjlist;
    int size;

public:
    Adjancy(){};

    void push(int val)
    {
        adjlist.push_back(val);
        size++;
    }
    void print()
    {
        for (int c : adjlist)
        {
            cout << "->" << c;
        }
    }
    void printArray()
    {
        for (int c : adjlist)
        {
            cout << c << " ";
        }
    }

    int getSize()
    {
        return adjlist.size();
    }
    int getElement(int index)
    {
        auto it = adjlist.begin();

        for (int i = 0; i <= index; i++)
        {
            ++it;
        }

        return *it;
    }
};

class Graph
{
private:
    int V;
    Adjancy *adj;

public:
    Graph(int V)
    {

        this->V = V;
        adj = new Adjancy[V];
    }
    ~Graph()
    {
        delete[] adj;
        adj = NULL;
    }

    void addEdg(int v, int w)
    {
        adj[v].push(w);
        adj[w].push(v);
    }
    void printGraph()
    {
        for (int v = 0; v < V; v++)
        {
            cout << "\nAdjacency list of vertex" << v << "\nhead";
            adj[v].print();
        }
    }

    Adjancy *BFS(int v)
    {
    }
};