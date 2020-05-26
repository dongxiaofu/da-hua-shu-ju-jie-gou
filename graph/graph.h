//
// Created by chugang on 2020/5/20.
//

#ifndef DA_HUA_SHU_JU_JIE_GOU_GRAPH_H
#define DA_HUA_SHU_JU_JIE_GOU_GRAPH_H
#include <stdio.h>
#include <stdlib.h>
typedef char VertextType;
typedef int EdgeType;
#define MAX_VALUE 100
#define INFINITY 65535

typedef struct{
    VertextType vexs[MAX_VALUE];        // 顶点
    EdgeType arc[MAX_VALUE][MAX_VALUE]; // 边
    int numVertexes,numEdges;
}MGraph;

void CreateMGraph(MGraph *G);

void PrintMGraph(MGraph G);

#endif //DA_HUA_SHU_JU_JIE_GOU_GRAPH_H
