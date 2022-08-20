#pragma once
#include"../InventoryManagementSystem/userModel.h"
//
//# include <msclr/marshal_cppstd.h>

namespace Pages {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddUser
	/// </summary>
	public ref class AddUser : public System::Windows::Forms::Form
	{
	public:
		AddUser(void)
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
		~AddUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ confirmpassword;

	private: System::Windows::Forms::TextBox^ password;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ email;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ fullname;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ errormessage;
	private: System::Windows::Forms::Label^ successMessage;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddUser::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->confirmpassword = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->fullname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->errormessage = (gcnew System::Windows::Forms::Label());
			this->successMessage = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(464, 449);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(315, 41);
			this->button3->TabIndex = 91;
			this->button3->Text = L"Add Users";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AddUser::AddUserBtn);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(464, 102);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(315, 281);
			this->button1->TabIndex = 90;
			this->button1->Text = L"Add Picture";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(23, 351);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(288, 22);
			this->textBox4->TabIndex = 89;
			// 
			// confirmpassword
			// 
			this->confirmpassword->AutoSize = true;
			this->confirmpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmpassword->Location = System::Drawing::Point(19, 314);
			this->confirmpassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->confirmpassword->Name = L"confirmpassword";
			this->confirmpassword->Size = System::Drawing::Size(152, 20);
			this->confirmpassword->TabIndex = 88;
			this->confirmpassword->Text = L"Confirm  Password";
			this->confirmpassword->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(23, 268);
			this->password->Margin = System::Windows::Forms::Padding(4);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(288, 22);
			this->password->TabIndex = 87;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 233);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 20);
			this->label4->TabIndex = 86;
			this->label4->Text = L"Password";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(23, 182);
			this->email->Margin = System::Windows::Forms::Padding(4);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(288, 22);
			this->email->TabIndex = 85;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 146);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 84;
			this->label3->Text = L"Email";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// fullname
			// 
			this->fullname->Location = System::Drawing::Point(23, 102);
			this->fullname->Margin = System::Windows::Forms::Padding(4);
			this->fullname->Name = L"fullname";
			this->fullname->Size = System::Drawing::Size(288, 22);
			this->fullname->TabIndex = 83;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 79);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 20);
			this->label2->TabIndex = 82;
			this->label2->Text = L"Full Name";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(20, 6);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 54);
			this->label1->TabIndex = 81;
			this->label1->Text = L"Add User";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// errormessage
			// 
			this->errormessage->AutoSize = true;
			this->errormessage->ForeColor = System::Drawing::Color::Red;
			this->errormessage->Location = System::Drawing::Point(29, 403);
			this->errormessage->Name = L"errormessage";
			this->errormessage->Size = System::Drawing::Size(0, 16);
			this->errormessage->TabIndex = 92;
			// 
			// successMessage
			// 
			this->successMessage->AutoSize = true;
			this->successMessage->ForeColor = System::Drawing::Color::Lime;
			this->successMessage->Location = System::Drawing::Point(35, 413);
			this->successMessage->Name = L"successMessage";
			this->successMessage->Size = System::Drawing::Size(0, 16);
			this->successMessage->TabIndex = 93;
			// 
			// AddUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(823, 540);
			this->Controls->Add(this->successMessage);
			this->Controls->Add(this->errormessage);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->confirmpassword);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->fullname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AddUser";
			this->Text = L"AddUser";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddUserBtn(System::Object^ sender, System::EventArgs^ e) {
		/*this->errormessage->Text = "";
		this->successMessage->Text = "";
		msclr::interop::marshal_context context;
		char name[50],email[200], password[16],confirmpassword[16];
		strcpy(name, context.marshal_as<string>(this->fullname->Text).c_str());
		strcpy(email, context.marshal_as<string>(this->email->Text).c_str());
		strcpy(password, context.marshal_as<string>(this->password->Text).c_str());
		strcpy(confirmpassword, context.marshal_as<string>(this->password->Text).c_str());
		if (strcmp(password, confirmpassword) == 0) {
			User u;
			u.setUser(name, email, password);
			if (u.append()) {
				this->successMessage->Text = "user added.";

			}
			else {
				this->errormessage->Text = "user already exists.";
			}
		}
		else {
			this->errormessage->Text = "password didn't match.";
		}
		*/
	}
};
}
