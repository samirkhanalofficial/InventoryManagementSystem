#include "Login.h"
#include "Dashboard.h"
#include "Order.h"
#include "Product.h"





using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	InventoryManagmentSystem::Login form;
	Application::Run(% form);


}

