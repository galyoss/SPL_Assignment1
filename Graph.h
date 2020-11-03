//
// Created by galyo on 03/11/2020.
//

#ifndef SPL_ASSIGNMENT1_GRAPH_H
#define SPL_ASSIGNMENT1_GRAPH_H

#include <vector>

class Graph{
public:
    Graph(std::vector<std::vector<int>> matrix);

    void infectNode(int nodeInd);
    bool isInfected(int nodeInd);
    void removeEdge(int vertexA, int vertexB);
    std::vector<int> neighborsOf(int vertexA);

private:
    std::vector<std::vector<int>> edges;
};

#endif //SPL_ASSIGNMENT1_GRAPH_H