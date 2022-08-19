#pragma once
#include"Order.h"
#include "Product.h"
#include"User.h"

namespace InventoryManagmentSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ Dashbrd;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ User;


	private: System::Windows::Forms::Button^ Order;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Employees;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Dashbrd = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->User = (gcnew System::Windows::Forms::Button());
			this->Order = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Employees = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.5F));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(-6, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(249, 56);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Orders";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// Dashbrd
			// 
			this->Dashbrd->BackColor = System::Drawing::Color::Transparent;
			this->Dashbrd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Dashbrd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.5F));
			this->Dashbrd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Dashbrd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dashbrd.Image")));
			this->Dashbrd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Dashbrd->Location = System::Drawing::Point(-6, 199);
			this->Dashbrd->Name = L"Dashbrd";
			this->Dashbrd->Size = System::Drawing::Size(249, 56);
			this->Dashbrd->TabIndex = 37;
			this->Dashbrd->Text = L"Dashboard";
			this->Dashbrd->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Dashbrd->UseVisualStyleBackColor = false;
			this->Dashbrd->Click += gcnew System::EventHandler(this, &Dashboard::Dashbrd_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(257, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(900, 2);
			this->panel1->TabIndex = 36;
			// 
			// Title
			// 
			this->Title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Title.Image")));
			this->Title->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Title->Location = System::Drawing::Point(257, 12);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(216, 48);
			this->Title->TabIndex = 35;
			this->Title->Text = L"Dashboard";
			this->Title->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(221, 168);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 34;
			this->pictureBox2->TabStop = false;
			// 
			// User
			// 
			this->User->BackColor = System::Drawing::Color::Black;
			this->User->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->User->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.5F));
			this->User->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->User->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"User.Image")));
			this->User->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->User->Location = System::Drawing::Point(-2, 435);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(249, 56);
			this->User->TabIndex = 32;
			this->User->Text = L"Users";
			this->User->UseVisualStyleBackColor = false;
			this->User->Click += gcnew System::EventHandler(this, &Dashboard::User_Click);
			// 
			// Order
			// 
			this->Order->BackColor = System::Drawing::Color::Black;
			this->Order->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Order->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.5F));
			this->Order->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Order->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Order.Image")));
			this->Order->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Order->Location = System::Drawing::Point(-2, 359);
			this->Order->Name = L"Order";
			this->Order->Size = System::Drawing::Size(249, 56);
			this->Order->TabIndex = 31;
			this->Order->Text = L"Products";
			this->Order->UseVisualStyleBackColor = false;
			this->Order->Click += gcnew System::EventHandler(this, &Dashboard::Order_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-6, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 760);
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// Employees
			// 
			this->Employees->BackColor = System::Drawing::Color::Black;
			this->Employees->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Employees->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.5F));
			this->Employees->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Employees->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Employees.Image")));
			this->Employees->Location = System::Drawing::Point(-163, 631);
			this->Employees->Name = L"Employees";
			this->Employees->Size = System::Drawing::Size(396, 56);
			this->Employees->TabIndex = 33;
			this->Employees->Text = L"Logout";
			this->Employees->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Employees->UseVisualStyleBackColor = false;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1103, 699);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Dashbrd);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Employees);
			this->Controls->Add(this->User);
			this->Controls->Add(this->Order);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		InventoryManagmentSystem::Order^ OrderForm = gcnew InventoryManagmentSystem::Order;
		this->Hide();
		OrderForm->ShowDialog();

		this->Show();
	}
private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Dashbrd_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Order_Click(System::Object^ sender, System::EventArgs^ e) {
	InventoryManagmentSystem::Product^ ProductForm = gcnew InventoryManagmentSystem::Product;
	this->Hide();
	ProductForm->ShowDialog();

	this->Show();
}
private: System::Void User_Click(System::Object^ sender, System::EventArgs^ e) {
	InventoryManagmentSystem::User^ UserForm = gcnew InventoryManagmentSystem::User;
	this->Hide();
	UserForm->ShowDialog();

	this->Show();

}
};
}
