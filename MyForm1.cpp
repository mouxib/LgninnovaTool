#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LgninnovaTool::MyForm1 form;
	Application::Run(% form);
}
