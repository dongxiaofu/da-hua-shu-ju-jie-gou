//
// Created by chugang on 2020/5/20.
//

#include "graph.h"

void CreateMGraph(MGraph *G) {
    int i, j, k, w;
    printf("请输入顶点数和边数：\n");
    /************************************************************
     * scanf的format部分，占位符之间用空格或不用空格隔开，不能使用逗号隔开。
     * 若有两个scanf连接，第二个scanf会吸收上一个输入的换行符\n。
     ************************************************************/
    scanf("%d %d", &G->numVertexes, &G->numEdges);
    printf("ok\n");
    for (int i = 0; i < G->numVertexes; i++) {
        printf("输入顶点:");
        char c;
//        scanf("%c", &G->vexs[i]);           // todo 不符合意图，会接收上一个输入的\n
//        printf("g:%d", G->vexs[i]);
        scanf("%c%c", &G->vexs[i], &c);
    }
    // 初始化矩阵
    for (int i = 0; i < G->numVertexes; i++) {
        for (int j = 0; j < G->numVertexes; j++) {
            G->arc[i][j] = INFINITY;
        }
    }
    for (int k = 0; k < G->numEdges; k++) {
        printf("输入边（vi,vj）上的下标i、下标j和权w:\n");
        scanf("%d %d %d", &i, &j, &w);
        G->arc[i][j] = w;
        G->arc[j][i] = G->arc[i][j];
    }
}

void PrintMGraph(MGraph G) {
    for (int i = 0; i < G.numVertexes; i++) {
        for (int j = 0; j < G.numVertexes; j++) {
            printf("%d\t", G.arc[i][j]);
        }
        printf("\n");
    }
}
