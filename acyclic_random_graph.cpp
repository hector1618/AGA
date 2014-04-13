#include <ogdf/basic/Graph.h>
#include <ogdf/fileformats/GraphIO.h>
#include <ogdf/basic/graph_generators.h>
#include <ogdf/layered/DfsAcyclicSubgraph.h>
 
using namespace ogdf;
 
int main()
{
	Graph G;
	randomSimpleGraph(G, 10, 20);
	DfsAcyclicSubgraph DAS;
	DAS.callAndReverse(G);
	GraphIO::writeGML(G, "image.gml");
 
	return 0;
}
