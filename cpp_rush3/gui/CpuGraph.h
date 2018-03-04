#ifndef CPUGRAPH_H
#define CPUGRAPH_H

#include "Graph.h"
#include <QtCharts/QChart>
#include <QtCharts/QtCharts>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include <QtCore/QTimer>


class CpuGraph : public Graph
{
public:
	CpuGraph(QChart::QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
	virtual ~CpuGraph();
};

#endif // CPUGRAPH_H
