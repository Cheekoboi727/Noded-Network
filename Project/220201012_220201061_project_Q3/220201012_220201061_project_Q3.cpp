#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
#include "AttributedNode2.h"
#include "AttributedNode2.cpp"
#include "AttributedGraph2.h"
#include "AttributedGraph2.cpp"
#include "AttributedGraph1.h"
#include "AttributedGraph1.cpp"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"

using namespace std;

int main()
{

//This part is for user defined inputs.
//Right now it is hard coded.

    AttributedGraph2 atr;
    int nodesId[5] = {101,102,103,104,105};

    atr.addNode(101);
    atr.addNode(102);
    atr.addNode(103);
    atr.addNode(104);
    atr.addNode(105);

    atr.addEdge(101,102);
    atr.addEdge(101,104);
    atr.addEdge(102,104);
    atr.addEdge(102,105);
    atr.addEdge(104,105);

    atr.appendAttributes(101,"Driver","Islamabad");
    atr.appendAttributes(102,"Chef","Lahore");
    atr.appendAttributes(103,"Doctor","Karachi");
    atr.appendAttributes(104,"Engineer","Multan");
    atr.appendAttributes(105,"Singer","Rawalpindi");   

    atr.AttributedGraph1::appendAttributes(101,18,'m');
    atr.AttributedGraph1::appendAttributes(102,19,'f');
    atr.AttributedGraph1::appendAttributes(103,20,'m');       
    atr.AttributedGraph1::appendAttributes(104,21,'f');
    atr.AttributedGraph1::appendAttributes(105,22,'m');

    atr.printData();

    //return 0;


    AttributedGraph2 atr1;
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
    atr1.AttributedGraph1::appendAttributes();
    
    atr1.printGraphData();
    return 0;



}