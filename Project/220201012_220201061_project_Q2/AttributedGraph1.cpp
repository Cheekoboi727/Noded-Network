#include <iostream>

#include "AttributedGraph1.h"
using namespace std;

AttributedGraph1::AttributedGraph1()
{

}
AttributedGraph1::AttributedGraph1(int nodes,int edges):SimpleGraph(nodes,edges)
{

}
AttributedGraph1::~AttributedGraph1()
{
}

void AttributedGraph1::appendAttributes(int nodeId,int Age,char Gender)
{
    for (int i=0;i<numNodes;i++)
    {
        if (Nodes[i].getNodeId() == nodeId)
        {
            AttNodes[i].setAge(Age);
            AttNodes[i].setGender(Gender);
            break;
        }
    }
}
void AttributedGraph1::appendAttributes()
{
    int temp0;
        char temp1;
        cout<<"\nPlease give attributes for these Nodes:"<<endl;
        for (int i=0;i<numNodes;i++)
        {
            cout<<"Node ID: "<<Nodes[i].getNodeId()<<endl;
            cout<<"Gender (m/f): ";
            cin>>temp1;
            AttNodes[i].setGender(temp1);
            cout<<"Age :";
            cin>>temp0;
            AttNodes[i].setAge(temp0);
            cout<<endl;

        }    
}
void AttributedGraph1::printGraphData()
{
    for (int i = 0; i < numNodes; i++) 
    {
        cout<<endl;
        cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
        cout<<"Gender: "<<AttNodes[i].getGender()<<endl;
        cout<<"Age: "<<AttNodes[i].getAge()<<endl;
        printNeighbours(Nodes[i].getNodeId());
        cout<<endl;
    }        
}

AttributedNode1* AttributedGraph1::getAttNodes()
{
    return AttNodes;
}