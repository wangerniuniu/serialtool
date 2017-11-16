#include "serialtool.h"
#include <QtWidgets/QApplication>
#include <QtSerialPort/QSerialPort>  
#include <QtSerialPort/QSerialPortInfo>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	serialtool w;
	
	w.show();
	return a.exec();
}
