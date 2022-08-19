#pragma once
#include"Main.h"
#include"Login.h"
#include"Order.h"
namespace InventoryManagmentSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::Button^ Supplier;
	private: System::Windows::Forms::Button^ Employees;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ Title;


	private: System::Windows::Forms::Panel^ panel1;










	private: System::Windows::Forms::Button^ Dashboard;
	private: System::Windows::Forms::Button^ Order;
	private: System::Windows::Forms::Button^ button1;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Supplier = (gcnew System::Windows::Forms::Button());
			this->Employees = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Dashboard = (gcnew System::Windows::Forms::Button());
			this->Order = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-6, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 760);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Main::pictureBox1_Click);
			// 
			// Supplier
			// 
			this->Supplier->BackColor = System::Drawing::Color::Black;
			this->Supplier->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Supplier->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.5F));
			this->Supplier->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Supplier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Supplier.Image")));
			this->Supplier->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Supplier->Location = System::Drawing::Point(-2, 435);
			this->Supplier->Name = L"Supplier";
			this->Supplier->Size = System::Drawing::Size(249, 56);
			this->Supplier->TabIndex = 4;
			this->Supplier->Text = L"Supplier";
			this->Supplier->UseVisualStyleBackColor = false;
			// 
			// Employees
			// 
			this->Employees->BackColor = System::Drawing::Color::Black;
			this->Employees->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Employees->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.5F));
			this->Employees->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Employees->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Employees.Image")));
			this->Employees->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Employees->Location = System::Drawing::Point(-2, 518);
			this->Employees->Name = L"Employees";
			this->Employees->Size = System::Drawing::Size(219, 56);
			this->Employees->TabIndex = 5;
			this->Employees->Text = L"Employees";
			this->Employees->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Employees->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(221, 168);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// Title
			// 
			this->Title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22));
			this->Title->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Title.Image")));
			this->Title->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Title->Location = System::Drawing::Point(257, 12);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(216, 48);
			this->Title->TabIndex = 7;
			this->Title->Text = L"Dashboard";
			this->Title->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(257, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(900, 2);
			this->panel1->TabIndex = 14;
			// 
			// Dashboard
			// 
			this->Dashboard->BackColor = System::Drawing::Color::Transparent;
			this->Dashboard->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Dashboard->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.5F));
			this->Dashboard->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Dashboard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dashboard.Image")));
			this->Dashboard->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Dashboard->Location = System::Drawing::Point(-2, 195);
			this->Dashboard->Name = L"Dashboard";
			this->Dashboard->Size = System::Drawing::Size(249, 56);
			this->Dashboard->TabIndex = 27;
			this->Dashboard->Text = L"Dashboard";
			this->Dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Dashboard->UseVisualStyleBackColor = false;
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
			this->Order->TabIndex = 3;
			this->Order->Text = L"Order";
			this->Order->UseVisualStyleBackColor = false;
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
			this->button1->Location = System::Drawing::Point(-2, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(249, 56);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Orders";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click_1);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1103, 699);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Dashboard);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Employees);
			this->Controls->Add(this->Supplier);
			this->Controls->Add(this->Order);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Main";
			this->Text = L"Quantity";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Subtitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void List_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
