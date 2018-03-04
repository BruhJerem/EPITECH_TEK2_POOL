#include "Graph.h"
#include <QtCharts/QChart>
#include <QtCharts/QAbstractAxis>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include <QtCore/QRandomGenerator>
#include <QtCore/QDebug>

Graph::Graph(const QString title):
	QChart(QChart::ChartTypeCartesian, 0, 0),
	m_series(0),
	m_axis(new QValueAxis),
	m_step(0),
	m_x(5),
	m_y(1)
{
	QObject::connect(&m_timer, &QTimer::timeout, this, &Graph::handleTimeout);
	m_timer.setInterval(1000);

	QPen pen(Qt::green);
	pen.setWidth(3);

	m_series = new QSplineSeries(this);
	QPen green(Qt::red);
	green.setWidth(3);
	m_series->setPen(green);
	m_series->append(m_x, m_y);

	addSeries(m_series);
	createDefaultAxes();
	setAxisX(m_axis, m_series);
	m_axis->setTickCount(5);

	this->legend()->hide();
	this->setTitle(title);
	this->axisX()->hide();
	this->setAnimationOptions(QChart::AllAnimations);
	this->setTheme(QChart::ChartThemeDark);

	m_timer.start();
}

Graph::~Graph()
{

}

void Graph::handleTimeout()
{
    qreal x = plotArea().width() / m_axis->tickCount();
    qreal y = (m_axis->max() - m_axis->min()) / m_axis->tickCount();
    m_x += y;
    m_y = QRandomGenerator::global()->bounded(60) - 2.5;
    m_series->append(m_x, m_y);
    scroll(x, 0);
    if (m_x == 100)
	m_timer.stop();
}
