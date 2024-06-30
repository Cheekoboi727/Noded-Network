#include <iostream>
#include "AttributedGraph2.h"

using namespace std;

AttributedGraph2::AttributedGraph2()
{
}
AttributedGraph2::AttributedGraph2(int nodes, int edges):AttributedGraph1(nodes,edges)
{
}
AttributedGraph2::~AttributedGraph2()
{
    delete Nodes;
}
void AttributedGraph2::appendAttributes(int nodeid,string profession, string location)
{
    for (int i=0;i<numNodes;i++)
        {
            if(Nodes[i].getNodeId() == nodeid)
            {
                AttNode2[i].setCityName(location);
                AttNode2[i].setProfession(profession);
            }
        }
}

void AttributedGraph2::appendAttributes()
    {
        string temp0;
        string temp1;
        cout<<"Please give attributes for these Nodes:"<<endl;
        for (int i=0;i<numNodes;i++)
        {
            cout<<"Node ID: "<<Nodes[i].getNodeId()<<endl;
            cout<<"City Name: ";
            cin>>temp1;
            AttNode2[i].setCityName(temp1);
            cout<<"Profession :";
            cin>>temp0;
            AttNode2[i].setProfession(temp0);
        }   

    }

AttributedNode2* AttributedGraph2::getAttNode2()
{
    return AttNode2;
}

void AttributedGraph2::printNeighbors(int nodeId)
{
        printNeighbours(nodeId);
        for(int i=0;i<numNodes;i++)
        {
            if (Nodes[i].getNodeId()==nodeId)
            {
                cout<<endl<<"Node ID: "<<nodeId<<endl;
                cout<<"City Name: "<<AttNode2[i].getCityName();
                cout<<"Profession: "<<AttNode2[i].getProfession();
            }
        }
}

void AttributedGraph2::printData()
{
     
    for (int i = 0; i < numNodes; i++) 
    {
        cout<<endl;
        cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
        cout<<"City Name: "<<AttNode2[i].getCityName()<<endl;
        cout<<"Profession: "<<AttNode2[i].getProfession()<<endl;
        cout<<"Age: "<<getAttNodes()[i].getAge()<<endl;
        cout<<"Gender: "<<getAttNodes()[i].getGender()<<endl;
        printNeighbours(Nodes[i].getNodeId());
        cout<<endl;
    } }

void AttributedGraph2::sendMessage()
{
    cout<<endl<<"Message from AttributedGraph2"<<endl;
}