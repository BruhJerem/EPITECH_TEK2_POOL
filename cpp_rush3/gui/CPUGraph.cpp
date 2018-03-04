#include "CPUGraph.h"

CPUGraph::CPUGraph(const QString title):
	Graph(title)
{
	axisY()->setRange(0, 100);
}

CPUGraph::~CPUGraph()
{

}
