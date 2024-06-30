#include<iostream>
#include "AttributedWeightedGraph.h"
#include "AttributedWeightedGraph.cpp"
#include "AttributedGraph2.h"
#include "AttributedGraph2.cpp"
#include "AttributedNode2.h"
#include "AttributedNode2.cpp"
#include "AttributedGraph1.h"
#include "AttributedGraph1.cpp"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"

using namespace std;

int main()
{
    AttributedWeightedGraph atrw;

    int nodes[5] = {101,102,103,104,105};

    atrw.addNode(101);
    atrw.addNode(102);
    atrw.addNode(103);
    atrw.addNode(104);
    atrw.addNode(105);

    atrw.addEdge(101,102);
    atrw.addEdge(101,104);
    atrw.addEdge(102,104);
    atrw.addEdge(102,105);
    atrw.addEdge(104,105);

    atrw.appendAttributes(101,"Driver","Islamabad");
    atrw.appendAttributes(102,"Chef","Lahore");
    atrw.appendAttributes(103,"Doctor","Karachi");
    atrw.appendAttributes(104,"Engineer","Multan");
    atrw.appendAttributes(105,"Singer","Rawalpindi");   

    atrw.AttributedGraph1::appendAttributes(101,18,'m');
    atrw.AttributedGraph1::appendAttributes(102,19,'f');
    atrw.AttributedGraph1::appendAttributes(103,20,'m');       
    atrw.AttributedGraph1::appendAttributes(104,21,'f');
    atrw.AttributedGraph1::appendAttributes(105,22,'m');

    atrw.appendWeight(101,102,3);
    atrw.appendWeight(101,104,3);
    atrw.appendWeight(102,104,3);
    atrw.appendWeight(102,105,3);
    atrw.appendWeight(104,105,3);
    atrw.appendWeight(103,102,3);


    atrw.sendMessage();

    atrw.AttributedGraph2::sendMessage();

    atrw.AttributedGraph1::sendMessage();

    cout<<endl<<endl;

    atrw.printData();

    
}