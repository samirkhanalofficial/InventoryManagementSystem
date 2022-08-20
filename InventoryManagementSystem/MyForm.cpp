#include "MyForm.h"
#include "Dashboard.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	InventoryManagementSystem::MyForm myform;
	Application::Run(% myform);
}