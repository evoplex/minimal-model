/**
 * Evoplex <https://evoplex.github.com>
 * Copyright (C) 2016-present
 */

#include "plugin.h"

namespace evoplex {
// Global variables
double prob;
//int no_nodes;
int numberOfNodes;

bool MinimalModel::init()
{
    m_infected = AbstractModel::nodes().at(0)->attrs().indexOf("infected");

    // Storing probability
    prob = attr("prob").toDouble();

    numberOfNodes = AbstractModel::nodes().size();
    return m_infected >= 0;
}

bool MinimalModel::algorithmStep()
{
    PRG* prg = new PRG(123);
    NodePtr currentNode, neighbour;
    double randTest;

    // For each node
    for(int i = 0; i < numberOfNodes; i++){
        currentNode = AbstractModel::nodes().at(i);

        // Select a random neighbour
        neighbour = currentNode->randNeighbour(prg);

        // Check if the neighbour is infected
        if(neighbour->attrs().value(m_infected).toBool()){
            // Generate a random double in the range [0,1]
            randTest = prg->randD(0,1);

            // Test if the number is less than or equal to the probablilty
            // (The probablity of this being true is the same as the probability itself)
            // Infect the current node if true
            if(randTest <= prob){
                currentNode->setAttr(m_infected, true);
            }
        }
    }
    return false;
}


} // evoplex
REGISTER_PLUGIN(MinimalModel)
#include "plugin.moc"
