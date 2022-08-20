#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Pages {

	/// <summary>
	/// Summary for ProductItem
	/// </summary>
	public ref class ProductItem : public System::Windows::Forms::UserControl
	{
	public:
		ProductItem(void)
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
		~ProductItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ stocks;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ description;
	private: System::Windows::Forms::Label^ price;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::PictureBox^ ProductImage;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductItem::typeid));
			this->stocks = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->price = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->ProductImage = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// stocks
			// 
			this->stocks->AutoSize = true;
			this->stocks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stocks->Location = System::Drawing::Point(117, 71);
			this->stocks->Name = L"stocks";
			this->stocks->Size = System::Drawing::Size(27, 20);
			this->stocks->TabIndex = 30;
			this->stocks->Text = L"35";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(35, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 20);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Stocks :";
			// 
			// description
			// 
			this->description->BackColor = System::Drawing::Color::White;
			this->description->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->description->Enabled = false;
			this->description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description->Location = System::Drawing::Point(39, 116);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(712, 97);
			this->description->TabIndex = 28;
			this->description->Text = L"Nike Summer Sports shoes is the collection of best selling shoes in Nepal by Nike"
				L".Its is a branded shoe with high quality build materials.";
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->Location = System::Drawing::Point(134, 45);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(45, 20);
			this->price->TabIndex = 27;
			this->price->Text = L"3999";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(97, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Rs.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(33, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 20);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Price :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 20);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Description :";
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(33, 25);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(135, 20);
			this->title->TabIndex = 23;
			this->title->Text = L"Nike Shoes 3162";
			// 
			// ProductImage
			// 
			this->ProductImage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProductImage.BackgroundImage")));
			this->ProductImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ProductImage->Location = System::Drawing::Point(757, 0);
			this->ProductImage->Name = L"ProductImage";
			this->ProductImage->Size = System::Drawing::Size(233, 223);
			this->ProductImage->TabIndex = 22;
			this->ProductImage->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(939, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 45);
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// ProductItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->stocks);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->description);
			this->Controls->Add(this->price);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->title);
			this->Controls->Add(this->ProductImage);
			this->Name = L"ProductItem";
			this->Size = System::Drawing::Size(990, 225);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
