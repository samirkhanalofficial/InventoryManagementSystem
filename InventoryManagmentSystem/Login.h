#pragma once

#include"Password.h"
#include"Register.h"
namespace InventoryManagmentSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ EmailBox;


	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::LinkLabel^ ForgetPassword;

	private: System::Windows::Forms::Button^ Log_In;
	private: System::Windows::Forms::Button^ Exit;



	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ Register;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ PasswordBox;


	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->EmailBox = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->ForgetPassword = (gcnew System::Windows::Forms::LinkLabel());
			this->Log_In = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->PasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.75F));
			this->label1->Location = System::Drawing::Point(417, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Email";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(418, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			this->label2->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			this->label3->Location = System::Drawing::Point(496, 329);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Not Register Yet\?";
			this->label3->Click += gcnew System::EventHandler(this, &Login::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(415, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 48);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Sign In";
			this->label4->Click += gcnew System::EventHandler(this, &Login::label4_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// EmailBox
			// 
			this->EmailBox->BackColor = System::Drawing::Color::Black;
			this->EmailBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EmailBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->EmailBox->ForeColor = System::Drawing::Color::White;
			this->EmailBox->Location = System::Drawing::Point(423, 146);
			this->EmailBox->Name = L"EmailBox";
			this->EmailBox->Size = System::Drawing::Size(269, 23);
			this->EmailBox->TabIndex = 6;
			this->EmailBox->TextChanged += gcnew System::EventHandler(this, &Login::EmailBox_TextChanged);
			this->EmailBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::EmailBox_KeyDown);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.75F));
			this->checkBox1->Location = System::Drawing::Point(421, 261);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(117, 17);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Rembember Email";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// ForgetPassword
			// 
			this->ForgetPassword->AutoSize = true;
			this->ForgetPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForgetPassword->LinkColor = System::Drawing::Color::DeepSkyBlue;
			this->ForgetPassword->Location = System::Drawing::Point(579, 261);
			this->ForgetPassword->Name = L"ForgetPassword";
			this->ForgetPassword->Size = System::Drawing::Size(113, 17);
			this->ForgetPassword->TabIndex = 9;
			this->ForgetPassword->TabStop = true;
			this->ForgetPassword->Text = L"Forgot Password\?";
			this->ForgetPassword->VisitedLinkColor = System::Drawing::Color::White;
			this->ForgetPassword->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::ForgetPassword_LinkClicked);
			// 
			// Log_In
			// 
			this->Log_In->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->Log_In->FlatAppearance->BorderSize = 0;
			this->Log_In->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Log_In->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.75F));
			this->Log_In->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Log_In->Location = System::Drawing::Point(421, 288);
			this->Log_In->Name = L"Log_In";
			this->Log_In->Size = System::Drawing::Size(271, 36);
			this->Log_In->TabIndex = 10;
			this->Log_In->Text = L"Log In";
			this->Log_In->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Log_In->UseVisualStyleBackColor = false;
			this->Log_In->Click += gcnew System::EventHandler(this, &Login::Exit_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Black;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.75F));
			this->Exit->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Exit->Location = System::Drawing::Point(425, 414);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(272, 36);
			this->Exit->TabIndex = 11;
			this->Exit->Text = L"Exit";
			this->Exit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Login::Exit_Click);
			// 
			// Register
			// 
			this->Register->BackColor = System::Drawing::Color::DodgerBlue;
			this->Register->FlatAppearance->BorderSize = 0;
			this->Register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Register->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.75F));
			this->Register->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Register->Location = System::Drawing::Point(425, 354);
			this->Register->Margin = System::Windows::Forms::Padding(0);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(269, 36);
			this->Register->TabIndex = 12;
			this->Register->Text = L"Register";
			this->Register->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Register->UseVisualStyleBackColor = false;
			this->Register->Click += gcnew System::EventHandler(this, &Login::Register_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(423, 172);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(268, 2);
			this->panel1->TabIndex = 13;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->ForeColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(421, 243);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(268, 2);
			this->panel2->TabIndex = 15;
			// 
			// PasswordBox
			// 
			this->PasswordBox->BackColor = System::Drawing::Color::Black;
			this->PasswordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->PasswordBox->ForeColor = System::Drawing::Color::White;
			this->PasswordBox->Location = System::Drawing::Point(421, 217);
			this->PasswordBox->Name = L"PasswordBox";
			this->PasswordBox->PasswordChar = '*';
			this->PasswordBox->Size = System::Drawing::Size(269, 23);
			this->PasswordBox->TabIndex = 14;
			this->PasswordBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::PassowrdBox_KeyDown);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(24, 55);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(398, 449);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(743, 516);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->PasswordBox);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Register);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Log_In);
			this->Controls->Add(this->ForgetPassword);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->EmailBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("The operation has been completed ", "Notification", MessageBoxButtons::OKCancel, MessageBoxIcon::Asterisk);
	this->Close();
	
}
private: System::Void EmailBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		PasswordBox->Focus();
}
private: System::Void PassowrdBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		Exit->PerformClick();
}
private: System::Void EmailBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ForgetPassword_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
     Password^ PasswordForm = gcnew Password;
	this->Hide();
	PasswordForm->ShowDialog();
	this->Show();
	
	
}

private: System::Void Register_Click(System::Object^ sender, System::EventArgs^ e) {
	InventoryManagmentSystem:: Register^ RegisterForm=gcnew InventoryManagmentSystem::Register;
	this->Hide();
	RegisterForm->ShowDialog();

	this->Show();
	
	

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
