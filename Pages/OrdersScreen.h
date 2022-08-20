#pragma once
#include"OrderItem.h"
#include"AddOrder.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;



namespace Pages {

	/// <summary>
	/// Summary for OrdersScreen
	/// </summary>
	public ref class OrdersScreen : public System::Windows::Forms::UserControl
	{
	public:
		OrdersScreen(void)
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
		~OrdersScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Pages::OrderItem^ orderItem1;
	private: Pages::OrderItem^ orderItem2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrdersScreen::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->orderItem1 = (gcnew Pages::OrderItem());
			this->orderItem2 = (gcnew Pages::OrderItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 36);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Orders";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(997, 39);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 62);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &OrdersScreen::AddOrder);
			// 
			// orderItem1
			// 
			this->orderItem1->BackColor = System::Drawing::Color::White;
			this->orderItem1->Location = System::Drawing::Point(75, 117);
			this->orderItem1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->orderItem1->Name = L"orderItem1";
			this->orderItem1->Size = System::Drawing::Size(1005, 223);
			this->orderItem1->TabIndex = 8;
			// 
			// orderItem2
			// 
			this->orderItem2->BackColor = System::Drawing::Color::White;
			this->orderItem2->Location = System::Drawing::Point(75, 363);
			this->orderItem2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->orderItem2->Name = L"orderItem2";
			this->orderItem2->Size = System::Drawing::Size(1005, 223);
			this->orderItem2->TabIndex = 9;
			// 
			// OrdersScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->orderItem2);
			this->Controls->Add(this->orderItem1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"OrdersScreen";
			this->Size = System::Drawing::Size(1141, 560);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	private: System::Void AddOrder(System::Object^ sender, System::EventArgs^ e) {
		Pages::AddOrder^ Addorder = gcnew Pages::AddOrder();
		Addorder->Show();

	}
};
}
