#pragma once
namespace InventoryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Form^ loginform;

	public:

	public:







	public:
		
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Dashboard(Form^ temp)
		{
			InitializeComponent();
			loginform = temp;
			

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;


	protected:


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;


























	private: System::Windows::Forms::Panel^ panel2;
	private: Pages::DashboardScreen^ dashboardScreen1;
	private: Pages::UserScreen^ userScreen1;
	private: Pages::ProductsSCreen^ productsSCreen1;
	private: Pages::OrdersScreen^ ordersScreen1;
	private: System::Windows::Forms::Panel^ panel6;
	private: Pages::Users1^ users11;
	private: Pages::users0^ users01;
	private: System::Windows::Forms::Panel^ panel5;
	private: Pages::products0^ products00;
	private: Pages::products1^ products01;
	private: System::Windows::Forms::Panel^ panel4;
	private: Pages::orders1^ orders01;
	private: Pages::orders0^ orders11;
	private: System::Windows::Forms::Panel^ panel3;
	private: Pages::dashboard0^ dashboard01;
	private: Pages::dahhboard1^ dahhboard11;


















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->users11 = (gcnew Pages::Users1());
			this->users01 = (gcnew Pages::users0());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->products01 = (gcnew Pages::products1());
			this->products00 = (gcnew Pages::products0());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->orders01 = (gcnew Pages::orders1());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dahhboard11 = (gcnew Pages::dahhboard1());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->orders11 = (gcnew Pages::orders0());
			this->dashboard01 = (gcnew Pages::dashboard0());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dashboardScreen1 = (gcnew Pages::DashboardScreen());
			this->ordersScreen1 = (gcnew Pages::OrdersScreen());
			this->productsSCreen1 = (gcnew Pages::ProductsSCreen());
			this->userScreen1 = (gcnew Pages::UserScreen());
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(259, 853);
			this->panel1->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->users11);
			this->panel6->Location = System::Drawing::Point(12, 407);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(247, 63);
			this->panel6->TabIndex = 9;
			this->panel6->Click += gcnew System::EventHandler(this, &Dashboard::usersopen);
			// 
			// users11
			// 
			this->users11->BackColor = System::Drawing::Color::Transparent;
			this->users11->Location = System::Drawing::Point(0, -4);
			this->users11->Name = L"users11";
			this->users11->Size = System::Drawing::Size(172, 48);
			this->users11->TabIndex = 1;
			this->users11->Click += gcnew System::EventHandler(this, &Dashboard::usersopen);
			// 
			// users01
			// 
			this->users01->BackColor = System::Drawing::Color::Transparent;
			this->users01->Location = System::Drawing::Point(0, 0);
			this->users01->Name = L"users01";
			this->users01->Size = System::Drawing::Size(169, 44);
			this->users01->TabIndex = 0;
			this->users01->Click += gcnew System::EventHandler(this, &Dashboard::usersopen);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->products01);
			this->panel5->Controls->Add(this->products00);
			this->panel5->Location = System::Drawing::Point(12, 328);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(247, 73);
			this->panel5->TabIndex = 8;
			this->panel5->Click += gcnew System::EventHandler(this, &Dashboard::productsopen);
			// 
			// products01
			// 
			this->products01->BackColor = System::Drawing::Color::Transparent;
			this->products01->Location = System::Drawing::Point(2, 16);
			this->products01->Name = L"products01";
			this->products01->Size = System::Drawing::Size(170, 44);
			this->products01->TabIndex = 0;
			this->products01->Click += gcnew System::EventHandler(this, &Dashboard::productsopen);
			// 
			// products00
			// 
			this->products00->BackColor = System::Drawing::Color::Transparent;
			this->products00->Location = System::Drawing::Point(3, 16);
			this->products00->Name = L"products00";
			this->products00->Size = System::Drawing::Size(170, 44);
			this->products00->TabIndex = 2;
			this->products00->Click += gcnew System::EventHandler(this, &Dashboard::productsopen);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->orders01);
			this->panel4->Location = System::Drawing::Point(12, 256);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(247, 66);
			this->panel4->TabIndex = 7;
			this->panel4->Click += gcnew System::EventHandler(this, &Dashboard::ordersopen);
			// 
			// orders01
			// 
			this->orders01->BackColor = System::Drawing::Color::Transparent;
			this->orders01->Location = System::Drawing::Point(6, 11);
			this->orders01->Name = L"orders01";
			this->orders01->Size = System::Drawing::Size(174, 52);
			this->orders01->TabIndex = 0;
			this->orders01->Click += gcnew System::EventHandler(this, &Dashboard::ordersopen);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dashboard01);
			this->panel3->Location = System::Drawing::Point(12, 184);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(244, 66);
			this->panel3->TabIndex = 6;
			this->panel3->Click += gcnew System::EventHandler(this, &Dashboard::dashboardopen);
			// 
			// dahhboard11
			// 
			this->dahhboard11->BackColor = System::Drawing::Color::Transparent;
			this->dahhboard11->Location = System::Drawing::Point(4, 14);
			this->dahhboard11->Name = L"dahhboard11";
			this->dahhboard11->Size = System::Drawing::Size(176, 46);
			this->dahhboard11->TabIndex = 0;
			this->dahhboard11->Click += gcnew System::EventHandler(this, &Dashboard::dashboardopen);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(57, 814);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(125, 36);
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Dashboard::pictureBox5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-24, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(324, 166);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// orders11
			// 
			this->orders11->BackColor = System::Drawing::Color::Transparent;
			this->orders11->Location = System::Drawing::Point(4, 11);
			this->orders11->Name = L"orders11";
			this->orders11->Size = System::Drawing::Size(171, 45);
			this->orders11->TabIndex = 1;
			this->orders11->Click += gcnew System::EventHandler(this, &Dashboard::ordersopen);
			// 
			// dashboard01
			// 
			this->dashboard01->BackColor = System::Drawing::Color::Transparent;
			this->dashboard01->Location = System::Drawing::Point(8, 14);
			this->dashboard01->Name = L"dashboard01";
			this->dashboard01->Size = System::Drawing::Size(172, 44);
			this->dashboard01->TabIndex = 1;
			this->dashboard01->Click += gcnew System::EventHandler(this, &Dashboard::dashboardopen);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dashboardScreen1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(259, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1160, 853);
			this->panel2->TabIndex = 2;
			// 
			// dashboardScreen1
			// 
			this->dashboardScreen1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dashboardScreen1->Location = System::Drawing::Point(0, 0);
			this->dashboardScreen1->Name = L"dashboardScreen1";
			this->dashboardScreen1->Size = System::Drawing::Size(1160, 853);
			this->dashboardScreen1->TabIndex = 0;
			// 
			// ordersScreen1
			// 
			this->ordersScreen1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ordersScreen1->Location = System::Drawing::Point(0, 0);
			this->ordersScreen1->Name = L"ordersScreen1";
			this->ordersScreen1->Size = System::Drawing::Size(1141, 560);
			this->ordersScreen1->TabIndex = 1;
			// 
			// productsSCreen1
			// 
			this->productsSCreen1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->productsSCreen1->Location = System::Drawing::Point(0, 0);
			this->productsSCreen1->Name = L"productsSCreen1";
			this->productsSCreen1->Size = System::Drawing::Size(1162, 570);
			this->productsSCreen1->TabIndex = 2;
			// 
			// userScreen1
			// 
			this->userScreen1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->userScreen1->Location = System::Drawing::Point(0, 0);
			this->userScreen1->Name = L"userScreen1";
			this->userScreen1->Size = System::Drawing::Size(1138, 568);
			this->userScreen1->TabIndex = 3;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1419, 853);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1437, 900);
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	loginform->Show();
	this->Close();
}
	




