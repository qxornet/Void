#include "Form1.h"
#pragma once



using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SeePage {

	/// <summary>
	/// Сводка для logo
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class logo : public System::Windows::Forms::Form
	{ 
	public: static int variance;

	public:  
		logo(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~logo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;













	private: System::Windows::Forms::Timer^  timer3;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;












	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(logo::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			// 
			// timer2
			// 
			this->timer2->Interval = 2000;
			this->timer2->Tick += gcnew System::EventHandler(this, &logo::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Tick += gcnew System::EventHandler(this, &logo::timer3_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::OrangeRed;
			this->label5->Location = System::Drawing::Point(445, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Username:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(626, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"X";
			this->label8->Click += gcnew System::EventHandler(this, &logo::label8_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox1->Location = System::Drawing::Point(509, 231);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &logo::textBox1_KeyDown);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(465, 348);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Invalid username or password!";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::OrangeRed;
			this->label6->Location = System::Drawing::Point(447, 272);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Password:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::OrangeRed;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::OrangeRed;
			this->button1->Location = System::Drawing::Point(521, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &logo::button1_Click);
			this->button1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &logo::button1_KeyDown);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Location = System::Drawing::Point(330, 162);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(96, 90);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &logo::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Enabled = false;
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(210, 162);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(96, 90);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &logo::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Enabled = false;
			this->pictureBox3->Location = System::Drawing::Point(210, 270);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(96, 90);
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &logo::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Enabled = false;
			this->pictureBox4->Location = System::Drawing::Point(330, 270);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(96, 90);
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &logo::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(293, 468);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(56, 50);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 16;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(293, 364);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(50, 34);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 17;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->maskedTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->maskedTextBox1->ForeColor = System::Drawing::Color::OrangeRed;
			this->maskedTextBox1->Location = System::Drawing::Point(509, 270);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->PasswordChar = '*';
			this->maskedTextBox1->Size = System::Drawing::Size(127, 20);
			this->maskedTextBox1->TabIndex = 18;
			this->maskedTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &logo::maskedTextBox1_KeyDown);
			// 
			// logo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(648, 530);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ForeColor = System::Drawing::Color::Tomato;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(648, 530);
			this->MinimumSize = System::Drawing::Size(648, 530);
			this->Name = L"logo";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"logo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		} 
#pragma endregion

private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
			 timer2->Enabled=false;
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::String^ textLogin; System::String^ textPass;
			 textLogin = textBox1->Text;
			 textPass = maskedTextBox1->Text;
			 if (textBox1->Text == "admin" && maskedTextBox1->Text == "`123123" || textBox1->Text == "user" && maskedTextBox1->Text == "user321213" || textBox1->Text == "tester" && maskedTextBox1->Text == "testUnit3912" ) {
				 textBox1->Visible=false;
				 maskedTextBox1->Visible=false;
				 label7->Visible=false;
				 button1->Visible=false;
				 label5->Visible=false;
				 label6->Visible=false;
				 pictureBox1->Enabled = true; 
				 pictureBox2->Enabled = true;
				 pictureBox3->Enabled = true;
				 pictureBox4->Enabled = true;
				 timer1->Enabled=true;
			 } else {
				 label7->Visible=true;
			 }
		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->Opacity=+5; 
		 }
private: System::Void button1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 System::String^ textLogin; System::String^ textPass;
			 textLogin = textBox1->Text;
			 textPass = maskedTextBox1->Text;

		if (e -> KeyCode == Keys::Enter) {
			if (textBox1->Text == "admin" && maskedTextBox1->Text == "`123123" || textBox1->Text == "user" && maskedTextBox1->Text == "user321213" || textBox1->Text == "tester" && maskedTextBox1->Text == "testUnit3912" ) {
		         button1->Visible=false; 
				 textBox1->Visible=false;
				 maskedTextBox1->Visible=false;
				 label7->Visible=false;
				 label5->Visible=false;
				 label6->Visible=false;
				 timer1->Enabled=true;
				 pictureBox1->Enabled = true; 
				 pictureBox2->Enabled = true;
				 pictureBox3->Enabled = true;
				 pictureBox4->Enabled = true;
			 } else {
				 label7->Visible=true;
			 }
			 }

		 }
		
private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e -> KeyCode == Keys::Enter) { 
				 maskedTextBox1->Focus();
			 }
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 variance = 2;
			 timer2->Enabled = true;
			 pictureBox6->Visible=true;
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 variance = 1;
			 timer2->Enabled = true;
			 pictureBox6->Visible=true;

		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 variance = 3;
			 timer2->Enabled = true;
			 pictureBox6->Visible=true;
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 variance = 4;
			 timer2->Enabled = true;
			 pictureBox6->Visible=true;
		 }
private: System::Void maskedTextBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 System::String^ textLogin; System::String^ textPass;
			 textLogin = textBox1->Text;
			 textPass = maskedTextBox1->Text;

		if (e -> KeyCode == Keys::Enter) {
			if (textBox1->Text == "admin" && maskedTextBox1->Text == "`123123" || textBox1->Text == "user" && maskedTextBox1->Text == "user321213" || textBox1->Text == "tester" && maskedTextBox1->Text == "testUnit3912" ) {
		         button1->Visible=false; 
				 textBox1->Visible=false;
				 maskedTextBox1->Visible=false;
				 label7->Visible=false;
				 label5->Visible=false;
				 label6->Visible=false;
				 timer1->Enabled=true;
				 pictureBox1->Enabled = true; 
				 pictureBox2->Enabled = true;
				 pictureBox3->Enabled = true;
				 pictureBox4->Enabled = true;
			 } else {
				 label7->Visible=true;
			 }
		}
	}
};
}
