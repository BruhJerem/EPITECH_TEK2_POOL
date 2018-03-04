#include "RamGraph.h"

RamGraph::RamGraph(const QString title):
	Graph(title)
{
	axisY()->setRange(0, 8);
}

RamGraph::~RamGraph()
{

}
