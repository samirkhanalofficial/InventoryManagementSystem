#pragma once

namespace InventoryManagmentSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ PhoneNo;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Emp_name;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ Email;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ Password;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ ConformPassword;


	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ Log_In;
	private: System::Windows::Forms::LinkLabel^ ForgetPassword;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->PhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Emp_name = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->ConformPassword = (gcnew System::Windows::Forms::TextBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->Log_In = (gcnew System::Windows::Forms::Button());
			this->ForgetPassword = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-3, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(398, 449);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(401, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(247, 48);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Register Here";
			this->label4->Click += gcnew System::EventHandler(this, &Register::label4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.75F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(403, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 35);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Employee Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.75F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(403, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 35);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Phone Number";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->ForeColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(411, 203);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(268, 2);
			this->panel2->TabIndex = 18;
			// 
			// PhoneNo
			// 
			this->PhoneNo->BackColor = System::Drawing::Color::Black;
			this->PhoneNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PhoneNo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->PhoneNo->ForeColor = System::Drawing::Color::White;
			this->PhoneNo->Location = System::Drawing::Point(411, 177);
			this->PhoneNo->Name = L"PhoneNo";
			this->PhoneNo->Size = System::Drawing::Size(269, 23);
			this->PhoneNo->TabIndex = 17;
			this->PhoneNo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Register::PhoneNo_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.75F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(405, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 35);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Email";
			// 
			// Emp_name
			// 
			this->Emp_name->BackColor = System::Drawing::Color::Black;
			this->Emp_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Emp_name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->Emp_name->ForeColor = System::Drawing::Color::White;
			this->Emp_name->Location = System::Drawing::Point(408, 107);
			this->Emp_name->Name = L"Emp_name";
			this->Emp_name->Size = System::Drawing::Size(269, 23);
			this->Emp_name->TabIndex = 14;
			this->Emp_name->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Register::Emp_name_KeyDown);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(408, 133);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(268, 2);
			this->panel1->TabIndex = 15;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->ForeColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(410, 270);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(268, 2);
			this->panel3->TabIndex = 21;
			// 
			// Email
			// 
			this->Email->BackColor = System::Drawing::Color::Black;
			this->Email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->Email->ForeColor = System::Drawing::Color::White;
			this->Email->Location = System::Drawing::Point(410, 244);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(269, 23);
			this->Email->TabIndex = 20;
			this->Email->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Register::Email_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.75F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(403, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 35);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Password";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->ForeColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(408, 342);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(268, 2);
			this->panel4->TabIndex = 23;
			// 
			// Password
			// 
			this->Password->BackColor = System::Drawing::Color::Black;
			this->Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->Password->ForeColor = System::Drawing::Color::White;
			this->Password->Location = System::Drawing::Point(408, 316);
			this->Password->Name = L"Password";
			this->Password->PasswordChar = '*';
			this->Password->Size = System::Drawing::Size(269, 23);
			this->Password->TabIndex = 22;
			this->Password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Register::Password_KeyDown);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.75F));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(405, 347);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(216, 35);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Confirm Password";
			this->label6->Click += gcnew System::EventHandler(this, &Register::label6_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->ForeColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(410, 414);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(268, 2);
			this->panel5->TabIndex = 28;
			// 
			// ConformPassword
			// 
			this->ConformPassword->BackColor = System::Drawing::Color::Black;
			this->ConformPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ConformPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->ConformPassword->ForeColor = System::Drawing::Color::White;
			this->ConformPassword->Location = System::Drawing::Point(409, 393);
			this->ConformPassword->Name = L"ConformPassword";
			this->ConformPassword->PasswordChar = '*';
			this->ConformPassword->Size = System::Drawing::Size(269, 23);
			this->ConformPassword->TabIndex = 27;
			this->ConformPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Register::ConformPassword_KeyDown);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Black;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.75F));
			this->Exit->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Exit->Location = System::Drawing::Point(538, 460);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(126, 35);
			this->Exit->TabIndex = 30;
			this->Exit->Text = L"Exit";
			this->Exit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Register::Exit_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(410, 422);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(95, 19);
			this->checkBox2->TabIndex = 32;
			this->checkBox2->Text = L"I agree to the";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// Log_In
			// 
			this->Log_In->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->Log_In->FlatAppearance->BorderSize = 0;
			this->Log_In->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Log_In->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.75F));
			this->Log_In->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Log_In->Location = System::Drawing::Point(408, 460);
			this->Log_In->Name = L"Log_In";
			this->Log_In->Size = System::Drawing::Size(109, 35);
			this->Log_In->TabIndex = 33;
			this->Log_In->Text = L"Register";
			this->Log_In->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Log_In->UseVisualStyleBackColor = false;
			// 
			// ForgetPassword
			// 
			this->ForgetPassword->AutoSize = true;
			this->ForgetPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForgetPassword->LinkColor = System::Drawing::Color::DeepSkyBlue;
			this->ForgetPassword->Location = System::Drawing::Point(499, 424);
			this->ForgetPassword->Name = L"ForgetPassword";
			this->ForgetPassword->Size = System::Drawing::Size(122, 13);
			this->ForgetPassword->TabIndex = 34;
			this->ForgetPassword->TabStop = true;
			this->ForgetPassword->Text = L"Terms and Conditions.";
			this->ForgetPassword->VisitedLinkColor = System::Drawing::Color::White;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(743, 516);
			this->Controls->Add(this->ForgetPassword);
			this->Controls->Add(this->Log_In);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->ConformPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->PhoneNo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Emp_name);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Register_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Register::Close();

}
private: System::Void Emp_name_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		PhoneNo->Focus();
}
private: System::Void PhoneNo_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		Email->Focus();
}
private: System::Void Email_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		Password->Focus();
}
private: System::Void Password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		ConformPassword->Focus();
}
private: System::Void ConformPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
}
};
}
