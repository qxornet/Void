#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SeePage {

	/// <summary>
	/// ������ ��� CreateLibs
	///
	/// ��������! ��� ��������� ����� ����� ������ ���������� ����� ��������
	///          �������� ����� ����� �������� ("Resource File Name") ��� �������� ���������� ������������ �������,
	///          ���������� �� ����� ������� � ����������� .resx, �� ������� ������� ������ �����. � ��������� ������,
	///          ������������ �� ������ ��������� �������� � ���������������
	///          ���������, ��������������� ������ �����.
	/// </summary>
	public ref class CreateLibs : public System::Windows::Forms::Form
	{
	public:
		CreateLibs(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;





	protected: 





	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateLibs::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->������ToolStripMenuItem, 
				this->�����ToolStripMenuItem, this->������ToolStripMenuItem, this->toolStripMenuItem2, this->toolStripTextBox1, this->toolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(547, 39);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(68, 35);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateLibs::������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�����ToolStripMenuItem.Image")));
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(51, 35);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->�����ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateLibs::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->������ToolStripMenuItem->Size = System::Drawing::Size(58, 35);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateLibs::������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(58, 35);
			this->toolStripMenuItem2->Text = L"������";
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
			this->toolStripMenuItem1->Text = L"�������";
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
			this->Text = L"�������� �������";
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

private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("������� ��� �������� ��������: \n.CREATE: �������� �������; \n.EDIT: �������� ������ ��������; \n.ADD: ���������� � ����� ���������� ��������; \n.XOR: �������� ��������; \n.XOREDIT: �������� �������� ������ �� �������� (������� ����������� �������� ��������, ����� �� ������, ��� ����� �������); \n.CLOSE: ������� ������; .ADDCATE: �������� ��������� � ����������; \n.REP: ������ �������� ������ �� ��������; \n.ALLREP: ������ ������ �� ���� ���������; \n.RETURN: ������� ������� ������ �� ��������; \n.CATECLOSE: ������� ��������� ���������; \n.GOFOR: ��������� �� ��������� ��������; \n.FOR: ����.�.����������:(���� �����); \n.WHILE:���� � ��������(���� ������� �������):(���� ������� ���� �����); \n.ERASE: ������� ���;", "������");
		 }
private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  richTextBox1->Undo();
		 }
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
