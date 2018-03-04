#ifndef GRAPH_H
#define GRAPH_H

#include <QtCharts/QChart>
#include <QtCharts/QtCharts>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include <QtCore/QTimer>

class Graph : public QtCharts::QChart
{
public:
	Graph(const QString title = "");
	virtual ~Graph();

public slots:
	void handleTimeout();

protected:
	QTimer m_timer;
	QSplineSeries *m_series;
	QStringList m_titles;
	QValueAxis *m_axis;
	qreal m_step;
	qreal m_x;
	qreal m_y;
};

#endif // GRAPH_H
