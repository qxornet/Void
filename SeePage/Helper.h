#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SeePage {

	/// <summary>
	/// Сводка для Helper
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Helper : public System::Windows::Forms::Form
	{
	public:
		Helper(void)
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
		~Helper()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected: 
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  скрытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  назадToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  впередToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  домойToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::ListBox^  listBox3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Helper::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->скрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->назадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->впередToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->домойToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 39);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->tabControl1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->webBrowser1);
			this->splitContainer1->Size = System::Drawing::Size(636, 518);
			this->splitContainer1->SplitterDistance = 211;
			this->splitContainer1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(202, 545);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(194, 519);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Содержание";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(49) {L"1. Общие сведения", L"2. Создание проекта ", L"3. Создание файла", 
				L"4. ", L"5.", L"6.", L"7.", L"8.", L"9.", L"10.", L"11.", L"12.", L"13.", L"14.", L"15", L"16.", L"17.", L"18.", L"20.", L"21.", 
				L"22.", L"23.", L"24.", L"25.", L"26.", L"27.", L"28.", L"29.", L"30.", L"31.", L"32.", L"33.", L"34.", L"35.", L"36.", L"37.", 
				L"38.", L"39.", L"40.", L"41.", L"42.", L"43.", L"44.", L"45.", L"46.", L"47.", L"48.", L"49.", L"50."});
			this->listBox1->Location = System::Drawing::Point(-4, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(200, 498);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(194, 519);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Учебник";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(-4, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 2;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(50) {L"1. HTML", L"2. Создание проекта ", L"3. Создание файла", 
				L"4. ", L"5.", L"6.", L"7.", L"8.", L"9.", L"10.", L"11.", L"12.", L"13.", L"14.", L"15", L"16.", L"17.", L"18.", L"20.", L"21.", 
				L"22.", L"23.", L"24.", L"25.", L"26.", L"27.", L"28.", L"29.", L"30.", L"31.", L"32.", L"33.", L"34.", L"35.", L"36.", L"37.", 
				L"38.", L"39.", L"40.", L"41.", L"42.", L"43.", L"44.", L"45.", L"46.", L"47.", L"48.", L"49.", L"50.", L"51. JS"});
			this->listBox2->Location = System::Drawing::Point(-2, 19);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(200, 472);
			this->listBox2->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(194, 519);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"SPLAN";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(421, 518);
			this->webBrowser1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStripMenuItem1, 
				this->скрытьToolStripMenuItem, this->назадToolStripMenuItem, this->впередToolStripMenuItem, this->домойToolStripMenuItem, this->toolStripMenuItem2, 
				this->toolStripMenuItem3});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(636, 39);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem1.Image")));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(28, 35);
			// 
			// скрытьToolStripMenuItem
			// 
			this->скрытьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"скрытьToolStripMenuItem.Image")));
			this->скрытьToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->скрытьToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->скрытьToolStripMenuItem->Name = L"скрытьToolStripMenuItem";
			this->скрытьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->скрытьToolStripMenuItem->Size = System::Drawing::Size(60, 35);
			this->скрытьToolStripMenuItem->Text = L"Скрыть";
			this->скрытьToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->скрытьToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// назадToolStripMenuItem
			// 
			this->назадToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"назадToolStripMenuItem.Image")));
			this->назадToolStripMenuItem->Name = L"назадToolStripMenuItem";
			this->назадToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->назадToolStripMenuItem->Size = System::Drawing::Size(51, 35);
			this->назадToolStripMenuItem->Text = L"Назад";
			this->назадToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->назадToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// впередToolStripMenuItem
			// 
			this->впередToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"впередToolStripMenuItem.Image")));
			this->впередToolStripMenuItem->Name = L"впередToolStripMenuItem";
			this->впередToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->впередToolStripMenuItem->Size = System::Drawing::Size(58, 35);
			this->впередToolStripMenuItem->Text = L"Вперед";
			this->впередToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->впередToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// домойToolStripMenuItem
			// 
			this->домойToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"домойToolStripMenuItem.Image")));
			this->домойToolStripMenuItem->Name = L"домойToolStripMenuItem";
			this->домойToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->домойToolStripMenuItem->Size = System::Drawing::Size(57, 35);
			this->домойToolStripMenuItem->Text = L"Домой";
			this->домойToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->домойToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(58, 35);
			this->toolStripMenuItem2->Text = L"Печать";
			this->toolStripMenuItem2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->toolStripMenuItem2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Helper::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem3.Image")));
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(83, 35);
			this->toolStripMenuItem3->Text = L"Параметры";
			this->toolStripMenuItem3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->toolStripMenuItem3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(49) {L"1. Общие сведения", L"2. Создание проекта ", L"3. Создание файла", 
				L"4. ", L"5.", L"6.", L"7.", L"8.", L"9.", L"10.", L"11.", L"12.", L"13.", L"14.", L"15", L"16.", L"17.", L"18.", L"20.", L"21.", 
				L"22.", L"23.", L"24.", L"25.", L"26.", L"27.", L"28.", L"29.", L"30.", L"31.", L"32.", L"33.", L"34.", L"35.", L"36.", L"37.", 
				L"38.", L"39.", L"40.", L"41.", L"42.", L"43.", L"44.", L"45.", L"46.", L"47.", L"48.", L"49.", L"50."});
			this->listBox3->Location = System::Drawing::Point(-6, 0);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(204, 498);
			this->listBox3->TabIndex = 1;
			// 
			// Helper
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 557);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(642, 586);
			this->MinimumSize = System::Drawing::Size(642, 586);
			this->Name = L"Helper";
			this->Text = L"Справочник";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
};
}
