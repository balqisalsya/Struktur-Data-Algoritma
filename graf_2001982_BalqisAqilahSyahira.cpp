#include <iostream>

using namespace std;

int vertex, edge;
int **adj; //double pointer agar bisa menunjuk pointer itu sendiri
int visited[10]; //variable kunjungan

void buatMatriks(int jumVertex, int jumEdge)
{
    vertex = jumVertex;
    edge = jumEdge;

    adj = new int *[jumVertex];

    for(int baris=0; baris<jumVertex; baris++)
    {
        adj[baris]=new int[jumVertex];

        for(int kolom=0; kolom<jumVertex; kolom++)
        {
            adj[baris][kolom]=0;
        }
    }
}

void tambahEdge(int awal, int tujuan)
    //vertex awal menuju ke akhir = akhir menuju ke awal
{
    adj[awal][tujuan] = 1;
    adj[tujuan][awal] = 1;   
}

void dfs(int mulai) //---> 0
{
    cout << mulai << " ";
    visited[mulai] = 1;

    for(int i = 0; i < vertex; i++)
    {
        if(adj[mulai][i] == 1 and visited[i] == 0)
        {
            dfs(i);
        }
    }
}

int main()
{
    buatMatriks(8,7);
    tambahEdge(0,1);
    tambahEdge(0,5);
    tambahEdge(1,2);
    tambahEdge(1,4);
    tambahEdge(2,3);
    tambahEdge(5,6);
    tambahEdge(5,7);
    dfs(0);
}