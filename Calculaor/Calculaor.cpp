// Calculaor.cpp : main project file.
// Completion: 60%
// todo formula checking, Labels, image for top right corner

#include "stdafx.h"
#include "Form1.h"

using namespace Calculaor;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
