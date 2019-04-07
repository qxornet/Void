#include "database_connect.h"

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Data::OleDb;

#define dbcn database_connect^
#define strc  System::String

namespace SeePage {

	public ref class database_manager : public System::Windows::Forms::Form
	{

static		   dbcn				form_connect; 

static		   strc^			dbc_addr,
				   ^			dbc_name,
				   ^			dbc_password;

static		    int				enumberInc,
								var,
								sch;

static		    bool			dbc_flag,
								is_open;

static		   OleDbConnection^ connect;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;


			 static		   OleDbCommand^	command;

public:
		database_manager(void)
		{
			InitializeComponent();

			form_connect = gcnew database_connect();
			sch = 0;
			var = 0;
			is_open = false;
		}

protected:

		~database_manager()
		{
			if (components)
			{
				delete components;
			}
		}

public: 
		System::Windows::Forms::MenuStrip^  menuStrip1;

private: 
		System::Windows::Forms::ToolStripSeparator^			toolStripSeparator2;
		System::Windows::Forms::ToolStripLabel^				toolStripLabel2; 
		System::Windows::Forms::ToolStripLabel^				toolStripLabel1;
		System::Windows::Forms::ToolStripLabel^				toolStripLabel3;
		System::Windows::Forms::ToolStripLabel^				toolStripLabel4;
		System::Windows::Forms::ToolStripLabel^				toolStripLabel5;
		System::Windows::Forms::ToolStripSeparator^			toolStripSeparator3;
		System::Windows::Forms::ToolStripButton^			toolStripButton1; 
		System::Windows::Forms::ListView^					listView1;
		System::Windows::Forms::TabControl^					tabControl1; 
		System::Windows::Forms::TabPage^					tabPage2; 
		System::Windows::Forms::TreeView^					treeView1; 
		System::Windows::Forms::Panel^						panel1;
		System::Windows::Forms::ToolStrip^					toolStrip1;
		System::Windows::Forms::ToolStripButton^			�������ToolStripButton;
		System::Windows::Forms::ToolStripButton^			�������ToolStripButton;
		System::Windows::Forms::ToolStripButton^			���������ToolStripButton;
		System::Windows::Forms::ToolStripButton^			������ToolStripButton;
		System::Windows::Forms::ToolStripSeparator^			toolStripSeparator;
		System::Windows::Forms::ToolStripButton^			��������ToolStripButton;
		System::Windows::Forms::ToolStripButton^			����������ToolStripButton;
		System::Windows::Forms::ToolStripButton^			�������ToolStripButton;
		System::Windows::Forms::ToolStripSeparator^			toolStripSeparator1;
		System::Windows::Forms::ToolStripButton^			�������ToolStripButton;
		System::Windows::Forms::Label^						label3;
		System::Windows::Forms::Label^						label4;
		System::Windows::Forms::TabPage^					tabPage1;
		FastColoredTextBoxNS::FastColoredTextBox^			fastColoredTextBox1;
		System::Windows::Forms::TabControl^					tabControl2;
		System::Windows::Forms::TabPage^					tabPage3;
		System::Windows::Forms::TabPage^					tabPage4;
		System::Windows::Forms::Panel^						panel2;
		System::Windows::Forms::Label^						label5;
		System::Windows::Forms::FolderBrowserDialog^		folderBrowserDialog1;
		FastColoredTextBoxNS::FastColoredTextBox^			fastColoredTextBox2;
		System::Windows::Forms::DataGridView^				dataGridView1;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
		System::Windows::Forms::DataGridView^				dataGridView2;
		System::Windows::Forms::RichTextBox^				richTextBox1;
		System::Windows::Forms::FolderBrowserDialog^		folderBrowserDialog2;
		System::Windows::Forms::TabControl^					tabControl3;
		System::Windows::Forms::TabPage^					tabPage5;
		System::Windows::Forms::TabPage^					tabPage6;
		System::Windows::Forms::ListView^					listView2; 
		System::Windows::Forms::ToolStripMenuItem^			����ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem9;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem35;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem36;
		System::Windows::Forms::ToolStripMenuItem^			������SPToolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem2;
		System::Windows::Forms::ToolStripMenuItem^			����ToolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^			������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			������SPToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem3;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem4;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem5;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem6;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem7;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem20;
		System::Windows::Forms::ToolStripMenuItem^			������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem18;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem10;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem11;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem12;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem13;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem14;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem15;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem34;
		System::Windows::Forms::ToolStripMenuItem^			�����������ToolStripMenuItem;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem37;
		System::Windows::Forms::ToolStripMenuItem^			������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			�����ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			���ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem16;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem21;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem22;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem17;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem8;
		System::Windows::Forms::ToolStripMenuItem^			����������������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			darkToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			whiteToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			voidToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			���������������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem40;
		System::Windows::Forms::ToolStripMenuItem^			������������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			���������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			����������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			�����ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			������ToolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^			���������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			��������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem38;
		System::Windows::Forms::ToolStripMenuItem^			����������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem43;
		System::Windows::Forms::ToolStripMenuItem^			������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem39;
		System::Windows::Forms::ToolStripMenuItem^			����������������������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			��������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			����������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			���������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			����������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			����������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			���������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			��������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			�������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem41;
		System::Windows::Forms::ToolStripMenuItem^			�������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			�����������ToolStripMenuItem;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem42;
		System::Windows::Forms::ToolStripMenuItem^			ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem44;
		System::Windows::Forms::ToolStripMenuItem^			���������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripSeparator^			����ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			����ToolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^			������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			��������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			������ToolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^			�����������������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			���������������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			��������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			���������������������ToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem25;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem27;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem28;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem29;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem30;
		System::Windows::Forms::ToolStripMenuItem^			toolStripMenuItem31;
		System::Windows::Forms::ToolStripSeparator^			toolStripMenuItem26;
		System::Windows::Forms::ToolStripMenuItem^			����������ToolStripMenuItem;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
		System::Windows::Forms::TabPage^					tabPage7;
		System::Windows::Forms::DataGridView^				dataGridView3;
		System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
		System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
		System::ComponentModel::IContainer^					components;
		System::Windows::Forms::PictureBox^					pictureBox1;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::ListViewGroup^  listViewGroup8 = (gcnew System::Windows::Forms::ListViewGroup(L"Viewers", System::Windows::Forms::HorizontalAlignment::Center));
			System::Windows::Forms::ListViewItem^  listViewItem40 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(5) {L"Empty viewer", 
				L"123", L"121233", L"123132", L"444125567"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem41 = (gcnew System::Windows::Forms::ListViewItem(L"Base viewer"));
			System::Windows::Forms::ListViewItem^  listViewItem42 = (gcnew System::Windows::Forms::ListViewItem(L"Dynamic viewer"));
			System::Windows::Forms::ListViewItem^  listViewItem43 = (gcnew System::Windows::Forms::ListViewItem(L"Viewer with addition settings"));
			System::Windows::Forms::ListViewItem^  listViewItem44 = (gcnew System::Windows::Forms::ListViewItem(L"Dedicated viewer"));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(database_manager::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::ListViewGroup^  listViewGroup9 = (gcnew System::Windows::Forms::ListViewGroup(L"�����������", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup10 = (gcnew System::Windows::Forms::ListViewGroup(L"�������������� �������", 
				System::Windows::Forms::HorizontalAlignment::Center));
			System::Windows::Forms::ListViewGroup^  listViewGroup11 = (gcnew System::Windows::Forms::ListViewGroup(L"��������� �������", System::Windows::Forms::HorizontalAlignment::Center));
			System::Windows::Forms::ListViewGroup^  listViewGroup12 = (gcnew System::Windows::Forms::ListViewGroup(L"����������� �������", System::Windows::Forms::HorizontalAlignment::Center));
			System::Windows::Forms::ListViewGroup^  listViewGroup13 = (gcnew System::Windows::Forms::ListViewGroup(L"������� ���������", System::Windows::Forms::HorizontalAlignment::Center));
			System::Windows::Forms::ListViewGroup^  listViewGroup14 = (gcnew System::Windows::Forms::ListViewGroup(L"������� ��������������", 
				System::Windows::Forms::HorizontalAlignment::Center));
			System::Windows::Forms::ListViewItem^  listViewItem45 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) {L"ABS"}, 
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Transparent, nullptr));
			System::Windows::Forms::ListViewItem^  listViewItem46 = (gcnew System::Windows::Forms::ListViewItem(L"Round"));
			System::Windows::Forms::ListViewItem^  listViewItem47 = (gcnew System::Windows::Forms::ListViewItem(L"SIGN"));
			System::Windows::Forms::ListViewItem^  listViewItem48 = (gcnew System::Windows::Forms::ListViewItem(L"POWER"));
			System::Windows::Forms::ListViewItem^  listViewItem49 = (gcnew System::Windows::Forms::ListViewItem(L"SQRT"));
			System::Windows::Forms::ListViewItem^  listViewItem50 = (gcnew System::Windows::Forms::ListViewItem(L"CEILING"));
			System::Windows::Forms::ListViewItem^  listViewItem51 = (gcnew System::Windows::Forms::ListViewItem(L"-FLOOR"));
			System::Windows::Forms::ListViewItem^  listViewItem52 = (gcnew System::Windows::Forms::ListViewItem(L"ASCII"));
			System::Windows::Forms::ListViewItem^  listViewItem53 = (gcnew System::Windows::Forms::ListViewItem(L"CHAR"));
			System::Windows::Forms::ListViewItem^  listViewItem54 = (gcnew System::Windows::Forms::ListViewItem(L"LEN"));
			System::Windows::Forms::ListViewItem^  listViewItem55 = (gcnew System::Windows::Forms::ListViewItem(L"LTRIM"));
			System::Windows::Forms::ListViewItem^  listViewItem56 = (gcnew System::Windows::Forms::ListViewItem(L"RTRIM"));
			System::Windows::Forms::ListViewItem^  listViewItem57 = (gcnew System::Windows::Forms::ListViewItem(L"LEFT"));
			System::Windows::Forms::ListViewItem^  listViewItem58 = (gcnew System::Windows::Forms::ListViewItem(L"RIGHT"));
			System::Windows::Forms::ListViewItem^  listViewItem59 = (gcnew System::Windows::Forms::ListViewItem(L"SUBSTRING"));
			System::Windows::Forms::ListViewItem^  listViewItem60 = (gcnew System::Windows::Forms::ListViewItem(L"LOWER"));
			System::Windows::Forms::ListViewItem^  listViewItem61 = (gcnew System::Windows::Forms::ListViewItem(L"UPPER"));
			System::Windows::Forms::ListViewItem^  listViewItem62 = (gcnew System::Windows::Forms::ListViewItem(L"GETDATE"));
			System::Windows::Forms::ListViewItem^  listViewItem63 = (gcnew System::Windows::Forms::ListViewItem(L"DAY"));
			System::Windows::Forms::ListViewItem^  listViewItem64 = (gcnew System::Windows::Forms::ListViewItem(L"MONTH"));
			System::Windows::Forms::ListViewItem^  listViewItem65 = (gcnew System::Windows::Forms::ListViewItem(L"YEAR"));
			System::Windows::Forms::ListViewItem^  listViewItem66 = (gcnew System::Windows::Forms::ListViewItem(L"DATENANE"));
			System::Windows::Forms::ListViewItem^  listViewItem67 = (gcnew System::Windows::Forms::ListViewItem(L"DATEPART"));
			System::Windows::Forms::ListViewItem^  listViewItem68 = (gcnew System::Windows::Forms::ListViewItem(L"CAST"));
			System::Windows::Forms::ListViewItem^  listViewItem69 = (gcnew System::Windows::Forms::ListViewItem(L"CONVERT"));
			System::Windows::Forms::ListViewItem^  listViewItem70 = (gcnew System::Windows::Forms::ListViewItem(L"SET"));
			System::Windows::Forms::ListViewItem^  listViewItem71 = (gcnew System::Windows::Forms::ListViewItem(L"GO"));
			System::Windows::Forms::ListViewItem^  listViewItem72 = (gcnew System::Windows::Forms::ListViewItem(L"DECLARE"));
			System::Windows::Forms::ListViewItem^  listViewItem73 = (gcnew System::Windows::Forms::ListViewItem(L"USE"));
			System::Windows::Forms::ListViewItem^  listViewItem74 = (gcnew System::Windows::Forms::ListViewItem(L"SELECT"));
			System::Windows::Forms::ListViewItem^  listViewItem75 = (gcnew System::Windows::Forms::ListViewItem(L"FROM"));
			System::Windows::Forms::ListViewItem^  listViewItem76 = (gcnew System::Windows::Forms::ListViewItem(L"WHERE"));
			System::Windows::Forms::ListViewItem^  listViewItem77 = (gcnew System::Windows::Forms::ListViewItem(L"INNER"));
			System::Windows::Forms::ListViewItem^  listViewItem78 = (gcnew System::Windows::Forms::ListViewItem(L"ON"));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->fastColoredTextBox1 = (gcnew FastColoredTextBoxNS::FastColoredTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->���������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->��������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->����������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel3 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel4 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel5 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->fastColoredTextBox2 = (gcnew FastColoredTextBoxNS::FastColoredTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem35 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem36 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������SPToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������SPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem34 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem37 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem22 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->whiteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->voidToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem40 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem38 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem43 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem39 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem41 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem42 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem44 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem25 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem27 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem28 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem29 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem30 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem31 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem26 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox2))->BeginInit();
			this->panel2->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			listViewGroup8->Header = L"Viewers";
			listViewGroup8->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Center;
			listViewGroup8->Name = L"Flowgraphs";
			this->listView1->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(1) {listViewGroup8});
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->HotTracking = true;
			this->listView1->HoverSelection = true;
			listViewItem40->Group = listViewGroup8;
			listViewItem40->StateImageIndex = 0;
			listViewItem40->ToolTipText = L"11";
			listViewItem41->Group = listViewGroup8;
			listViewItem41->StateImageIndex = 0;
			listViewItem42->Group = listViewGroup8;
			listViewItem42->StateImageIndex = 0;
			listViewItem43->Group = listViewGroup8;
			listViewItem44->Group = listViewGroup8;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(5) {listViewItem40, listViewItem41, 
				listViewItem42, listViewItem43, listViewItem44});
			this->listView1->LabelEdit = true;
			this->listView1->Location = System::Drawing::Point(3, 3);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(199, 394);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Tile;
			this->listView1->Click += gcnew System::EventHandler(this, &database_manager::listView1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(376, 405);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->fastColoredTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(368, 379);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"SQL";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// fastColoredTextBox1
			// 
			this->fastColoredTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->fastColoredTextBox1->AutoCompleteBracketsList = gcnew cli::array< System::Char >(10) {'(', ')', '{', '}', '[', ']', '\"', 
				'\"', '\'', '\''};
			this->fastColoredTextBox1->AutoIndentCharsPatterns = L"";
			this->fastColoredTextBox1->AutoScrollMinSize = System::Drawing::Size(27, 14);
			this->fastColoredTextBox1->BackBrush = nullptr;
			this->fastColoredTextBox1->CharHeight = 14;
			this->fastColoredTextBox1->CharWidth = 8;
			this->fastColoredTextBox1->CommentPrefix = L"--";
			this->fastColoredTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->fastColoredTextBox1->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->fastColoredTextBox1->IndentBackColor = System::Drawing::SystemColors::Window;
			this->fastColoredTextBox1->IsReplaceMode = false;
			this->fastColoredTextBox1->Language = FastColoredTextBoxNS::Language::SQL;
			this->fastColoredTextBox1->LeftBracket = '(';
			this->fastColoredTextBox1->LineNumberColor = System::Drawing::Color::Maroon;
			this->fastColoredTextBox1->Location = System::Drawing::Point(0, -1);
			this->fastColoredTextBox1->Name = L"fastColoredTextBox1";
			this->fastColoredTextBox1->Paddings = System::Windows::Forms::Padding(0);
			this->fastColoredTextBox1->RightBracket = ')';
			this->fastColoredTextBox1->SelectionColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->fastColoredTextBox1->ServiceColors = (cli::safe_cast<FastColoredTextBoxNS::ServiceColors^  >(resources->GetObject(L"fastColoredTextBox1.ServiceColors")));
			this->fastColoredTextBox1->ServiceLinesColor = System::Drawing::Color::Maroon;
			this->fastColoredTextBox1->Size = System::Drawing::Size(368, 380);
			this->fastColoredTextBox1->TabIndex = 0;
			this->fastColoredTextBox1->Zoom = 100;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(368, 379);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Table";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedVertical;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7});
			this->dataGridView1->GridColor = System::Drawing::Color::Brown;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->Size = System::Drawing::Size(368, 379);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column7";
			this->Column7->Name = L"Column7";
			// 
			// treeView1
			// 
			this->treeView1->AllowDrop = true;
			this->treeView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->treeView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->treeView1->ForeColor = System::Drawing::Color::Maroon;
			this->treeView1->Indent = 30;
			this->treeView1->ItemHeight = 25;
			this->treeView1->LabelEdit = true;
			this->treeView1->LineColor = System::Drawing::Color::Maroon;
			this->treeView1->Location = System::Drawing::Point(55, 32);
			this->treeView1->Margin = System::Windows::Forms::Padding(7);
			this->treeView1->Name = L"treeView1";
			this->treeView1->ShowLines = false;
			this->treeView1->ShowNodeToolTips = true;
			this->treeView1->Size = System::Drawing::Size(134, 402);
			this->treeView1->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->AllowDrop = true;
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(357, 405);
			this->panel1->TabIndex = 3;
			this->panel1->DoubleClick += gcnew System::EventHandler(this, &database_manager::panel1_DoubleClick);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(18) {this->�������ToolStripButton, 
				this->�������ToolStripButton, this->������ToolStripButton, this->���������ToolStripButton, this->toolStripSeparator, this->��������ToolStripButton, 
				this->����������ToolStripButton, this->�������ToolStripButton, this->toolStripSeparator1, this->toolStripButton1, this->�������ToolStripButton, 
				this->toolStripSeparator2, this->toolStripLabel3, this->toolStripLabel4, this->toolStripLabel5, this->toolStripLabel2, this->toolStripLabel1, 
				this->toolStripSeparator3});
			this->toolStrip1->Location = System::Drawing::Point(0, 553);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1176, 25);
			this->toolStrip1->TabIndex = 6;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�������ToolStripButton->Text = L"&�������";
			// 
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�������ToolStripButton->Text = L"&�������";
			this->�������ToolStripButton->Click += gcnew System::EventHandler(this, &database_manager::�������ToolStripButton_Click);
			// 
			// ������ToolStripButton
			// 
			this->������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripButton.Image")));
			this->������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->������ToolStripButton->Name = L"������ToolStripButton";
			this->������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->������ToolStripButton->Text = L"&������� ������";
			// 
			// ���������ToolStripButton
			// 
			this->���������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->���������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"���������ToolStripButton.Image")));
			this->���������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->���������ToolStripButton->Name = L"���������ToolStripButton";
			this->���������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->���������ToolStripButton->Text = L"&���������";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// ��������ToolStripButton
			// 
			this->��������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->��������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"��������ToolStripButton.Image")));
			this->��������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��������ToolStripButton->Name = L"��������ToolStripButton";
			this->��������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->��������ToolStripButton->Text = L"�&�������";
			// 
			// ����������ToolStripButton
			// 
			this->����������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"����������ToolStripButton.Image")));
			this->����������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����������ToolStripButton->Name = L"����������ToolStripButton";
			this->����������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����������ToolStripButton->Text = L"&����������";
			// 
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�������ToolStripButton->Text = L"���&����";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &database_manager::toolStripButton1_Click);
			// 
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�������ToolStripButton->Text = L"&�������";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel3
			// 
			this->toolStripLabel3->Name = L"toolStripLabel3";
			this->toolStripLabel3->Size = System::Drawing::Size(62, 22);
			this->toolStripLabel3->Text = L"��������:";
			// 
			// toolStripLabel4
			// 
			this->toolStripLabel4->Name = L"toolStripLabel4";
			this->toolStripLabel4->Size = System::Drawing::Size(0, 22);
			// 
			// toolStripLabel5
			// 
			this->toolStripLabel5->Name = L"toolStripLabel5";
			this->toolStripLabel5->Size = System::Drawing::Size(12, 22);
			this->toolStripLabel5->Text = L"-";
			// 
			// toolStripLabel2
			// 
			this->toolStripLabel2->Name = L"toolStripLabel2";
			this->toolStripLabel2->Size = System::Drawing::Size(46, 22);
			this->toolStripLabel2->Text = L"������:";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripLabel1.Image")));
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(16, 22);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(555, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"����������� ��������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(435, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"��������� ��������";
			// 
			// tabControl2
			// 
			this->tabControl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Location = System::Drawing::Point(55, 437);
			this->tabControl2->Multiline = true;
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->ShowToolTips = true;
			this->tabControl2->Size = System::Drawing::Size(898, 113);
			this->tabControl2->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl2->TabIndex = 9;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(890, 87);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"�������";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->Column8, 
				this->Column9, this->Column10, this->Column11, this->Column12, this->Column13, this->Column14, this->Column15});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->GridColor = System::Drawing::Color::DarkRed;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView2->Size = System::Drawing::Size(884, 81);
			this->dataGridView2->TabIndex = 0;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L" ";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 110;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L" ";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 110;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L" ";
			this->Column10->Name = L"Column10";
			this->Column10->Width = 103;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L" ";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 110;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L" ";
			this->Column12->Name = L"Column12";
			this->Column12->Width = 110;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L" ";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L" ";
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L" ";
			this->Column15->Name = L"Column15";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->fastColoredTextBox2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(890, 87);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"������ ������";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// fastColoredTextBox2
			// 
			this->fastColoredTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->fastColoredTextBox2->AutoCompleteBracketsList = gcnew cli::array< System::Char >(10) {'(', ')', '{', '}', '[', ']', '\"', 
				'\"', '\'', '\''};
			this->fastColoredTextBox2->AutoScrollMinSize = System::Drawing::Size(2, 13);
			this->fastColoredTextBox2->BackBrush = nullptr;
			this->fastColoredTextBox2->CharHeight = 13;
			this->fastColoredTextBox2->CharWidth = 7;
			this->fastColoredTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->fastColoredTextBox2->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->fastColoredTextBox2->Font = (gcnew System::Drawing::Font(L"Courier New", 9));
			this->fastColoredTextBox2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->fastColoredTextBox2->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->fastColoredTextBox2->IsReplaceMode = false;
			this->fastColoredTextBox2->LineNumberColor = System::Drawing::Color::DarkRed;
			this->fastColoredTextBox2->Location = System::Drawing::Point(-4, 0);
			this->fastColoredTextBox2->Name = L"fastColoredTextBox2";
			this->fastColoredTextBox2->Paddings = System::Windows::Forms::Padding(0);
			this->fastColoredTextBox2->SelectionColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->fastColoredTextBox2->ServiceColors = (cli::safe_cast<FastColoredTextBoxNS::ServiceColors^  >(resources->GetObject(L"fastColoredTextBox2.ServiceColors")));
			this->fastColoredTextBox2->ServiceLinesColor = System::Drawing::Color::DarkRed;
			this->fastColoredTextBox2->Size = System::Drawing::Size(894, 91);
			this->fastColoredTextBox2->TabIndex = 0;
			this->fastColoredTextBox2->Zoom = 100;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Controls->Add(this->richTextBox1);
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel2->Location = System::Drawing::Point(958, 453);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(210, 97);
			this->panel2->TabIndex = 10;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(210, 97);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(956, 437);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"��������:";
			// 
			// tabControl3
			// 
			this->tabControl3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl3->Controls->Add(this->tabPage5);
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Controls->Add(this->tabPage6);
			this->tabControl3->Controls->Add(this->tabPage7);
			this->tabControl3->ItemSize = System::Drawing::Size(96, 18);
			this->tabControl3->Location = System::Drawing::Point(959, 7);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(213, 426);
			this->tabControl3->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->tabControl3->TabIndex = 12;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->listView1);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(205, 400);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"�����";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->listView2);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(205, 400);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"SQL";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// listView2
			// 
			this->listView2->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->listView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView2->ForeColor = System::Drawing::SystemColors::WindowText;
			listViewGroup9->Header = L"�����������";
			listViewGroup9->Name = L"listViewGroup4";
			listViewGroup10->Header = L"�������������� �������";
			listViewGroup10->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Center;
			listViewGroup10->Name = L"math";
			listViewGroup11->Header = L"��������� �������";
			listViewGroup11->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Center;
			listViewGroup11->Name = L"listViewGroup1";
			listViewGroup12->Header = L"����������� �������";
			listViewGroup12->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Center;
			listViewGroup12->Name = L"listViewGroup2";
			listViewGroup13->Header = L"������� ���������";
			listViewGroup13->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Center;
			listViewGroup13->Name = L"listViewGroup3";
			listViewGroup14->Header = L"������� ��������������";
			listViewGroup14->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Center;
			listViewGroup14->Name = L"listViewGroup5";
			this->listView2->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(6) {listViewGroup9, listViewGroup10, 
				listViewGroup11, listViewGroup12, listViewGroup13, listViewGroup14});
			this->listView2->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView2->HotTracking = true;
			this->listView2->HoverSelection = true;
			listViewItem45->Group = listViewGroup10;
			listViewItem46->Group = listViewGroup10;
			listViewItem47->Group = listViewGroup10;
			listViewItem48->Group = listViewGroup10;
			listViewItem49->Group = listViewGroup10;
			listViewItem50->Group = listViewGroup10;
			listViewItem51->Group = listViewGroup10;
			listViewItem52->Group = listViewGroup11;
			listViewItem53->Group = listViewGroup11;
			listViewItem54->Group = listViewGroup11;
			listViewItem55->Group = listViewGroup11;
			listViewItem56->Group = listViewGroup11;
			listViewItem57->Group = listViewGroup11;
			listViewItem58->Group = listViewGroup11;
			listViewItem59->Group = listViewGroup11;
			listViewItem60->Group = listViewGroup11;
			listViewItem61->Group = listViewGroup11;
			listViewItem62->Group = listViewGroup13;
			listViewItem63->Group = listViewGroup13;
			listViewItem64->Group = listViewGroup13;
			listViewItem65->Group = listViewGroup13;
			listViewItem66->Group = listViewGroup13;
			listViewItem67->Group = listViewGroup13;
			listViewItem68->Group = listViewGroup14;
			listViewItem69->Group = listViewGroup14;
			listViewItem70->Group = listViewGroup9;
			listViewItem71->Group = listViewGroup9;
			listViewItem72->Group = listViewGroup9;
			listViewItem73->Group = listViewGroup9;
			listViewItem74->Group = listViewGroup9;
			listViewItem75->Group = listViewGroup9;
			listViewItem76->Group = listViewGroup9;
			listViewItem77->Group = listViewGroup9;
			listViewItem78->Group = listViewGroup9;
			this->listView2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(34) {listViewItem45, listViewItem46, 
				listViewItem47, listViewItem48, listViewItem49, listViewItem50, listViewItem51, listViewItem52, listViewItem53, listViewItem54, 
				listViewItem55, listViewItem56, listViewItem57, listViewItem58, listViewItem59, listViewItem60, listViewItem61, listViewItem62, 
				listViewItem63, listViewItem64, listViewItem65, listViewItem66, listViewItem67, listViewItem68, listViewItem69, listViewItem70, 
				listViewItem71, listViewItem72, listViewItem73, listViewItem74, listViewItem75, listViewItem76, listViewItem77, listViewItem78});
			this->listView2->LabelEdit = true;
			this->listView2->Location = System::Drawing::Point(3, 3);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(199, 394);
			this->listView2->TabIndex = 1;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::SmallIcon;
			this->listView2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &database_manager::listView2_MouseClick);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->dataGridView3);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(205, 400);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"��������";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Snow;
			this->dataGridView3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedVertical;
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2});
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView3->GridColor = System::Drawing::Color::DarkRed;
			this->dataGridView3->Location = System::Drawing::Point(3, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(199, 394);
			this->dataGridView3->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"��������";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"��������";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(5);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->����ToolStripMenuItem, 
				this->������ToolStripMenuItem, this->���ToolStripMenuItem, this->������ToolStripMenuItem1, this->����������ToolStripMenuItem, 
				this->ToolStripMenuItem, this->������ToolStripMenuItem1, this->toolStripMenuItem25});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(0, 1, 0, 1);
			this->menuStrip1->ShowItemToolTips = true;
			this->menuStrip1->Size = System::Drawing::Size(52, 553);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical270;
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->toolStripMenuItem9, 
				this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6, 
				this->toolStripMenuItem7, this->toolStripMenuItem1, this->toolStripMenuItem20});
			this->����ToolStripMenuItem->ForeColor = System::Drawing::Color::RoyalBlue;
			this->����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"����ToolStripMenuItem.Image")));
			this->����ToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->����ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::A));
			this->����ToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->����ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripMenuItem35, 
				this->toolStripMenuItem36, this->������SPToolStripMenuItem1});
			this->toolStripMenuItem9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem9.Image")));
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem9->Text = L"�������";
			// 
			// toolStripMenuItem35
			// 
			this->toolStripMenuItem35->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem35.Image")));
			this->toolStripMenuItem35->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->toolStripMenuItem35->Name = L"toolStripMenuItem35";
			this->toolStripMenuItem35->Size = System::Drawing::Size(135, 22);
			this->toolStripMenuItem35->Text = L" ������";
			// 
			// toolStripMenuItem36
			// 
			this->toolStripMenuItem36->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem36.Image")));
			this->toolStripMenuItem36->Name = L"toolStripMenuItem36";
			this->toolStripMenuItem36->Size = System::Drawing::Size(135, 22);
			this->toolStripMenuItem36->Text = L" ����";
			// 
			// ������SPToolStripMenuItem1
			// 
			this->������SPToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������SPToolStripMenuItem1.Image")));
			this->������SPToolStripMenuItem1->Name = L"������SPToolStripMenuItem1";
			this->������SPToolStripMenuItem1->Size = System::Drawing::Size(135, 22);
			this->������SPToolStripMenuItem1->Text = L"������ SP";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->����ToolStripMenuItem1, 
				this->������ToolStripMenuItem, this->������SPToolStripMenuItem});
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->toolStripMenuItem2->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem2->Text = L"�������";
			// 
			// ����ToolStripMenuItem1
			// 
			this->����ToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"����ToolStripMenuItem1.Image")));
			this->����ToolStripMenuItem1->Name = L"����ToolStripMenuItem1";
			this->����ToolStripMenuItem1->Size = System::Drawing::Size(135, 22);
			this->����ToolStripMenuItem1->Text = L"����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &database_manager::������ToolStripMenuItem_Click);
			// 
			// ������SPToolStripMenuItem
			// 
			this->������SPToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������SPToolStripMenuItem.Image")));
			this->������SPToolStripMenuItem->Name = L"������SPToolStripMenuItem";
			this->������SPToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->������SPToolStripMenuItem->Text = L"������ SP";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem3.Image")));
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->toolStripMenuItem3->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem3->Text = L"���������";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem4.Image")));
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->toolStripMenuItem4->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem4->Text = L"��������� ���...";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(201, 6);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem6.Image")));
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem6->Text = L"��������� ��������...";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem7.Image")));
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem7->Text = L"������";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(201, 6);
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem20.Image")));
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::End));
			this->toolStripMenuItem20->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem20->Text = L"�����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {this->toolStripMenuItem18, 
				this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripMenuItem14, 
				this->toolStripMenuItem15, this->toolStripMenuItem34, this->�����������ToolStripMenuItem, this->toolStripMenuItem37, this->������������ToolStripMenuItem});
			this->������ToolStripMenuItem->ForeColor = System::Drawing::Color::Firebrick;
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::C));
			this->������ToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem18
			// 
			this->toolStripMenuItem18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem18.Image")));
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->toolStripMenuItem18->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem18->Text = L"�������";
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem10.Image")));
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripMenuItem10->RightToLeftAutoMirrorImage = true;
			this->toolStripMenuItem10->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->toolStripMenuItem10->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem10->Text = L"������";
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(178, 6);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->toolStripMenuItem12->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem12->Text = L"��������";
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem13.Image")));
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->toolStripMenuItem13->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem13->Text = L"����������";
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->toolStripMenuItem14->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem14->Text = L"��������";
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->toolStripMenuItem15->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem15->Text = L"�������";
			// 
			// toolStripMenuItem34
			// 
			this->toolStripMenuItem34->Name = L"toolStripMenuItem34";
			this->toolStripMenuItem34->Size = System::Drawing::Size(178, 6);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->�����������ToolStripMenuItem->Text = L"�������� ���";
			// 
			// toolStripMenuItem37
			// 
			this->toolStripMenuItem37->Name = L"toolStripMenuItem37";
			this->toolStripMenuItem37->Size = System::Drawing::Size(178, 6);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->�����ToolStripMenuItem, 
				this->������ToolStripMenuItem});
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->������������ToolStripMenuItem->Text = L"����� � ������";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->toolStripMenuItem16, 
				this->toolStripMenuItem17, this->toolStripMenuItem8, this->����������������������ToolStripMenuItem, this->���������������������ToolStripMenuItem, 
				this->toolStripMenuItem40, this->������������������ToolStripMenuItem, this->���������������ToolStripMenuItem, this->����������ToolStripMenuItem, 
				this->�����ToolStripMenuItem});
			this->���ToolStripMenuItem->ForeColor = System::Drawing::Color::Brown;
			this->���ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"���ToolStripMenuItem.Image")));
			this->���ToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->���ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::V));
			this->���ToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->���ToolStripMenuItem->Text = L"���";
			this->���ToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->���ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItem21, 
				this->toolStripMenuItem22});
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(195, 22);
			this->toolStripMenuItem16->Text = L"����...";
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(104, 22);
			this->toolStripMenuItem21->Text = L"�����";
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			this->toolStripMenuItem22->Size = System::Drawing::Size(104, 22);
			this->toolStripMenuItem22->Text = L"���";
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(195, 22);
			this->toolStripMenuItem17->Text = L"������������� �����...";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(192, 6);
			// 
			// ����������������������ToolStripMenuItem
			// 
			this->����������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->darkToolStripMenuItem, 
				this->whiteToolStripMenuItem, this->voidToolStripMenuItem});
			this->����������������������ToolStripMenuItem->Name = L"����������������������ToolStripMenuItem";
			this->����������������������ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->����������������������ToolStripMenuItem->Text = L"����";
			// 
			// darkToolStripMenuItem
			// 
			this->darkToolStripMenuItem->Name = L"darkToolStripMenuItem";
			this->darkToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->darkToolStripMenuItem->Text = L"Dark";
			// 
			// whiteToolStripMenuItem
			// 
			this->whiteToolStripMenuItem->Name = L"whiteToolStripMenuItem";
			this->whiteToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->whiteToolStripMenuItem->Text = L"White";
			// 
			// voidToolStripMenuItem
			// 
			this->voidToolStripMenuItem->Name = L"voidToolStripMenuItem";
			this->voidToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->voidToolStripMenuItem->Text = L"Void";
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->���������������������ToolStripMenuItem->Text = L"�������� ���";
			// 
			// toolStripMenuItem40
			// 
			this->toolStripMenuItem40->Name = L"toolStripMenuItem40";
			this->toolStripMenuItem40->Size = System::Drawing::Size(192, 6);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->������������������ToolStripMenuItem->Text = L"��������� ���������";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->���������������ToolStripMenuItem->Text = L"������ ���������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->����������ToolStripMenuItem->Text = L"������ ����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->�����ToolStripMenuItem->Text = L"�� ���� �����";
			// 
			// ������ToolStripMenuItem1
			// 
			this->������ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {this->���������������ToolStripMenuItem, 
				this->��������������ToolStripMenuItem, this->toolStripMenuItem38, this->����������������ToolStripMenuItem, this->toolStripMenuItem43, 
				this->������������ToolStripMenuItem, this->toolStripMenuItem39, this->����������������������������ToolStripMenuItem, this->��������ToolStripMenuItem, 
				this->����������������ToolStripMenuItem, this->���������������ToolStripMenuItem, this->����������������ToolStripMenuItem});
			this->������ToolStripMenuItem1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->������ToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem1.Image")));
			this->������ToolStripMenuItem1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->������ToolStripMenuItem1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->������ToolStripMenuItem1->Name = L"������ToolStripMenuItem1";
			this->������ToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::P));
			this->������ToolStripMenuItem1->Size = System::Drawing::Size(51, 67);
			this->������ToolStripMenuItem1->Text = L"������";
			this->������ToolStripMenuItem1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->������ToolStripMenuItem1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->���������������ToolStripMenuItem->Text = L"�������� �������";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->��������������ToolStripMenuItem->Text = L"������� �������";
			// 
			// toolStripMenuItem38
			// 
			this->toolStripMenuItem38->Name = L"toolStripMenuItem38";
			this->toolStripMenuItem38->Size = System::Drawing::Size(264, 6);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->����������������ToolStripMenuItem->Text = L"�������� ��� �����";
			// 
			// toolStripMenuItem43
			// 
			this->toolStripMenuItem43->Name = L"toolStripMenuItem43";
			this->toolStripMenuItem43->Size = System::Drawing::Size(267, 22);
			this->toolStripMenuItem43->Text = L"�������� ����";
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->������������ToolStripMenuItem->Text = L"������������� ����";
			// 
			// toolStripMenuItem39
			// 
			this->toolStripMenuItem39->Name = L"toolStripMenuItem39";
			this->toolStripMenuItem39->Size = System::Drawing::Size(264, 6);
			// 
			// ����������������������������ToolStripMenuItem
			// 
			this->����������������������������ToolStripMenuItem->Name = L"����������������������������ToolStripMenuItem";
			this->����������������������������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->����������������������������ToolStripMenuItem->Text = L"��������� ����������� ��������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->��������ToolStripMenuItem->Text = L"�������� ���� ��������������";
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->����������������ToolStripMenuItem->Text = L"���������� ���� ������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &database_manager::����������������ToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->���������������ToolStripMenuItem->Text = L"�������� �������";
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->����������������ToolStripMenuItem->Text = L"�������� ��������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->���������������ToolStripMenuItem, 
				this->��������������ToolStripMenuItem, this->�������������ToolStripMenuItem, this->toolStripMenuItem41, this->�������������ToolStripMenuItem, 
				this->������������ToolStripMenuItem, this->�����������ToolStripMenuItem, this->toolStripMenuItem42});
			this->����������ToolStripMenuItem->ForeColor = System::Drawing::Color::Brown;
			this->����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"����������ToolStripMenuItem.Image")));
			this->����������ToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->����������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::B));
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->����������ToolStripMenuItem->Text = L"����";
			this->����������ToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->����������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->���������������ToolStripMenuItem->Text = L"��������� ������";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->�������������ToolStripMenuItem->Text = L"������� ������";
			// 
			// toolStripMenuItem41
			// 
			this->toolStripMenuItem41->Name = L"toolStripMenuItem41";
			this->toolStripMenuItem41->Size = System::Drawing::Size(171, 6);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->�������������ToolStripMenuItem->Text = L"��������� ����";
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->������������ToolStripMenuItem->Text = L"�������� ����";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->�����������ToolStripMenuItem->Text = L"������� ����";
			// 
			// toolStripMenuItem42
			// 
			this->toolStripMenuItem42->Name = L"toolStripMenuItem42";
			this->toolStripMenuItem42->Size = System::Drawing::Size(171, 6);
			// 
			// ToolStripMenuItem
			// 
			this->ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->������ToolStripMenuItem, 
				this->toolStripMenuItem44, this->���������������ToolStripMenuItem, this->����ToolStripMenuItem, this->����ToolStripMenuItem1, 
				this->������������ToolStripMenuItem, this->��������������ToolStripMenuItem});
			this->ToolStripMenuItem->ForeColor = System::Drawing::Color::Brown;
			this->ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripMenuItem.Image")));
			this->ToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ToolStripMenuItem->Name = L"ToolStripMenuItem";
			this->ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::D));
			this->ToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->ToolStripMenuItem->Text = L"�������";
			this->ToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// toolStripMenuItem44
			// 
			this->toolStripMenuItem44->Name = L"toolStripMenuItem44";
			this->toolStripMenuItem44->Size = System::Drawing::Size(176, 22);
			this->toolStripMenuItem44->Text = L"������ ��� ������";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->���������������ToolStripMenuItem->Text = L"������ � ��������";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(173, 6);
			// 
			// ����ToolStripMenuItem1
			// 
			this->����ToolStripMenuItem1->Name = L"����ToolStripMenuItem1";
			this->����ToolStripMenuItem1->Size = System::Drawing::Size(176, 22);
			this->����ToolStripMenuItem1->Text = L"����";
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->������������ToolStripMenuItem->Text = L"�������� ����";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->��������������ToolStripMenuItem->Text = L"����� ���������";
			// 
			// ������ToolStripMenuItem1
			// 
			this->������ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->�����������������������ToolStripMenuItem, 
				this->���������������������ToolStripMenuItem, this->��������������ToolStripMenuItem, this->���������������������ToolStripMenuItem});
			this->������ToolStripMenuItem1->ForeColor = System::Drawing::Color::Brown;
			this->������ToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem1.Image")));
			this->������ToolStripMenuItem1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->������ToolStripMenuItem1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->������ToolStripMenuItem1->Name = L"������ToolStripMenuItem1";
			this->������ToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::I));
			this->������ToolStripMenuItem1->Size = System::Drawing::Size(51, 67);
			this->������ToolStripMenuItem1->Text = L"������";
			this->������ToolStripMenuItem1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->������ToolStripMenuItem1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// �����������������������ToolStripMenuItem
			// 
			this->�����������������������ToolStripMenuItem->Name = L"�����������������������ToolStripMenuItem";
			this->�����������������������ToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->�����������������������ToolStripMenuItem->Text = L"�������� ��������� ������";
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->���������������������ToolStripMenuItem->Text = L"������ ��������� ������";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->���������������������ToolStripMenuItem->Text = L"����� ������ � ���������";
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStripMenuItem27, 
				this->toolStripMenuItem28, this->toolStripMenuItem29, this->toolStripMenuItem30, this->toolStripMenuItem31, this->toolStripMenuItem26, 
				this->����������ToolStripMenuItem});
			this->toolStripMenuItem25->ForeColor = System::Drawing::Color::Brown;
			this->toolStripMenuItem25->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem25.Image")));
			this->toolStripMenuItem25->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->toolStripMenuItem25->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem25->Name = L"toolStripMenuItem25";
			this->toolStripMenuItem25->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::H));
			this->toolStripMenuItem25->Size = System::Drawing::Size(51, 67);
			this->toolStripMenuItem25->Text = L"�������";
			this->toolStripMenuItem25->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->toolStripMenuItem25->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem27
			// 
			this->toolStripMenuItem27->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem27.Image")));
			this->toolStripMenuItem27->Name = L"toolStripMenuItem27";
			this->toolStripMenuItem27->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem27->Text = L"�������";
			// 
			// toolStripMenuItem28
			// 
			this->toolStripMenuItem28->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem28.Image")));
			this->toolStripMenuItem28->Name = L"toolStripMenuItem28";
			this->toolStripMenuItem28->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem28->Text = L"�����";
			// 
			// toolStripMenuItem29
			// 
			this->toolStripMenuItem29->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem29.Image")));
			this->toolStripMenuItem29->Name = L"toolStripMenuItem29";
			this->toolStripMenuItem29->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem29->Text = L"����������";
			// 
			// toolStripMenuItem30
			// 
			this->toolStripMenuItem30->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem30.Image")));
			this->toolStripMenuItem30->Name = L"toolStripMenuItem30";
			this->toolStripMenuItem30->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem30->Text = L" �������� �� ������";
			// 
			// toolStripMenuItem31
			// 
			this->toolStripMenuItem31->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem31.Image")));
			this->toolStripMenuItem31->Name = L"toolStripMenuItem31";
			this->toolStripMenuItem31->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem31->Text = L" ��������� ������� ����������";
			// 
			// toolStripMenuItem26
			// 
			this->toolStripMenuItem26->Name = L"toolStripMenuItem26";
			this->toolStripMenuItem26->Size = System::Drawing::Size(255, 6);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->����������ToolStripMenuItem->Text = L"� ��������� SeePage 0.43";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(930, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(16, 20);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(199, 29);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->tabControl1);
			this->splitContainer1->Panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->splitContainer1->Panel1MinSize = 10;
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->panel1);
			this->splitContainer1->Panel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->splitContainer1->Panel2MinSize = 10;
			this->splitContainer1->Size = System::Drawing::Size(736, 405);
			this->splitContainer1->SplitterDistance = 375;
			this->splitContainer1->TabIndex = 15;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->dataGridView4);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(205, 400);
			this->tabPage8->TabIndex = 3;
			this->tabPage8->Text = L"�������";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToOrderColumns = true;
			this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->Column16});
			this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView4->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView4->Location = System::Drawing::Point(3, 3);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->Size = System::Drawing::Size(199, 394);
			this->dataGridView4->TabIndex = 0;
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &database_manager::dataGridView4_CellContentClick);
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"�������";
			this->Column16->Name = L"Column16";
			this->Column16->Width = 198;
			// 
			// database_manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1176, 578);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tabControl3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->treeView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1081, 599);
			this->Name = L"database_manager";
			this->Text = L"Relation Thread";
			this->TransparencyKey = System::Drawing::Color::Red;
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

private: 
	void		 addedBlockOfNormalSize						(	);
	
	void		 addedBlockOfFullSize						(	);
	
	System::Void listView1_Click							(System::Object^  sender, System::EventArgs^  e);
	
	System::Void panel1_DoubleClick							(System::Object^  sender, System::EventArgs^  e);
	
	System::Void �������ToolStripButton_Click				(System::Object^  sender, System::EventArgs^  e);
	
	System::Void listView2_MouseClick						(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	
	System::Void ������ToolStripMenuItem_Click				(System::Object^  sender, System::EventArgs^  e);
	
	System::Void ����������������ToolStripMenuItem_Click	(System::Object^  sender, System::EventArgs^  e);
	
	System::Void toolStripButton1_Click						(System::Object^  sender, System::EventArgs^  e);
	

private: System::Void dataGridView4_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
};

} 