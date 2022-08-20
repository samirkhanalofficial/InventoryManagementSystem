#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Pages {

	/// <summary>
	/// Summary for DashboardScreen
	/// </summary>
	public ref class DashboardScreen : public System::Windows::Forms::UserControl
	{
	public:
		DashboardScreen(void)
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
		~DashboardScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ total_users_count;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ totalproduct_count;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ total_products_count;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->total_users_count = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->totalproduct_count = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->total_products_count = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 36);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Dashboard";
			// 
			// total_users_count
			// 
			this->total_users_count->AutoSize = true;
			this->total_users_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->total_users_count->Location = System::Drawing::Point(95, 60);
			this->total_users_count->Name = L"total_users_count";
			this->total_users_count->Size = System::Drawing::Size(55, 39);
			this->total_users_count->TabIndex = 1;
			this->total_users_count->Text = L"54";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label7->Location = System::Drawing::Point(53, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(154, 31);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Total Users";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel6->Controls->Add(this->label7);
			this->panel6->Controls->Add(this->total_users_count);
			this->panel6->Location = System::Drawing::Point(795, 95);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(246, 183);
			this->panel6->TabIndex = 8;
			// 
			// totalproduct_count
			// 
			this->totalproduct_count->AutoSize = true;
			this->totalproduct_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->totalproduct_count->Location = System::Drawing::Point(95, 60);
			this->totalproduct_count->Name = L"totalproduct_count";
			this->totalproduct_count->Size = System::Drawing::Size(55, 39);
			this->totalproduct_count->TabIndex = 1;
			this->totalproduct_count->Text = L"54";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label3->Location = System::Drawing::Point(32, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Total Products";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->totalproduct_count);
			this->panel3->Location = System::Drawing::Point(62, 95);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(246, 183);
			this->panel3->TabIndex = 6;
			// 
			// total_products_count
			// 
			this->total_products_count->AutoSize = true;
			this->total_products_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->total_products_count->Location = System::Drawing::Point(96, 60);
			this->total_products_count->Name = L"total_products_count";
			this->total_products_count->Size = System::Drawing::Size(55, 39);
			this->total_products_count->TabIndex = 1;
			this->total_products_count->Text = L"54";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Location = System::Drawing::Point(47, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 31);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Products Sold";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->total_products_count);
			this->panel4->Location = System::Drawing::Point(434, 95);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(246, 183);
			this->panel4->TabIndex = 7;
			// 
			// DashboardScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->label1);
			this->Name = L"DashboardScreen";
			this->Size = System::Drawing::Size(1113, 566);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
