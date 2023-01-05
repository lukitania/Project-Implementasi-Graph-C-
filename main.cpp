#include "graph.h"


int main()
{
    adrNode G;
    char a = 'A',b = 'B',c = 'C', d = 'D';
    adrNode p;
    G = newNode_1301213153(a);
    p = newNode_1301213153(b);
    addNode_1301213153(G,p);
    p = newNode_1301213153(c);
    addNode_1301213153(G,p);
    p = newNode_1301213153(d);
    addNode_1301213153(G,p);

    addEdge_1301213153(G,a,b);

    addEdge_1301213153(G,a,d);
    addEdge_1301213153(G,a,c);
    addEdge_1301213153(G,b,d);
    addEdge_1301213153(G,b,a);
    addEdge_1301213153(G,c,a);
    addEdge_1301213153(G,d,a);
    addEdge_1301213153(G,d,b);
    printGraph_1301213153(G);

    cout << "Cek Jika Simpul Terhubung" << endl;
    cin >> a >> b;
    if(isConnected_1301213153(G,a,b)){
        cout << "Terhubung";
    }else{
        cout << "Terputus";
    }

    return 0;
}
