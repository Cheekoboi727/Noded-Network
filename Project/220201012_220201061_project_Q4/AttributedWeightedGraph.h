#ifndef ATTRIBUTEDWEIGHTEDGRAPH_H
#define ATTRIBUTEDWEIGHTEDGRAPH_H

#include "AttributedGraph2.h"
#include "AttributedGraph1.h"
#include "SimpleGraph.h"

class AttributedWeightedGraph:public AttributedGraph2
{
    int **Weights = new int*[5];

    public:
    AttributedWeightedGraph();
    AttributedWeightedGraph(int nodes,int edges);
    ~AttributedWeightedGraph();
    void appendWeight(int nodeId1,int nodeId2,int Weight);
    void printNeighbors(int NodeId);
    void printData();
};


#endif