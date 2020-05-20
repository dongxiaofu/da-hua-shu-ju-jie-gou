cmake_minimum_required(VERSION 3.16)
project(da_hua_shu_ju_jie_gou)

set(CMAKE_CXX_STANDARD 14)

add_executable(graph
        graph/graph.c graph/graph.h graph/test.c)

add_executable(scanf basic/scanf_demo.c)
