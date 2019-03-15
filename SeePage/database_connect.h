#include <iostream>
	
#pragma once

namespace SeePage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Drawing;
	using namespace System::IO; 

	public ref class database_connect : public System::Windows::Forms::Form
	{

	public:	static bool bd_flag;  
			static System::String^ bd_password;
			static System::String^ bd_addr;
			static System::String^ bd_name;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	public:
		database_connect(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~database_connect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(408, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(426, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 20);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Обзор";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &database_connect::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(356, 66);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(64, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Пароль";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &database_connect::checkBox1_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(408, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(12, 63);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(338, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(426, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Название БД";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(151, 106);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(244, 22);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Подключить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &database_connect::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// database_connect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 140);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"database_connect";
			this->Text = L"Подключение базы данных";
			this->Load += gcnew System::EventHandler(this, &database_connect::database_connect_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 bd_flag = checkBox1 -> Checked;
				 bd_addr = textBox1 -> Text;
				 bd_name = textBox2 -> Text;
				 bd_password = textBox3 -> Text;

				 this -> Close();

			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (openFileDialog1 -> ShowDialog() == System::Windows::Forms::DialogResult::OK) {

				  textBox1 -> Text = openFileDialog1 -> FileName;
				  textBox2 -> Text = Path::GetFileName(openFileDialog1 -> FileName);

				  bd_addr = textBox1 -> Text;
				  bd_flag = checkBox1 -> Checked;
				  bd_name = textBox2 -> Text;
				  bd_password = textBox3 -> Text;

			  }

		 }

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (checkBox1-> Checked == true) {

				 textBox3 -> Enabled = true;

			 } else {

				 textBox3 -> Enabled = false; 

			 }

		 }

	private: System::Void database_connect_Load(System::Object^  sender, System::EventArgs^  e) {

		 }

};
}