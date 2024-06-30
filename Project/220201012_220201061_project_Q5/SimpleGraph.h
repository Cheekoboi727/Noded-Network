#ifndef SimpleGraph_H
#define SimpleGraph_H

#include "SimpleNode.h"

class SimpleGraph
{
    protected:
    int numNodes;
    int numEdges;
    SimpleNode* Nodes;

    public:
    SimpleGraph();
    SimpleGraph(int nodes,int edges);
    ~SimpleGraph();
    int getNumNodes();
    int getNumEdges();
    void addNode(int NodeId);
    void addEdge(int nodeId1,int nodeId2);
    void printNeighbours(int nodeId);
    void printGraphData();
    virtual void sendMessage() = 0;
};

#endif 