private: System::Void dashboardopen(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Controls->Clear();
	this->panel2->Controls->Add(this->dashboardScreen1);
	resetSidebar();
	this->panel3->Controls->Clear();
	this->panel3->Controls->Add(this->dashboard01);
}
private: System::Void ordersopen(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Controls->Clear();
	this->panel2->Controls->Add(this->ordersScreen1);
	resetSidebar();
	this->panel4->Controls->Clear();
	this->panel4->Controls->Add(this->orders11);
	
}
private: System::Void productsopen(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Controls->Clear();
	this->panel2->Controls->Add(this->productsSCreen1);
	resetSidebar();
	this->panel5->Controls->Clear();
	this->panel5->Controls->Add(this->products00);
}
private: System::Void usersopen(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Controls->Clear();
	this->panel2->Controls->Add(this->userScreen1);
	resetSidebar();
	this->panel6->Controls->Clear();
	this->panel6->Controls->Add(this->users01);
}
private: System::Void resetSidebar() {
	this->panel3->Controls->Clear();
	this->panel4->Controls->Clear();
	this->panel5->Controls->Clear();
	this->panel6->Controls->Clear();

	this->panel3->Controls->Add(this->dahhboard11);
	this->panel4->Controls->Add(this->orders01);
	this->panel5->Controls->Add(this->products01);
	this->panel6->Controls->Add(this->users11);



}


};
}
