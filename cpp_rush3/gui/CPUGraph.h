#ifndef CPU_GRAPH_H
#define CPU_GRAPH_H

#include "Graph.h"
#include <QtCharts/QChart>

class CPUGraph : public Graph
{
public:
	CPUGraph(const QString title = "");
	virtual ~CPUGraph();
};

#endif // CPU_GRAPH_H
