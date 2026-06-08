#pragma once
#define TRUE  1
#define FALSE 0
#define INF   10000           // 무한대 값
#define MAX_VERTICES 5  // 그래프의 정점 개수

// extern 키워드 추가! (메모리 중복 할당 방지)
extern int distance[MAX_VERTICES]; 
extern int S[MAX_VERTICES];        

int nextVertex(int n);
int printStep(int step);
void Dijkstra_shortestPath(int start, int n);