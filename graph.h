#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#define info(P) (P) ->info
#define edge(P) (P) ->edge
#define next_node(P) (P) ->next_node
#define next_edge(P) (P) ->next_edge
#include <iostream>
using namespace std;

struct infotype{
    char data;
};

typedef struct Node* adrNode;
typedef struct Edge* adrEdge;

struct Node{
    infotype info;
    adrEdge edge;
    adrNode next_node;
 };

struct Edge{
    infotype info;
    adrEdge next_edge;
};

adrNode newNode_1301213153(char x);
void addNode_1301213153(adrNode &G, adrNode p);
adrNode findNode_1301213153(adrNode G, char X);
void addEdge_1301213153(adrNode &G, char x, char y);
bool isConnected_1301213153(adrNode G, char x, char y);
void printGraph_1301213153(adrNode G);

#endif // GRAPH_H_INCLUDED
