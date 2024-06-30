#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"
#include "AttributedGraph1.h"
#include "AttributedGraph1.cpp"

using namespace std;


int main() 
{
    AttributedGraph1 atr;
    int nodes[5] = {101,102,103,104,105};

    atr.addNode(101);
    atr.addNode(102);
    atr.addNode(103);
    atr.addNode(104);
    atr.addNode(105);

    atr.addEdge(101,102);
    atr.addEdge(101,103);
    atr.addEdge(101,104);
    atr.addEdge(102,104);
    atr.addEdge(102,105);
    atr.addEdge(104,105);

    atr.appendAttributes(101,18,'m');
    atr.appendAttributes(102,18,'m');
    atr.appendAttributes(103,18,'m');
    atr.appendAttributes(104,18,'m');
    atr.appendAttributes(105,18,'m');

    atr.printGraphData();
   // return 0;

    AttributedGraph1 atr1;
    int nodesNum, temp1, temp2;
    char check = 'y';
    cout << "How many nodes?" << endl;
    cin >> nodesNum;
    int nodeId[nodesNum];
    cout<<endl;
    for (int i = 0; i < nodesNum; i++) {
        cout << "Give the ID of " << i + 1 << "th node: " << endl;
        cin >> nodeId[i];
        atr1.addNode(nodeId[i]);
    }

    while (check == 'y') 
    {
        cout<<endl;
        cout << "Which nodes do you want to make an edge of?" << endl;
        cout << "(answer with node IDs)" << endl;
        cout << "Node 1: ";
        cin >> temp1;
        for (int i=0;i<nodesNum;i++)
        {
            if (nodeId[i] == temp1)
            {
                temp1 = i;
                cout<<"Node 2: ";
                cin >> temp2;
                for (int i=0;i<nodesNum;i++)
                {
                    if (nodeId[i] == temp2)
                    {
                        temp2 = i;
                        atr1.addEdge(nodeId[temp1], nodeId[temp2]);
                    }
                }        
            }
        }
       
        cout << "Do you want to create more edges?" << endl;
        cout << "(answer with y/n)" << endl;
        cin >> check;
    }
    atr1.appendAttributes();
    atr1.printGraphData(); 


}
