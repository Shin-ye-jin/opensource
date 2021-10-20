//#include<stdio.h>
//#include<stdlib.h>
//
//#define TRUE 1
//#define FALSE 0
//
//#define MAX_VERTICES 100
//#define INF 1000
//
//int parent[MAX_VERTICES];
//
//void set_init(int n) //union - find initialize
//{
//	int i;
//	for (i = 0; i < n; i++) {
//		parent[i] = -1;
//	}
//}
//
//int set_find(int vertex)
//{
//	if (parent[vertex] == -1)
//		return vertex;
//	while (parent[vertex] != -1) vertex = parent[vertex];
//	return vertex;
//}
//
//void set_union(int s1, int s2)
//{
//	int root1 = set_find(s1);
//	int root2 = set_find(s2);
//	if (root1 != root2)
//		parent[root1] = root2;
//}
//
//struct Edge {
//	int start, end, weight;
//};
//
//typedef struct GraphType {
//	int n;
//	struct Edge edges[2 * MAX_VERTICES];
//}GraphType;
//
//void graph_init(GraphType* g)
//{
//	int i;
//	g->n = 0;
//	for (i = 0; i < 2 * MAX_VERTICES; i++) {
//		g->edges[i].start = 0;
//		g->edges[i].end = 0;
//		g->edges[i].weight = INF;
//	}
//}
//
//void insert_heap_edge(GraphType* g, int start, int end, int w)
//{
//
//	g->edges[g->n].start = start;
//	g->edges[g->n].end = end;
//	g->edges[g->n].weight = w;
//	g->n++;
//}
//
//int compare(const void* a, const void* b)
//{
//	struct Edge* x = (struct Edge*)a;
//	struct Edge* y = (struct Edge*)b;
//	return (x->weight - y->weight);
//}
//
//void kruskal(GraphType *g) {
//	int i = 0;
//	int edge_accepted = 0;
//	int uset, vset;
//	struct Edge e;
//	
//	set_init(g->n); 
//	qsort(g->edges, g->n, sizeof(struct Edge), compare);
//
//	
//	while (edge_accepted < (g->n - 1)) 
//	{
//		e = g->edges[i];
//		uset = set_find(e.start);
//		vset = set_find(e.end);
//
//		if (e.start>0 && e.end>0 && uset == vset) {
//			printf("\n간선 %d-%d(%d)은 그래프에 Cycle을 생성함으로 제외\n\n", e.start, e.end, e.weight);
//		}
//		if (uset != vset) {
//			printf("%d-%d(%d) , ", e.start, e.end, e.weight);
//			edge_accepted++;
//			set_union(uset, vset);
//		}
//		i++;
//	}
//}
//
//int main(void)
//{
//	GraphType* g;
//	FILE* fp;
//
//	g = (GraphType*)malloc(sizeof(GraphType));
//	graph_init(g);
//	
//	int temp1, temp2, temp3;
//
//	fp = fopen("data01.txt", "r");
//	if (fp == NULL) {
//		printf("file not found\n");
//		return;
//	}
//
//	while (!feof(fp)) {
//		fscanf(fp, "%d %d %d", &temp1, &temp2, &temp3);
//		insert_heap_edge(g, temp1, temp2, temp3);
//	}
//
//	kruskal(g);
//	printf(" = \n");
//	fclose(fp);
//
//	return 0;
//}