// SeePage.cpp: главный файл проекта.
#include "stdafx.h"
#include "database_manager.h"
#include "Form1.h"
#include "logo.h"
#include "net_classWrtServer.h"
#include "cipher_manage.h"



using namespace SeePage;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Создание главного окна и его запуск
	Application::Run(gcnew logo());
	logo^ varianceWindow = gcnew logo();
	switch(varianceWindow->variance) {
	case 1:
	Application::Run(gcnew Form1());
	break;
	case 2:
	Application::Run(gcnew net_classWrtServer());
	break;
	case 3: 
	Application::Run(gcnew database_manager());
	break;
	case 4: 
	Application::Run(gcnew cipher_manage());
	break;
		default:
		MessageBox::Show("This variance = NULL!","Error!");
		break;
	}
	return 0;
}
