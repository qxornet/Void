#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SeePage {

	/// <summary>
	/// Сводка для CreateLibs
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class CreateLibs : public System::Windows::Forms::Form
	{
	public:
		CreateLibs(void)
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
		~CreateLibs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  скрытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  назадToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  впередToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;





	protected: 





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateLibs::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->скрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->назадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->впередToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Location = System::Drawing::Point(-5, 35);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(554, 498);
			this->panel1->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(547, 490);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->скрытьToolStripMenuItem, 
				this->назадToolStripMenuItem, this->впередToolStripMenuItem, this->toolStripMenuItem2, this->toolStripTextBox1, this->toolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(547, 39);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// скрытьToolStripMenuItem
			// 
			this->скрытьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"скрытьToolStripMenuItem.Image")));
			this->скрытьToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->скрытьToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->скрытьToolStripMenuItem->Name = L"скрытьToolStripMenuItem";
			this->скрытьToolStripMenuItem->Size = System::Drawing::Size(68, 35);
			this->скрытьToolStripMenuItem->Text = L"Помощь";
			this->скрытьToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->скрытьToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->скрытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateLibs::скрытьToolStripMenuItem_Click);
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
			this->назадToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateLibs::назадToolStripMenuItem_Click);
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
			this->впередToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateLibs::впередToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(58, 35);
			this->toolStripMenuItem2->Text = L"Печать";
			this->toolStripMenuItem2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->toolStripMenuItem2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(150, 35);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem1.Image")));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(65, 35);
			this->toolStripMenuItem1->Text = L"Собрать";
			this->toolStripMenuItem1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->toolStripMenuItem1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &CreateLibs::toolStripMenuItem1_Click);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// CreateLibs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(547, 531);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"CreateLibs";
			this->Text = L"Создание шаблона";
			this->Load += gcnew System::EventHandler(this, &CreateLibs::CreateLibs_Load);
			this->panel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void скрытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Команды для создания шаблонов: \n.CREATE: создание шаблона; \n.EDIT: создание нового элемента; \n.ADD: добавление в конец последнего элемента; \n.XOR: удаление элемента; \n.XOREDIT: удаление сегмента данных из элемента (вначале указывается название элемента, потом те данные, что нужно удалить); \n.CLOSE: закрыть шаблон; .ADDCATE: создание категории с элементами; \n.REP: замена сегмента данных на элементе; \n.ALLREP: замена данных во всех элементах; \n.RETURN: вернуть сегмент данных из элемента; \n.CATECLOSE: закрыть категорию элементов; \n.GOFOR: выполнить до заданного значения; \n.FOR: цикл.с.параметром:(тело цикла); \n.WHILE:цикл с условием(сюда пишется условие):(сюда пишется тело цикла); \n.ERASE: стереть все;", "Помощь");
		 }
private: System::Void назадToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  richTextBox1->Undo();
		 }
private: System::Void впередToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  richTextBox1->Redo();
		 }
private: System::Void CreateLibs_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 folderBrowserDialog1 -> ShowDialog();
			 String^ Name = toolStripTextBox1 -> Text; 
			 String^ path = folderBrowserDialog1 -> SelectedPath;
			 richTextBox1->SaveFile(path+"/"+Name+".spt", RichTextBoxStreamType::PlainText);
		 }
};
}
