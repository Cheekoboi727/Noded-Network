#ifndef ATTRIBUTEDGRAPH2_H
#define ATTRIBUTEDGRAPH2_H

#include "AttributedNode2.h"
#include "SimpleGraph.h"
#include "AttributedGraph1.h"

class AttributedGraph2:public AttributedGraph1
{
    AttributedNode2 AttNode2[5];

    public:
    AttributedGraph2();
    AttributedGraph2(int nodes,int edges);
    ~AttributedGraph2();
    void appendAttributes(int nodeid,string profession, string location);
    void appendAttributes();
    void printNeighbors(int nodeId);
    void printData();
    AttributedNode2* getAttNode2();
    void sendMessage()override;
};

#endif