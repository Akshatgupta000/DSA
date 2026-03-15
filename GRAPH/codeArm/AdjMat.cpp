// graph is a non linear data structure consisting of vertices and edges

#include <iostream>
#include <vector>
using namespace std;

// Adjacency Matrix

// undirected unweighted graph.
// int main(){
//     int vertex, edges;
//     cin>>vertex>>edges;

//     vector<vector<bool>> AdjMat(vertex, vector<bool>(vertex,0));      //2d vector of size vertex.

//     int u,v;
//     for(int i=0;i<edges;i++){
//         cin>>u>>v;
//         AdjMat[u][v] = 1;
//         AdjMat[v][u] = 1;
//     }

//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout<<AdjMat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// __________________________________________________________________________________________

// undirected weighted graph.
// int main(){
//     int vertex, edges;
//     cin>>vertex>>edges;

//     vector<vector<int> >AdjMat(vertex, vector<int>(vertex,0));

//     int u,v, weight;
//     for(int i=0;i<edges;i++){
//         cin>>u>>v>>weight;
//         AdjMat[u][v] = weight;
//         AdjMat[v][u] = weight;
//     }

//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout<<AdjMat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// __________________________________________________________________________________________

// directed unweighted graph.
// int main(){
//     int vertex, edges;
//     cin>>vertex>>edges;

//     vector<vector<bool>>AdjMat(vertex, vector<bool>(vertex,0));

//     int u,v;
//     for(int i=0;i<edges;i++){
//         cin>>u>>v;
//         AdjMat[u][v] = 1;
//     }

//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout<<AdjMat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//
// __________________________________________________________________________________________

// directed weighted graph
int main()
{
    int vertex, edges;
    cin >> vertex >> edges;

    vector<vector<int>> AdjMat(vertex, vector<int>(vertex, 0));

    int u, v, weight;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> weight;
        AdjMat[u][v] = weight;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << AdjMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
