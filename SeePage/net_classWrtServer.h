#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SeePage {

	/// <summary>
	/// ������ ��� net_classWrtServer
	///
	/// ��������! ��� ��������� ����� ����� ������ ���������� ����� ��������
	///          �������� ����� ����� �������� ("Resource File Name") ��� �������� ���������� ������������ �������,
	///          ���������� �� ����� ������� � ����������� .resx, �� ������� ������� ������ �����. � ��������� ������,
	///          ������������ �� ������ ��������� �������� � ���������������
	///          ���������, ��������������� ������ �����.
	/// </summary>
	public ref class net_classWrtServer : public System::Windows::Forms::Form
	{
	public:
		net_classWrtServer(void)
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
	private: FastColoredTextBoxNS::FastColoredTextBox^  fastColoredTextBox1;
	private: FastColoredTextBoxNS::FastColoredTextBox^  fastColoredTextBox2;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  �������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  �������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ���������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ������ToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  ��������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ����������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  �������ToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  �������ToolStripButton;
	private: System::Windows::Forms::ListView^  listView1;
	public: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: 
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	public: 
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem35;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem36;
	private: System::Windows::Forms::ToolStripMenuItem^  ������SPToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������SPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem20;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem18;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem10;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem11;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem13;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem14;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem15;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem34;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem37;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem16;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem21;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem22;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem17;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  darkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  whiteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  voidToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem40;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem38;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem43;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem39;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem41;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem42;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem44;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem45;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem46;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem47;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem25;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem27;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem28;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem29;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem30;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem31;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem26;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;








	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(net_classWrtServer::typeid));
			System::Windows::Forms::ListViewGroup^  listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"�����", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup2 = (gcnew System::Windows::Forms::ListViewGroup(L"������������ �����", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup3 = (gcnew System::Windows::Forms::ListViewGroup(L"�������", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup4 = (gcnew System::Windows::Forms::ListViewGroup(L"������", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup5 = (gcnew System::Windows::Forms::ListViewGroup(L"���������", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup6 = (gcnew System::Windows::Forms::ListViewGroup(L"������", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup7 = (gcnew System::Windows::Forms::ListViewGroup(L"�������� � ����������", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L"iostream"));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L"stdafx"));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(L"fstream"));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(L"stdio"));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(L"boost::asio"));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(L"iterator"));
			System::Windows::Forms::ListViewItem^  listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(L"vector"));
			System::Windows::Forms::ListViewItem^  listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(L"thread"));
			System::Windows::Forms::ListViewItem^  listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(L"map"));
			System::Windows::Forms::ListViewItem^  listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(L"list"));
			System::Windows::Forms::ListViewItem^  listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(L"set"));
			System::Windows::Forms::ListViewItem^  listViewItem12 = (gcnew System::Windows::Forms::ListViewItem(L"string"));
			System::Windows::Forms::ListViewItem^  listViewItem13 = (gcnew System::Windows::Forms::ListViewItem(L"math"));
			System::Windows::Forms::ListViewItem^  listViewItem14 = (gcnew System::Windows::Forms::ListViewItem(L"matrix"));
			System::Windows::Forms::ListViewItem^  listViewItem15 = (gcnew System::Windows::Forms::ListViewItem(L"boost::thread"));
			System::Windows::Forms::ListViewItem^  listViewItem16 = (gcnew System::Windows::Forms::ListViewItem(L"boost::io"));
			System::Windows::Forms::ListViewItem^  listViewItem17 = (gcnew System::Windows::Forms::ListViewItem(L"ctime"));
			System::Windows::Forms::ListViewItem^  listViewItem18 = (gcnew System::Windows::Forms::ListViewItem(L"boost::random"));
			System::Windows::Forms::ListViewItem^  listViewItem19 = (gcnew System::Windows::Forms::ListViewItem(L"boost::graph"));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->fastColoredTextBox1 = (gcnew FastColoredTextBoxNS::FastColoredTextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->fastColoredTextBox2 = (gcnew FastColoredTextBoxNS::FastColoredTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->���������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->��������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->����������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
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
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem45 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem46 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem47 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem25 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem27 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem28 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem29 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem30 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem31 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem26 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
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
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox2->Location = System::Drawing::Point(3, 3);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(510, 516);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
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
			this->tabPage1->Controls->Add(this->fastColoredTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(584, 529);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Header";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// fastColoredTextBox1
			// 
			this->fastColoredTextBox1->AutoCompleteBracketsList = gcnew cli::array< System::Char >(10) {'(', ')', '{', '}', '[', ']', '\"', 
				'\"', '\'', '\''};
			this->fastColoredTextBox1->AutoIndentCharsPatterns = L"\r\n^\\s*[\\w\\.]+(\\s\\w+)\?\\s*(\?<range>=)\\s*(\?<range>[^;]+);\r\n^\\s*(case|default)\\s*[^:]" 
				L"*(\?<range>:)\\s*(\?<range>[^;]+);\r\n";
			this->fastColoredTextBox1->AutoScrollMinSize = System::Drawing::Size(27, 14);
			this->fastColoredTextBox1->BackBrush = nullptr;
			this->fastColoredTextBox1->BracketsHighlightStrategy = FastColoredTextBoxNS::BracketsHighlightStrategy::Strategy2;
			this->fastColoredTextBox1->CharHeight = 14;
			this->fastColoredTextBox1->CharWidth = 8;
			this->fastColoredTextBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->fastColoredTextBox1->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->fastColoredTextBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F));
			this->fastColoredTextBox1->IndentBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->fastColoredTextBox1->IsReplaceMode = false;
			this->fastColoredTextBox1->Language = FastColoredTextBoxNS::Language::CSharp;
			this->fastColoredTextBox1->LeftBracket = '(';
			this->fastColoredTextBox1->LeftBracket2 = '{';
			this->fastColoredTextBox1->LineNumberColor = System::Drawing::Color::Blue;
			this->fastColoredTextBox1->Location = System::Drawing::Point(0, 0);
			this->fastColoredTextBox1->Name = L"fastColoredTextBox1";
			this->fastColoredTextBox1->Paddings = System::Windows::Forms::Padding(0);
			this->fastColoredTextBox1->RightBracket = ')';
			this->fastColoredTextBox1->RightBracket2 = '}';
			this->fastColoredTextBox1->SelectionColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->fastColoredTextBox1->ServiceColors = (cli::safe_cast<FastColoredTextBoxNS::ServiceColors^  >(resources->GetObject(L"fastColoredTextBox1.ServiceColors")));
			this->fastColoredTextBox1->Size = System::Drawing::Size(584, 529);
			this->fastColoredTextBox1->TabIndex = 0;
			this->fastColoredTextBox1->Zoom = 100;
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tabControl1->Location = System::Drawing::Point(247, 25);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(592, 555);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->fastColoredTextBox2);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(516, 522);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Main CPP";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// fastColoredTextBox2
			// 
			this->fastColoredTextBox2->AutoCompleteBracketsList = gcnew cli::array< System::Char >(10) {'(', ')', '{', '}', '[', ']', '\"', 
				'\"', '\'', '\''};
			this->fastColoredTextBox2->AutoIndentCharsPatterns = L"\r\n^\\s*[\\w\\.]+(\\s\\w+)\?\\s*(\?<range>=)\\s*(\?<range>[^;]+);\r\n^\\s*(case|default)\\s*[^:]" 
				L"*(\?<range>:)\\s*(\?<range>[^;]+);\r\n";
			this->fastColoredTextBox2->AutoScrollMinSize = System::Drawing::Size(2, 14);
			this->fastColoredTextBox2->BackBrush = nullptr;
			this->fastColoredTextBox2->BracketsHighlightStrategy = FastColoredTextBoxNS::BracketsHighlightStrategy::Strategy2;
			this->fastColoredTextBox2->CharHeight = 14;
			this->fastColoredTextBox2->CharWidth = 8;
			this->fastColoredTextBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->fastColoredTextBox2->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->fastColoredTextBox2->IndentBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->fastColoredTextBox2->IsReplaceMode = false;
			this->fastColoredTextBox2->Language = FastColoredTextBoxNS::Language::CSharp;
			this->fastColoredTextBox2->LeftBracket = '(';
			this->fastColoredTextBox2->LeftBracket2 = '{';
			this->fastColoredTextBox2->LineNumberColor = System::Drawing::Color::Blue;
			this->fastColoredTextBox2->Location = System::Drawing::Point(-3, -3);
			this->fastColoredTextBox2->Name = L"fastColoredTextBox2";
			this->fastColoredTextBox2->Paddings = System::Windows::Forms::Padding(0);
			this->fastColoredTextBox2->RightBracket = ')';
			this->fastColoredTextBox2->RightBracket2 = '}';
			this->fastColoredTextBox2->SelectionColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->fastColoredTextBox2->ServiceColors = (cli::safe_cast<FastColoredTextBoxNS::ServiceColors^  >(resources->GetObject(L"fastColoredTextBox2.ServiceColors")));
			this->fastColoredTextBox2->Size = System::Drawing::Size(513, 522);
			this->fastColoredTextBox2->TabIndex = 1;
			this->fastColoredTextBox2->Zoom = 100;
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
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->Location = System::Drawing::Point(841, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(134, 533);
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
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::Transparent;
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->�������ToolStripButton, 
				this->�������ToolStripButton, this->���������ToolStripButton, this->������ToolStripButton, this->toolStripSeparator, this->��������ToolStripButton, 
				this->����������ToolStripButton, this->�������ToolStripButton, this->toolStripSeparator1, this->�������ToolStripButton});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->toolStrip1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStrip1->Size = System::Drawing::Size(979, 25);
			this->toolStrip1->TabIndex = 16;
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
			// ������ToolStripButton
			// 
			this->������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripButton.Image")));
			this->������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->������ToolStripButton->Name = L"������ToolStripButton";
			this->������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->������ToolStripButton->Text = L"&������";
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
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�������ToolStripButton->Text = L"���&����";
			// 
			// listView1
			// 
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			listViewGroup1->Header = L"�����";
			listViewGroup1->Name = L"listViewGroup1";
			listViewGroup2->Header = L"������������ �����";
			listViewGroup2->Name = L"listViewGroup2";
			listViewGroup3->Header = L"�������";
			listViewGroup3->Name = L"listViewGroup3";
			listViewGroup4->Header = L"������";
			listViewGroup4->Name = L"listViewGroup4";
			listViewGroup5->Header = L"���������";
			listViewGroup5->Name = L"listViewGroup5";
			listViewGroup6->Header = L"������";
			listViewGroup6->Name = L"listViewGroup6";
			listViewGroup7->Header = L"�������� � ����������";
			listViewGroup7->Name = L"listViewGroup7";
			this->listView1->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(7) {listViewGroup1, listViewGroup2, 
				listViewGroup3, listViewGroup4, listViewGroup5, listViewGroup6, listViewGroup7});
			listViewItem1->Group = listViewGroup2;
			listViewItem2->Group = listViewGroup2;
			listViewItem3->Group = listViewGroup2;
			listViewItem4->Group = listViewGroup2;
			listViewItem5->Group = listViewGroup2;
			listViewItem6->Group = listViewGroup2;
			listViewItem7->Group = listViewGroup2;
			listViewItem8->Group = listViewGroup2;
			listViewItem9->Group = listViewGroup2;
			listViewItem10->Group = listViewGroup2;
			listViewItem11->Group = listViewGroup2;
			listViewItem14->ToolTipText = L"boost::matrix";
			listViewItem18->Group = listViewGroup2;
			listViewItem19->Group = listViewGroup2;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(19) {listViewItem1, listViewItem2, 
				listViewItem3, listViewItem4, listViewItem5, listViewItem6, listViewItem7, listViewItem8, listViewItem9, listViewItem10, listViewItem11, 
				listViewItem12, listViewItem13, listViewItem14, listViewItem15, listViewItem16, listViewItem17, listViewItem18, listViewItem19});
			this->listView1->Location = System::Drawing::Point(52, 25);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(189, 533);
			this->listView1->TabIndex = 17;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Tile;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(5);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->����ToolStripMenuItem, 
				this->������ToolStripMenuItem, this->���ToolStripMenuItem, this->������ToolStripMenuItem1, this->����������ToolStripMenuItem, 
				this->ToolStripMenuItem, this->������ToolStripMenuItem1, this->������ToolStripMenuItem, this->������ToolStripMenuItem, this->toolStripMenuItem25});
			this->menuStrip1->Location = System::Drawing::Point(0, 25);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(0, 1, 0, 1);
			this->menuStrip1->ShowItemToolTips = true;
			this->menuStrip1->Size = System::Drawing::Size(52, 555);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical270;
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->toolStripMenuItem9, 
				this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6, 
				this->toolStripMenuItem7, this->toolStripMenuItem1, this->toolStripMenuItem20});
			this->����ToolStripMenuItem->ForeColor = System::Drawing::Color::Coral;
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
			this->������ToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
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
			this->���ToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
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
			this->������ToolStripMenuItem1->ForeColor = System::Drawing::Color::Coral;
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
			this->����������������ToolStripMenuItem->Text = L"�������� ��������";
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
			this->����������ToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
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
			this->ToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
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
			this->������ToolStripMenuItem1->ForeColor = System::Drawing::Color::DarkGreen;
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
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->���������ToolStripMenuItem, 
				this->��������������������ToolStripMenuItem, this->toolStripMenuItem45, this->���������������������ToolStripMenuItem, this->�������������������ToolStripMenuItem, 
				this->toolStripMenuItem46, this->�������������ToolStripMenuItem});
			this->������ToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::L));
			this->������ToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->��������������������ToolStripMenuItem->Text = L"������� ������ �������";
			// 
			// toolStripMenuItem45
			// 
			this->toolStripMenuItem45->Name = L"toolStripMenuItem45";
			this->toolStripMenuItem45->Size = System::Drawing::Size(213, 6);
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->���������������������ToolStripMenuItem->Text = L"�������� �� �����������";
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->�������������������ToolStripMenuItem->Text = L"�������� �� ���������";
			// 
			// toolStripMenuItem46
			// 
			this->toolStripMenuItem46->Name = L"toolStripMenuItem46";
			this->toolStripMenuItem46->Size = System::Drawing::Size(213, 6);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->�������������ToolStripMenuItem->Text = L"�� ������ �����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->��������������ToolStripMenuItem, 
				this->���������������ToolStripMenuItem, this->toolStripMenuItem47, this->���������ToolStripMenuItem, this->���������ToolStripMenuItem});
			this->������ToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::S));
			this->������ToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->��������������ToolStripMenuItem->Text = L"������ ��������";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->���������������ToolStripMenuItem->Text = L"������� ��������";
			// 
			// toolStripMenuItem47
			// 
			this->toolStripMenuItem47->Name = L"toolStripMenuItem47";
			this->toolStripMenuItem47->Size = System::Drawing::Size(177, 6);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStripMenuItem27, 
				this->toolStripMenuItem28, this->toolStripMenuItem29, this->toolStripMenuItem30, this->toolStripMenuItem31, this->toolStripMenuItem26, 
				this->����������ToolStripMenuItem});
			this->toolStripMenuItem25->ForeColor = System::Drawing::Color::DarkGreen;
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
			// net_classWrtServer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(979, 580);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tabControl1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::Color::OrangeRed;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"net_classWrtServer";
			this->Text = L"AirServers";
			this->Load += gcnew System::EventHandler(this, &net_classWrtServer::net_classWrtServer_Load);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void net_classWrtServer_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	/*		 if(openFileDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK) {
				 String^ path = openFileDialog1 -> FileName; 
				 richTextBox1->LoadFile(path, RichTextBoxStreamType::PlainText);
			 }
			 */
			 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*	 if(folderBrowserDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK) {
					 System::String^ path = folderBrowserDialog1 -> SelectedPath; 
				 richTextBox1->SaveFile(path, RichTextBoxStreamType::PlainText);
				 richTextBox2->SaveFile(path, RichTextBoxStreamType::PlainText);
			 } */
		 }
};
}
