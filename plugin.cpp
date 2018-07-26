/**
 * Evoplex <https://evoplex.github.com>
 * Copyright (C) 2016-present
 */

#include "plugin.h"

namespace evoplex {
// Global variables
//double prob;
//Nodes nodes_g;
//int no_nodes;

bool MinimalModel::init()
{
//     Local nodes to initialize
//    Nodes nodes;

//    // Storing probability
//    prob = attr("prob").toDouble();
//    no_nodes = attr("#nodes").toInt();

//    nodes =
    // Storing graph type
//    GraphType graphType;
//    QString graphInputStr = attr("graphType").toQString();
//    if(graphInputStr == "undirected"){
//        graphType = GraphType::Undirected;
//    } if(graphInputStr == "directed"){
//        graphType = GraphType::Directed;
//    } else {
//        graphType = GraphType::Invalid;
//    }

//    // Creating attributes scope
//    QString errorMsg;
//    AttributesScope attrsScope;
//    QString attrRgeStr = "bool", attrRgeName = "infected";
//    AttributeRange* col0 = AttributeRange::parse(0, attrRgeName, attrRgeStr);
//    attrsScope.insert(col0->attrName(), col0);

//    // Generating set of nodes
//    nodes = Nodes::fromCmd(cmd, attrsScope, graphType, errorMsg);

//    // Initializing infected input
//    m_infected = nodes.at(0)->attrs().indexOf("infected");

//    // Setting the global nodes, so algorithmStep() can access them
//    nodes_g = nodes;
    return true;
}

bool MinimalModel::algorithmStep()
{
//    bool isInfected, isNeighbourInfected;
//    int nodeID = -1;
//    NodePtr neighbour;
//    double randTest;
//    PRG* prg = new PRG(123);

//    // For each node
//    for(int i = 0; i < nodes_g.size(); i++){
//        // Checks if a node is infected
//        isInfected = nodes_g.at(i)->attrs().value(m_infected).toBool();

//        // If the current node is healthy
//        if(!isInfected){
//            // While there is no random node generated yet,
//            // and the random node ID is not the ID of the current node
//            while((nodeID != -1) && (nodeID != i)){
//                // Select a random node ID
//                nodeID = prg->randI(0, nodes_g.size());
//            }

//            // Check if neighbour is infected
//            neighbour = nodes_g.at(nodeID);
//            isNeighbourInfected = neighbour->attrs().value(m_infected).toBool();

//            // If the neighbour is infected
//            if(isNeighbourInfected){
//                // Generate a random double in the range [0,1]
//                randTest = prg->randD(0,1);

//                // Test if the number is less than or equal to the probablilty
//                // (The probablity of this being true is the same as the probability itself)
//                // If it is
//                if(randTest <= prob){
//                    // Infect the current node
//                    isInfected = true;
//                }
//            }
//        }
//    }
    return false;
}


} // evoplex
REGISTER_PLUGIN(MinimalModel)
#include "plugin.moc"
