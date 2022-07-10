#pragma once


namespace InventoryManagmentSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Password
	/// </summary>
	public ref class Password : public System::Windows::Forms::Form
	{
	public:
		Password(void)
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
		~Password()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ NewPassword;
	private: System::Windows::Forms::Label^ ConfirmPassword;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ ConformPassword;

	private: System::Windows::Forms::Button^ Conform;
	private: System::Windows::Forms::Button^ Exit;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Password::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->NewPassword = (gcnew System::Windows::Forms::TextBox());
			this->ConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ConformPassword = (gcnew System::Windows::Forms::TextBox());
			this->Conform = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-5, 26);
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
			this->label4->Location = System::Drawing::Point(399, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(280, 48);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Reset Password";
			this->label4->Click += gcnew System::EventHandler(this, &Password::label4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(402, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 28);
			this->label2->TabIndex = 6;
			this->label2->Text = L"New Password";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(407, 151);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(268, 2);
			this->panel1->TabIndex = 15;
			// 
			// NewPassword
			// 
			this->NewPassword->BackColor = System::Drawing::Color::Black;
			this->NewPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->NewPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->NewPassword->ForeColor = System::Drawing::Color::White;
			this->NewPassword->Location = System::Drawing::Point(407, 130);
			this->NewPassword->Name = L"NewPassword";
			this->NewPassword->PasswordChar = '*';
			this->NewPassword->Size = System::Drawing::Size(269, 23);
			this->NewPassword->TabIndex = 14;
			this->NewPassword->TextChanged += gcnew System::EventHandler(this, &Password::NewPassword_TextChanged);
			this->NewPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Password::NewPassword_KeyDown);
			this->NewPassword->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Password::NewPassword_MouseDown);
			// 
			// ConfirmPassword
			// 
			this->ConfirmPassword->AutoSize = true;
			this->ConfirmPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConfirmPassword->Location = System::Drawing::Point(402, 179);
			this->ConfirmPassword->Name = L"ConfirmPassword";
			this->ConfirmPassword->Size = System::Drawing::Size(168, 28);
			this->ConfirmPassword->TabIndex = 16;
			this->ConfirmPassword->Text = L"Confirm Password";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->ForeColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(408, 240);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(268, 2);
			this->panel2->TabIndex = 18;
			// 
			// ConformPassword
			// 
			this->ConformPassword->BackColor = System::Drawing::Color::Black;
			this->ConformPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ConformPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->ConformPassword->ForeColor = System::Drawing::Color::White;
			this->ConformPassword->Location = System::Drawing::Point(407, 219);
			this->ConformPassword->Name = L"ConformPassword";
			this->ConformPassword->PasswordChar = '*';
			this->ConformPassword->Size = System::Drawing::Size(269, 23);
			this->ConformPassword->TabIndex = 17;
			this->ConformPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Password::ConformPassword_KeyDown);
			// 
			// Conform
			// 
			this->Conform->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->Conform->FlatAppearance->BorderSize = 0;
			this->Conform->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Conform->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.75F));
			this->Conform->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Conform->Location = System::Drawing::Point(407, 262);
			this->Conform->Name = L"Conform";
			this->Conform->Size = System::Drawing::Size(112, 35);
			this->Conform->TabIndex = 19;
			this->Conform->Text = L"Confirm";
			this->Conform->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Conform->UseVisualStyleBackColor = false;
			
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Black;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.75F));
			this->Exit->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Exit->Location = System::Drawing::Point(537, 262);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(126, 35);
			this->Exit->TabIndex = 20;
			this->Exit->Text = L"Exit";
			this->Exit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Password::Exit_Click);
			// 
			// Password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(743, 516);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Conform);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->ConformPassword);
			this->Controls->Add(this->ConfirmPassword);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->NewPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"Password";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reset Password";
			this->Load += gcnew System::EventHandler(this, &Password::Password_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Password_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void NewPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NewPassword_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
}

private: System::Void NewPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		ConformPassword->Focus();

}
private: System::Void ConformPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Password::Close();
}
};
}
