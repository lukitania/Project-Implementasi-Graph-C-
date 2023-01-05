#include "graph.h"

adrNode newNode_1301213153(char x) {
    adrNode newNode = new Node;
    info(newNode).data = x;
    edge(newNode) = NULL;
    next_node(newNode) = NULL;

    return newNode;
}

void addNode_1301213153(adrNode &G, adrNode p){
    adrNode Q;
    if(G == NULL){
       G = p;
    } else {
        Q = G;
        while(next_node(Q) != NULL){
            Q = next_node(Q);
        }
        next_node(Q) = p;
    }
}

adrNode findNode_1301213153(adrNode G, char X){
    adrNode P;
    if(G == NULL){
        cout << "Graph Kosong!!!" << endl;
        return NULL;
    }else{
        P = G;
        while(P != NULL){
            if(info(P).data == X){
                return P;
            }
            P = next_node(P);
        }
        return NULL;
    }
}

void addEdge_1301213153(adrNode &G, char x, char y){
    adrNode P, cariX, cariY;
    if(G != NULL){
        cariX = findNode_1301213153(G, x);
        cariY = findNode_1301213153(G, y);

        if(cariX != NULL && cariY != NULL){
            adrEdge Q = new Edge;
            info(Q) = info(cariY);
            next_edge(Q) = NULL;

            if(edge(cariX) == NULL){
                edge(cariX)=Q;
            }else{
                next_edge(Q) = edge(cariX);
                edge(cariX) = Q;
            }
        }
    }
}

bool isConnected_1301213153(adrNode G, char x, char y){
    adrNode P;
    adrEdge Q;
    if(G != NULL){
        P = G;
        while(P != NULL){
            Q = edge(P);
            while(Q != NULL){
                if(info(P).data == x && info(Q).data == y){
                    return true;
                }
                Q = next_edge(Q);
            }
            P = next_node(P);
        }
    }
    return false;
}

void printGraph_1301213153(adrNode G){
    adrNode P;
    adrEdge Q;
    if(G == NULL){
        cout << "Graph Kosong!!!" << endl;
    }else{
        P = G;
        while(P != NULL){
            cout << "node" << info(P).data << ": ";
            cout << " - ";
            Q = edge(P);
            while(Q != NULL){
                cout << info(Q).data;
                if(next_edge(Q)!= NULL){
                    cout << " - ";
                }
                Q = next_edge(Q);
            }
            cout << endl;
            P = next_node(P);
        }
    }
}
