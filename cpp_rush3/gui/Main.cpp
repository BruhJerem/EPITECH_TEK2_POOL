#include "MainWindow.h"
#include "CPUGraph.h"
#include "RamGraph.h"
#include <QApplication>
#include <QGridLayout>

int main(int argc, char *argv[])
{
	QApplication application(argc, argv);
	MainWindow window;
	QWidget box_layout;
	QGridLayout *layout = new QGridLayout;

	CPUGraph *cpu_graph = new CPUGraph("CPU 0");
	CPUGraph *cpu_graph1 = new CPUGraph("CPU 1");
	CPUGraph *cpu_graph2 = new CPUGraph("CPU 2");
	CPUGraph *cpu_graph3 = new CPUGraph("CPU 3");
	RamGraph *ram_graph = new RamGraph("RAM");

	QChartView cpu_graph_view(cpu_graph);
	QChartView cpu_graph_view1(cpu_graph1);
	QChartView cpu_graph_view2(cpu_graph2);
	QChartView cpu_graph_view3(cpu_graph3);
	QChartView ram_graph_view(ram_graph);
	cpu_graph_view.setRenderHint(QPainter::Antialiasing);
	cpu_graph_view1.setRenderHint(QPainter::Antialiasing);
	cpu_graph_view2.setRenderHint(QPainter::Antialiasing);
	cpu_graph_view3.setRenderHint(QPainter::Antialiasing);
	ram_graph_view.setRenderHint(QPainter::Antialiasing);

	layout->addWidget(&cpu_graph_view, 0, 0);
	layout->addWidget(&cpu_graph_view1, 0, 1);
	layout->addWidget(&cpu_graph_view2, 0, 2);
	layout->addWidget(&cpu_graph_view3, 0, 3);
	layout->addWidget(&ram_graph_view, 1, 0);

	box_layout.setLayout(layout);

	window.setCentralWidget(&box_layout);
	window.setMinimumSize(1600, 800);
	window.show();

	return application.exec();
}
