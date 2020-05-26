//
// Created by chugang on 2020/5/20.
//
#include "graph.h"

int NumberOf1Between1AndN_Solution(int n);
int NumberOf1(int n);

int main(){
    MGraph *G = (MGraph *)malloc(sizeof(MGraph));
    CreateMGraph(G);
    PrintMGraph(*G);
    int counter=NumberOf1Between1AndN_Solution(5);
    printf("counter:%d\n", counter);
    return 0;
}

int NumberOf1Between1AndN_Solution(int n)
{
    int counter = 0;
    for(int i=1;i<=n;i++){
        counter += NumberOf1(i);
    }
    return counter;
}

int NumberOf1(int n){
    int number=0;
    while(n){
        if(n%10==1){
            number++;
        }
        n = n/10;
    }
    return number;
}
