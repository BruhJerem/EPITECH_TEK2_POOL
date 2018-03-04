#include "CpuGraph.h"
#include <QtCharts/QChart>
#include <QtCharts/QAbstractAxis>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include <QtCore/QRandomGenerator>
#include <QtCore/QDebug>

CpuGraph::CpuGraph(QGraphicsItem *parent, Qt::WindowFlags wFlags):
	Graph(parent, wFlags)
{
	this->setTitle("CPU");
}

CpuGraph::~CpuGraph()
{

}
