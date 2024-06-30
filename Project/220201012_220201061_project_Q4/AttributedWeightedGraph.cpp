#include <iostream>
#include "AttributedWeightedGraph.h"

using namespace std;

AttributedWeightedGraph::AttributedWeightedGraph()
{
    for (int i=0;i<5;i++)
    {
        Weights[i] = new int[5];
        for (int j=0;j<5;j++)
        {
            Weights[i][j] = 0;
        }
    }       
}

AttributedWeightedGraph::AttributedWeightedGraph(int nodes,int edges):AttributedGraph2(nodes,edges)
{
    for (int i=0;i<5;i++)
    {
        Weights[i] = new int[5];
        for (int j=0;j<5;j++)
        {
            Weights[i][j] = 0;
        }
    }        
}

AttributedWeightedGraph::~AttributedWeightedGraph()
{

}

void AttributedWeightedGraph::appendWeight(int nodeId1,int nodeId2,int Weight)
{
    for (int i=0;i<5;i++)
        {
            if (Nodes[i].getNodeId() == nodeId1)
            {
                for (int j=0;j<5;j++)
                {
                    if (Nodes[j].getNodeId() == nodeId2)
                    {
                        int count = 0;
                        for (int k=0;k<Nodes[i].getNeighborCount();k++)
                        {
                            if (Nodes[i].getNeighbor()[k]->getNodeId() == nodeId2)
                            {
                                count++;
                            }
                        }
                        if (count !=0)
                        {
                            Weights[i][j] = Weight;
                            Weights[j][i] = Weight;
                        }
                        else if (count==0)
                        {
                            cout<<"\nThe given nodes are not neighbors.\n";
                        }

                    }
                }
            }
        }    
}

void AttributedWeightedGraph::printNeighbors(int NodeId)
{
    for (int i = 0;i<numNodes; i++)
    {
        if (NodeId == Nodes[i].getNodeId())
        {
            cout << "The node IDs of the neighbors of this node are:" << endl;
            for (int j = 0; j < Nodes[i].getNeighborCount(); j++)
            {
                int a;
                a = Nodes[i].getNeighbor()[j]->getNodeId();
                for (int j=0;j<5;j++)
                {
                    if (Nodes[j].getNodeId() == a)
                    {
                        cout<<a<<"   with weight: "<<Weights[i][j]<<endl;
                    }
                }
            }
            if (Nodes[i].getNeighborCount() == 0)
            {
                cout<<"It has no neighbors."<<endl;
            }
        }
    }        
}

void AttributedWeightedGraph::printData()
{
    for (int i=0;i<numNodes;i++)
        {
            cout<<endl;
            cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
            cout<<"City Name: "<<getAttNode2()[i].getCityName()<<endl;
            cout<<"Profession: "<<getAttNode2()[i].getProfession()<<endl;
            cout<<"Age: "<<getAttNodes()[i].getAge()<<endl;
            cout<<"Gender: "<<getAttNodes()[i].getGender()<<endl;
            printNeighbors(Nodes[i].getNodeId());
            cout<<endl;
        }    
}