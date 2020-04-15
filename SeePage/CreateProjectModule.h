#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Text;

namespace SeePage {

	/// <summary>
	/// Сводка для CreateProjectModule
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class CreateProjectModule : public System::Windows::Forms::Form
	{
	public:
		CreateProjectModule(void)
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
		~CreateProjectModule()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ListBox^  listBox1;
	protected: 
	public: System::Windows::Forms::ListBox^  listBox2;
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::ListBox^  listBox3;
	public: System::Windows::Forms::Button^  button4;

	protected: 






	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Button^  button2;
	private: 

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::Panel^  panel2;
	private: 


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog2;


















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateProjectModule::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"See Page 0.3", L"\tInternet Explorer", L"\tMazila Firefox", 
				L"\tOpera", L"\tGoogle Chrome"});
			this->listBox1->Location = System::Drawing::Point(12, 36);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(255, 342);
			this->listBox1->TabIndex = 0;
			this->listBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CreateProjectModule::listBox1_MouseMove);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"Встроенные шаблоны SeePage", L"\tПроект JavaScript", 
				L"\tПроект HTML", L"\tПроект PHP", L"\tПроект XHTML", L"\tПроект XML", L"\t", L"\tШаблон веб-страницы"});
			this->listBox2->Location = System::Drawing::Point(273, 36);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(484, 173);
			this->listBox2->TabIndex = 1;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateProjectModule::listBox2_SelectedIndexChanged);
			this->listBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CreateProjectModule::listBox2_MouseMove);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Типы проектов";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(270, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Шаблоны";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(270, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Добавить шаблон";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"..."});
			this->listBox3->Location = System::Drawing::Point(273, 230);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(484, 121);
			this->listBox3->TabIndex = 14;
			this->listBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CreateProjectModule::listBox3_MouseMove);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(682, 355);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Обзор...";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CreateProjectModule::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(21, 6);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Имя:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(21, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 15);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Расположение:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(508, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"Название_проекта";
			this->textBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CreateProjectModule::textBox1_MouseMove);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(-7, 90);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(820, 130);
			this->panel1->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(700, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Отмена";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CreateProjectModule::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(619, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Создать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateProjectModule::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(667, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Обзор...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateProjectModule::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(667, 66);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(100, 17);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"Пустой проект";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(21, 64);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(639, 20);
			this->textBox3->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(-11, 382);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(842, 193);
			this->panel2->TabIndex = 16;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(152, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(508, 20);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = L"Путь к папке, в которой будет находится проект.";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &CreateProjectModule::textBox2_TextChanged);
			this->textBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CreateProjectModule::textBox2_MouseMove);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Шаблон|*.spt";
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &CreateProjectModule::folderBrowserDialog1_HelpRequest);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->CheckFileExists = true;
			// 
			// CreateProjectModule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 503);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"CreateProjectModule";
			this->Text = L"Конструктор создания проектов";
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CreateProjectModule::CreateProjectModule_MouseMove);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		    openFileDialog1 -> ShowDialog();
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		    Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		    folderBrowserDialog1->ShowDialog();
			textBox2->Text = folderBrowserDialog1->SelectedPath;

		 }
private: System::Void folderBrowserDialog1_HelpRequest(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
public: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	 /* 0.Встроенные шаблоны SeePage
	1.Проект JavaScript
	2.Проект HTML
	3.Проект PHP
	4.Проект XHTML
	5.Проект XML
	
	7.Шаблон веб-страницы
	-----------------------
		0.See Page 0.3
	1.Internet Explorer
	2.Mazila Firefox
	3.Opera
	4.Google Chrome*/
		String^ path = textBox2->Text + "/";
		if(listBox1->SelectedIndex == 1) {
			if (listBox2->SelectedIndex == 1) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".js");
						this->Close();
						MessageBox::Show("Проект создан");
						
			}
			if (listBox2->SelectedIndex == 2) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".html");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 3) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".php");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 4) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".xhtml");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 5) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".xml");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 7) {
				String^ name = textBox1 -> Text;
				File::Create(path+name+".js");
				  File::Create(path+name+".html");
					 File::Create(path+name+".php");
						File::Create(path+name+".xhtml");
							File::Create(path+name+".xml");
								this->Close();
								MessageBox::Show("Проект создан");
						
			}
		}
//---------------------------------------
		if(listBox1->SelectedIndex == 2) {
						if (listBox2->SelectedIndex == 1) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".js");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 2) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".html");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 3) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".php");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 4) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".xhtml");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 5) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".xml");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 7) {
				String^ name = textBox1 -> Text;
				File::Create(path+name+".js");
				  File::Create(path+name+".html");
					 File::Create(path+name+".php");
						File::Create(path+name+".xhtml");
							File::Create(path+name+".xml");
								this->Close();
								MessageBox::Show("Проект создан");
			}
		 }
//---------------------------------------
		if(listBox1->SelectedIndex == 3) {
						if (listBox2->SelectedIndex == 1) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".js");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 2) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".html");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 3) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".php");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 4) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".xhtml");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 5) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".xml");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 7) {
				String^ name = textBox1 -> Text;
				File::Create(path+name+".js");
				  File::Create(path+name+".html");
					 File::Create(path+name+".php");
						File::Create(path+name+".xhtml");
							File::Create(path+name+".xml");
								this->Close();
								MessageBox::Show("Проект создан");
			}
		 }

		//---------------------------------------
		if(listBox1->SelectedIndex == 4) {
						if (listBox2->SelectedIndex == 1) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".js");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 2) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".html");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 3) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".php");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 4) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".xhtml");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 5) {
						String^ name = textBox1 -> Text;
						File::Create(path+name+".xml");
						this->Close();
						MessageBox::Show("Проект создан");
			}
			if (listBox2->SelectedIndex == 7) {

				
				String^ name = textBox1 -> Text;
				Directory::CreateDirectory(path+"\\"+name);
				File::Create(path+name+"\\"+name+".js");
				  File::Create(path+name+"\\"+name+".html");
					 File::Create(path+name+"\\"+name+".php");
						File::Create(path+name+"\\"+name+".xhtml");
							File::Create(path+name+"\\"+name+".xml");
								this->Close();
								MessageBox::Show("Проект создан");
			}
		}
		 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 textBox3->Text = "Элемент выбора типа файла(ов) проекта";
		 }
private: System::Void CreateProjectModule_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 textBox3->Text = "Окно создания проекта";
		 }
private: System::Void listBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 textBox3->Text = "Элемент выбора типа проекта для разных браузеров";
		 }
private: System::Void listBox3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 textBox3->Text = "Элемент для добавления собственных шаблонов";
		 }
private: System::Void textBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 textBox3->Text = "Элемент, где указывается имя проекта";
		 }
private: System::Void textBox2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 textBox3->Text = "Элемент, где указывается путь проекта";
		 }
};
}
