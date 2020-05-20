//
// Created by chugang on 2020/5/20.
//
#include "graph.h"

int main(){
    MGraph *G = (MGraph *)malloc(sizeof(MGraph));
    CreateMGraph(G);
    PrintMGraph(*G);
    return 0;
}
