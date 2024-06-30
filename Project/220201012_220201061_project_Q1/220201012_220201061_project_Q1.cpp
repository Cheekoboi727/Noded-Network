#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"

using namespace std;

int main() 
{
//User defined inputs are commented out.
//Code is running in hardcoded form right now.
    SimpleGraph smg;
    int nodesId[5] = {101,102,103,104,105};
    smg.addNode(101);
    smg.addNode(102);
    smg.addNode(103);
    smg.addNode(104);
    smg.addNode(105);

    smg.addEdge(101,102);
    smg.addEdge(101,103);
    smg.addEdge(101,104);
    smg.addEdge(101,105);
    smg.addEdge(102,103);
    smg.addEdge(102,104);
    smg.addEdge(102,105);
    smg.addEdge(103,104);
    smg.addEdge(103,105);
    smg.addEdge(104,105);

    smg.printNeighbours(101);
    cout<<endl;
    smg.printNeighbours(103);
    cout<<endl;

    smg.printGraphData();

   // return 0;
   
    SimpleGraph smp2;
    int nodesNum, temp1, temp2;
    char check = 'y';
    cout << "How many nodes are to be made?" << endl;
    cin >> nodesNum;
    int nodeId[nodesNum];
    cout<<endl;
    for (int i = 0; i < nodesNum; i++) {
        cout << "Give the ID of " << i + 1 << "th node: " << endl;
        cin >> nodeId[i];
        smp2.addNode(nodeId[i]);
    }
    while (check == 'y') 
    {
        cout << "\nWhich nodes do you want to make an edge of?" << endl;
        cout << "(answer with node IDs)" << endl;
        cin >> temp1;
        for (int i=0;i<nodesNum;i++)
        {
            if (nodeId[i] == temp1)
            {
                temp1 = i;
                cin >> temp2;
                for (int i=0;i<nodesNum;i++)
                {
                    if (nodeId[i] == temp2)
                    {
                        temp2 = i;
                        smp2.addEdge(nodeId[temp1], nodeId[temp2]);
                    }
                }        
            }
        }
        cout << "Do you wish to create more edges?" << endl;
        cout << "(answer with y/n)" << endl;
        cin >> check;
    }
    cout << endl;
    smp2.printGraphData();
    return 0;

    
}
