#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Pages {

	/// <summary>
	/// Summary for users0
	/// </summary>
	public ref class users0 : public System::Windows::Forms::UserControl
	{
	public:
		users0(void)
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
		~users0()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ dasbhoard1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(users0::typeid));
			this->dasbhoard1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dasbhoard1))->BeginInit();
			this->SuspendLayout();
			// 
			// dasbhoard1
			// 
			this->dasbhoard1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dasbhoard1.BackgroundImage")));
			this->dasbhoard1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->dasbhoard1->Location = System::Drawing::Point(0, 0);
			this->dasbhoard1->Name = L"dasbhoard1";
			this->dasbhoard1->Size = System::Drawing::Size(170, 42);
			this->dasbhoard1->TabIndex = 3;
			this->dasbhoard1->TabStop = false;
			// 
			// users0
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->dasbhoard1);
			this->Name = L"users0";
			this->Size = System::Drawing::Size(169, 44);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dasbhoard1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	};
}