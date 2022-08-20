#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Pages {

	/// <summary>
	/// Summary for UserItem
	/// </summary>
	public ref class UserItem : public System::Windows::Forms::UserControl
	{
	public:
		UserItem(void)
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
		~UserItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ stocks;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ price;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ isCurrentUser;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::PictureBox^ ProductImage;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserItem::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->stocks = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->price = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->isCurrentUser = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->ProductImage = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductImage))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(931, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 45);
			this->pictureBox1->TabIndex = 41;
			this->pictureBox1->TabStop = false;
			// 
			// stocks
			// 
			this->stocks->AutoSize = true;
			this->stocks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stocks->Location = System::Drawing::Point(124, 76);
			this->stocks->Name = L"stocks";
			this->stocks->Size = System::Drawing::Size(51, 20);
			this->stocks->TabIndex = 40;
			this->stocks->Text = L"*******";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(25, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 20);
			this->label5->TabIndex = 39;
			this->label5->Text = L"password :";
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->Location = System::Drawing::Point(105, 45);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(190, 20);
			this->price->TabIndex = 37;
			this->price->Text = L"support@samirk.com.np";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 20);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Email : ";
			// 
			// isCurrentUser
			// 
			this->isCurrentUser->AutoSize = true;
			this->isCurrentUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->isCurrentUser->ForeColor = System::Drawing::Color::LimeGreen;
			this->isCurrentUser->Location = System::Drawing::Point(25, 185);
			this->isCurrentUser->Name = L"isCurrentUser";
			this->isCurrentUser->Size = System::Drawing::Size(144, 20);
			this->isCurrentUser->TabIndex = 34;
			this->isCurrentUser->Text = L"( Current User )";
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(25, 25);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(109, 20);
			this->title->TabIndex = 33;
			this->title->Text = L"Samir Khanal";
			// 
			// ProductImage
			// 
			this->ProductImage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProductImage.BackgroundImage")));
			this->ProductImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ProductImage->Location = System::Drawing::Point(749, 0);
			this->ProductImage->Name = L"ProductImage";
			this->ProductImage->Size = System::Drawing::Size(233, 223);
			this->ProductImage->TabIndex = 32;
			this->ProductImage->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(175, 71);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(36, 20);
			this->linkLabel1->TabIndex = 42;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"edit";
			// 
			// UserItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->stocks);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->price);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->isCurrentUser);
			this->Controls->Add(this->title);
			this->Controls->Add(this->ProductImage);
			this->Name = L"UserItem";
			this->Size = System::Drawing::Size(982, 224);
			this->Load += gcnew System::EventHandler(this, &UserItem::UserItem_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserItem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
