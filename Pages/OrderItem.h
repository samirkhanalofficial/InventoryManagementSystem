#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Pages {

	/// <summary>
	/// Summary for OrderItem
	/// </summary>
	public ref class OrderItem : public System::Windows::Forms::UserControl
	{
	public:
		OrderItem(void)
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
		~OrderItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ ProductImage;
	protected:
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ buyerName;
	private: System::Windows::Forms::Label^ buyerPhone;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ price;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderItem::typeid));
			this->ProductImage = (gcnew System::Windows::Forms::PictureBox());
			this->title = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buyerName = (gcnew System::Windows::Forms::Label());
			this->buyerPhone = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->price = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductImage))->BeginInit();
			this->SuspendLayout();
			// 
			// ProductImage
			// 
			this->ProductImage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProductImage.BackgroundImage")));
			this->ProductImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ProductImage->Location = System::Drawing::Point(772, 0);
			this->ProductImage->Name = L"ProductImage";
			this->ProductImage->Size = System::Drawing::Size(233, 223);
			this->ProductImage->TabIndex = 0;
			this->ProductImage->TabStop = false;
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(37, 27);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(135, 20);
			this->title->TabIndex = 1;
			this->title->Text = L"Nike Shoes 3162";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Buyer :";
			// 
			// buyerName
			// 
			this->buyerName->AutoSize = true;
			this->buyerName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buyerName->Location = System::Drawing::Point(101, 47);
			this->buyerName->Name = L"buyerName";
			this->buyerName->Size = System::Drawing::Size(86, 20);
			this->buyerName->TabIndex = 3;
			this->buyerName->Text = L"Sumit Ray";
			// 
			// buyerPhone
			// 
			this->buyerPhone->AutoSize = true;
			this->buyerPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buyerPhone->Location = System::Drawing::Point(153, 67);
			this->buyerPhone->Name = L"buyerPhone";
			this->buyerPhone->Size = System::Drawing::Size(99, 20);
			this->buyerPhone->TabIndex = 5;
			this->buyerPhone->Text = L"9800500678";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Mobile No. :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(101, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Rs.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Price :";
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->Location = System::Drawing::Point(138, 87);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(45, 20);
			this->price->TabIndex = 8;
			this->price->Text = L"3999";
			// 
			// OrderItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->price);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->buyerPhone);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buyerName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->title);
			this->Controls->Add(this->ProductImage);
			this->Name = L"OrderItem";
			this->Size = System::Drawing::Size(1005, 223);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
