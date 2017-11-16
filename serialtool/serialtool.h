#pragma once

#include <QtWidgets/QWidget>
#include "ui_serialtool.h" 
#include <QMainWindow>  
#include <QDebug>  
#include <QtSerialPort/QSerialPort>  
#include <QtSerialPort/QSerialPortInfo>

class serialtool : public QWidget
{
	Q_OBJECT

public:
	serialtool(QWidget *parent = Q_NULLPTR);
	void on_clearButton_clicked();
	void on_sendButton_clicked();
	void on_openButton_clicked();
	void Read_Data();
	void Save_Data();
private:
	Ui::serialtoolClass ui;
	QSerialPort *serial;
};
