#ifndef ATTRIBUTEDGRAPH1_H
#define ATTRIBUTEDGRAPH1_H

#include "AttributedNode1.h"
#include "SimpleGraph.h"

class AttributedGraph1:public SimpleGraph
{
    AttributedNode1 AttNodes[5];

    public:
    AttributedGraph1();
    AttributedGraph1(int nodes,int edges);
    ~AttributedGraph1();
    void appendAttributes();
    void appendAttributes(int nodeId,int Age,char Gender);
    void printGraphData();
    AttributedNode1* getAttNodes();

};

#endif