#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SeePage {

	/// <summary>
	/// Сводка для net_classWrtServer
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class net_classWrtServer : public System::Windows::Forms::Form
	{
	public:
		net_classWrtServer(void)
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
		~net_classWrtServer()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(net_classWrtServer::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button4->Location = System::Drawing::Point(14, 96);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Open Header";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &net_classWrtServer::button4_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(14, 318);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Save MC";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::Color::ForestGreen;
			this->button2->Location = System::Drawing::Point(14, 347);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Save MC As...";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::ForestGreen;
			this->button3->Location = System::Drawing::Point(14, 400);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Save All...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &net_classWrtServer::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(14, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 8;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(504, 548);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox2->Location = System::Drawing::Point(3, 3);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(504, 548);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = resources->GetString(L"richTextBox2.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(55, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Server name";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(14, 125);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Create Header";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->Cursor = System::Windows::Forms::Cursors::Default;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Location = System::Drawing::Point(14, 154);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Save Header";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->ForeColor = System::Drawing::Color::ForestGreen;
			this->button7->Location = System::Drawing::Point(14, 183);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 23);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Save Header As...";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(14, 289);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 23);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Create MC";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button9->Location = System::Drawing::Point(14, 260);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(108, 23);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Open MainClass";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(510, 554);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Header";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(518, 580);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(510, 554);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"MainClass";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(516, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(133, 558);
			this->panel1->TabIndex = 15;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// net_classWrtServer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(651, 580);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tabControl1);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->ForeColor = System::Drawing::Color::OrangeRed;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"net_classWrtServer";
			this->Text = L"WriteServers";
			this->Load += gcnew System::EventHandler(this, &net_classWrtServer::net_classWrtServer_Load);
			this->tabPage1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void net_classWrtServer_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(openFileDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK) {
				 String^ path = openFileDialog1 -> FileName; 
				 richTextBox1->LoadFile(path, RichTextBoxStreamType::PlainText);
			 }
			 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 if(folderBrowserDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK) {
					 System::String^ path = folderBrowserDialog1 -> SelectedPath; 
				 richTextBox1->SaveFile(path, RichTextBoxStreamType::PlainText);
				 richTextBox2->SaveFile(path, RichTextBoxStreamType::PlainText);
			 }
		 }
};
}
