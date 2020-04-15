#pragma once
#include "Browser.h"
#include "conio.h"
#include "CreateProjectModule.h"
#include "stdlib.h"
#include "MailSend.h"
#include "Helper.h"
#include "Upload.h"
#include "NewElement.h"
#include "CreateLibs.h"

#define NULL 0

namespace SeePage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Ñâîäêà äëÿ SeePageModule
	///
	/// Âíèìàíèå! Ïğè èçìåíåíèè èìåíè ıòîãî êëàññà íåîáõîäèìî òàêæå èçìåíèòü
	///          ñâîéñòâî èìåíè ôàéëà ğåñóğñîâ ("Resource File Name") äëÿ ñğåäñòâà êîìïèëÿöèè óïğàâëÿåìîãî ğåñóğñà,
	///          ñâÿçàííîãî ñî âñåìè ôàéëàìè ñ ğàñøèğåíèåì .resx, îò êîòîğûõ çàâèñèò äàííûé êëàññ. Â ïğîòèâíîì ñëó÷àå,
	///          êîíñòğóêòîğû íå ñìîãóò ïğàâèëüíî ğàáîòàòü ñ ëîêàëèçîâàííûìè
	///          ğåñóğñàìè, ñîïîñòàâëåííûìè äàííîé ôîğìå.
	/// </summary>
	public ref class SeePageModule : public System::Windows::Forms::Form
	{

		System::String^ path1;

	public:
		SeePageModule(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~SeePageModule()
		{
			if (components != 0)
			{
				delete components;
			}
		}

public: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
public: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
private: System::Windows::Forms::FontDialog^  fontDialog1; 
private: System::Windows::Forms::ColorDialog^  colorDialog1;
private: System::Windows::Forms::ColorDialog^  colorDialog2;
private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  êîïèğîâàòüToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  âñòàâèòüToolStripMenuItem;
private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem23;
private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem5;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem7;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem20;
private: System::Windows::Forms::ToolStripMenuItem^  ïğàâêàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem10;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem11;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem12;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem13;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem14;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem15;
private: System::Windows::Forms::ToolStripMenuItem^  âèäToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem16;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem21;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem22;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem17;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem8;
public: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::TabControl^  tabControl1;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::TabControl^  tabControl2;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
private: System::Windows::Forms::ToolStripLabel^  toolStripLabel1;
private: System::Windows::Forms::ToolStrip^  toolStrip2;
private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox4;
private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox5;
private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator7;
private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator8;
private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton1;
private: System::Windows::Forms::ToolStripButton^  toolStripButton16;
private: System::Windows::Forms::ToolStripButton^  toolStripButton17;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator9;
private: System::Windows::Forms::ToolStripLabel^  toolStripLabel2;
private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox1;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem9;
private: System::Windows::Forms::TabControl^  tabControl3;
private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem18;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem25;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem27;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem28;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem29;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem30;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem31;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem26;
private: System::Windows::Forms::ToolStripMenuItem^  îÏğîãğàììåToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem35;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem36;
private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  ïğîåêòToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  øàáëîíSPToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem34;
private: System::Windows::Forms::ToolStripMenuItem^  âûäåëèòüÂñåToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem37;
private: System::Windows::Forms::ToolStripMenuItem^  ïîèñêÈÇàìåíàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ïîèñêToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  çàìåíàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  øàáëîíSPToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  ïğîåêòToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  äàííûåToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  ôîğìàòToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ñåğâèñToolStripMenuItem;
private: System::Windows::Forms::RichTextBox^  richTextBox6;
private: System::Windows::Forms::RichTextBox^  richTextBox7;
private: System::Windows::Forms::TreeView^  treeView1;
private: System::Windows::Forms::ToolStripMenuItem^  äîáàâèòüİëåìåíòToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüİëåìåíòToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem38;
private: System::Windows::Forms::ToolStripMenuItem^  ïîêàçàòüÂñåÔàéëûToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  äîáàâèòüÔàéëToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem39;
private: System::Windows::Forms::ToolStripMenuItem^  íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  îáíîâèòüToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem40;
private: System::Windows::Forms::ToolStripMenuItem^  äèñïåò÷åğİëåìåíòîâToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ïàíåëüİëåìåíòîâToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  äğóãèåÎêíàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  âîÂñåToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ìåíåäæåğÏğîåêòîâToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ñâîéñòâàÏğîåêòàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  çàïóñêToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  çàïóñêÁåçÑáîğêèToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  îêíàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem43;
private: System::Windows::Forms::ToolStripMenuItem^  ìåíåäæåğØàáëîíîâToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem44;
private: System::Windows::Forms::ToolStripMenuItem^  îêíàToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  î÷èñòèòüÎêíàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  òî÷êàÎñòàíîâêèToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  äîáàâèòüÄàííûåToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  âûğàâíÿòüToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem45;
private: System::Windows::Forms::ToolStripMenuItem^  èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem46;
private: System::Windows::Forms::ToolStripMenuItem^  ïîÖåíòğóÔîğìûToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  èìïîğòØàáëîíîâToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ıêñïîğòØàáëîíîâToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem47;
private: System::Windows::Forms::ToolStripMenuItem^  íàñòğîéêàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ïàğàìåòğûToolStripMenuItem; 
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::ListView^  listView1;
private: System::Windows::Forms::RichTextBox^  richTextBox8;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::ToolStripButton^  ñîçäàòüToolStripButton1;
private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton2;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem19;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem24;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem33;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem32;
private: System::Windows::Forms::ToolStripButton^  îòêğûòüToolStripButton1;
private: System::Windows::Forms::ToolStripButton^  ñîõğàíèòüToolStripButton1;
private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
private: System::Windows::Forms::ToolStripButton^  âûğåçàòüToolStripButton1;
private: System::Windows::Forms::ToolStripButton^  êîïèğîâàòüToolStripButton1;
private: System::Windows::Forms::ToolStripButton^  âñòàâêàToolStripButton1;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton3;
private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton4;
private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton5;
private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
private: System::Windows::Forms::ToolStripButton^  toolStripButton8;
private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox1;
private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox2;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
private: System::Windows::Forms::ToolStripButton^  toolStripButton9;
private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox3;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
private: System::Windows::Forms::ToolStripButton^  toolStripButton10;
private: System::Windows::Forms::ToolStripButton^  toolStripButton11;
private: System::Windows::Forms::ToolStripButton^  toolStripButton12;
private: System::Windows::Forms::ToolStripButton^  toolStripButton13;
private: System::Windows::Forms::ToolStripButton^  toolStripButton14;
private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton6;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
private: System::Windows::Forms::ToolStripButton^  toolStripButton15;
private: System::Windows::Forms::ToolStripButton^  ñïğàâêàToolStripButton1;
private: System::Windows::Forms::ToolStrip^  toolStrip1;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem49; 
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem50;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem51;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem52;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem53;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog2;
private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog2;
private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog3;
private: System::Windows::Forms::ToolStripMenuItem^  ïîñòğîåíèåToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ïîñòğîèòüÏğîåêòToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  î÷èñòèòüÏğîåêòToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüÏğîåêòToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem41;
private: System::Windows::Forms::ToolStripMenuItem^  ïîñòğîèòüÔàéëToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  î÷èñòèòüÔàéëToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüÔàéëToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem42;
private: System::Windows::Forms::ToolStripMenuItem^  îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem;
private: System::Windows::Forms::TabPage^  tabPage8;
private: System::Windows::Forms::TreeView^  treeView2;
private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog4;
private: System::Windows::Forms::ToolStripMenuItem^  darkToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  whiteToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  voidToolStripMenuItem;
private: System::Windows::Forms::TabPage^  tabPage9;
private: System::Windows::Forms::TabPage^  tabPage10;
private: System::Windows::Forms::Label^  label1;
private: FastColoredTextBoxNS::FastColoredTextBox^  fastColoredTextBox1;
private: FastColoredTextBoxNS::FastColoredTextBox^  fastColoredTextBox2;
private: FastColoredTextBoxNS::FastColoredTextBox^  fastColoredTextBox3;
private: FastColoredTextBoxNS::FastColoredTextBox^  fastColoredTextBox4;
private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
private: System::Windows::Forms::RichTextBox^  richTextBox1;
private: System::Windows::Forms::RichTextBox^  richTextBox2;
private: System::Windows::Forms::RichTextBox^  richTextBox3;
private: System::Windows::Forms::RichTextBox^  richTextBox4;
private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Îáÿçàòåëüíûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà - íå èçìåíÿéòå
		/// ñîäåğæèìîå äàííîãî ìåòîäà ïğè ïîìîùè ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SeePageModule::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->êîïèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem23 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem35 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem36 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øàáëîíSPToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôàéëToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîåêòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øàáëîíSPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem34 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûäåëèòüÂñåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem37 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ïîèñêÈÇàìåíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîèñêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàìåíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem22 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->whiteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->voidToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem40 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->äèñïåò÷åğİëåìåíòîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàíåëüİëåìåíòîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äğóãèåÎêíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âîÂñåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ïğîåêòToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüİëåìåíòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüİëåìåíòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem38 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ïîêàçàòüÂñåÔàéëûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem43 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem39 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáíîâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìåíåäæåğÏğîåêòîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâîéñòâàÏğîåêòàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìåíåäæåğØàáëîíîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñòğîåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñòğîèòüÏğîåêòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüÏğîåêòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüÏğîåêòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem41 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ïîñòğîèòüÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem42 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàïóñêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem44 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàïóñêÁåçÑáîğêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îêíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->îêíàToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüÎêíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òî÷êàÎñòàíîâêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äàííûåToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüÄàííûåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîğìàòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûğàâíÿòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem45 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem46 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ïîÖåíòğóÔîğìûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñåğâèñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èìïîğòØàáëîíîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòØàáëîíîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem47 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->íàñòğîéêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàğàìåòğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem25 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem27 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem28 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem29 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem30 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem31 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem26 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripComboBox4 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripComboBox5 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton16 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton17 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator9 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSplitButton1 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->fastColoredTextBox1 = (gcnew FastColoredTextBoxNS::FastColoredTextBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->fastColoredTextBox2 = (gcnew FastColoredTextBoxNS::FastColoredTextBox());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->fastColoredTextBox3 = (gcnew FastColoredTextBoxNS::FastColoredTextBox());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->fastColoredTextBox4 = (gcnew FastColoredTextBoxNS::FastColoredTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ñîçäàòüToolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSplitButton2 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->toolStripMenuItem19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem49 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem50 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem51 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem52 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem53 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem24 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem33 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem32 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->îòêğûòüToolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->ñîõğàíèòüToolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûğåçàòüToolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->êîïèğîâàòüToolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->âñòàâêàToolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSplitButton3 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->toolStripSplitButton4 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->toolStripSplitButton5 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripComboBox2 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton9 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripComboBox3 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton10 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton11 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton12 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton13 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton14 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSplitButton6 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton15 = (gcnew System::Windows::Forms::ToolStripButton());
			this->ñïğàâêàToolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->folderBrowserDialog3 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->folderBrowserDialog4 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->tabPage8->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->toolStrip2->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox1))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox2))->BeginInit();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox3))->BeginInit();
			this->tabPage10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->êîïèğîâàòüToolStripMenuItem, 
				this->âñòàâèòüToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			resources->ApplyResources(this->contextMenuStrip1, L"contextMenuStrip1");
			// 
			// êîïèğîâàòüToolStripMenuItem
			// 
			this->êîïèğîâàòüToolStripMenuItem->Name = L"êîïèğîâàòüToolStripMenuItem";
			resources->ApplyResources(this->êîïèğîâàòüToolStripMenuItem, L"êîïèğîâàòüToolStripMenuItem");
			// 
			// âñòàâèòüToolStripMenuItem
			// 
			this->âñòàâèòüToolStripMenuItem->Name = L"âñòàâèòüToolStripMenuItem";
			resources->ApplyResources(this->âñòàâèòüToolStripMenuItem, L"âñòàâèòüToolStripMenuItem");
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripMenuItem23});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			resources->ApplyResources(this->contextMenuStrip2, L"contextMenuStrip2");
			// 
			// toolStripMenuItem23
			// 
			this->toolStripMenuItem23->Name = L"toolStripMenuItem23";
			resources->ApplyResources(this->toolStripMenuItem23, L"toolStripMenuItem23");
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"None";
			resources->ApplyResources(this->openFileDialog1, L"openFileDialog1");
			this->openFileDialog1->InitialDirectory = L"C:\\Users\\Desktop";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileName = L"None";
			resources->ApplyResources(this->saveFileDialog1, L"saveFileDialog1");
			this->saveFileDialog1->InitialDirectory = L"C:\\Users\\Desktop";
			this->saveFileDialog1->RestoreDirectory = true;
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &SeePageModule::saveFileDialog1_FileOk);
			// 
			// fontDialog1
			// 
			this->fontDialog1->MaxSize = 10;
			this->fontDialog1->MinSize = 1;
			this->fontDialog1->ShowApply = true;
			this->fontDialog1->ShowColor = true;
			// 
			// colorDialog1
			// 
			this->colorDialog1->FullOpen = true;
			// 
			// colorDialog2
			// 
			this->colorDialog2->FullOpen = true;
			// 
			// ôàéëToolStripMenuItem
			// 
			resources->ApplyResources(this->ôàéëToolStripMenuItem, L"ôàéëToolStripMenuItem");
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->toolStripMenuItem9, 
				this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6, 
				this->toolStripMenuItem7, this->toolStripMenuItem1, this->toolStripMenuItem20});
			this->ôàéëToolStripMenuItem->ForeColor = System::Drawing::Color::Coral;
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripMenuItem35, 
				this->toolStripMenuItem36, this->øàáëîíSPToolStripMenuItem1});
			resources->ApplyResources(this->toolStripMenuItem9, L"toolStripMenuItem9");
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			// 
			// toolStripMenuItem35
			// 
			resources->ApplyResources(this->toolStripMenuItem35, L"toolStripMenuItem35");
			this->toolStripMenuItem35->Name = L"toolStripMenuItem35";
			this->toolStripMenuItem35->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem35_Click);
			// 
			// toolStripMenuItem36
			// 
			resources->ApplyResources(this->toolStripMenuItem36, L"toolStripMenuItem36");
			this->toolStripMenuItem36->Name = L"toolStripMenuItem36";
			this->toolStripMenuItem36->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem36_Click);
			// 
			// øàáëîíSPToolStripMenuItem1
			// 
			resources->ApplyResources(this->øàáëîíSPToolStripMenuItem1, L"øàáëîíSPToolStripMenuItem1");
			this->øàáëîíSPToolStripMenuItem1->Name = L"øàáëîíSPToolStripMenuItem1";
			this->øàáëîíSPToolStripMenuItem1->Click += gcnew System::EventHandler(this, &SeePageModule::øàáëîíSPToolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ôàéëToolStripMenuItem1, 
				this->ïğîåêòToolStripMenuItem, this->øàáëîíSPToolStripMenuItem});
			resources->ApplyResources(this->toolStripMenuItem2, L"toolStripMenuItem2");
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			// 
			// ôàéëToolStripMenuItem1
			// 
			resources->ApplyResources(this->ôàéëToolStripMenuItem1, L"ôàéëToolStripMenuItem1");
			this->ôàéëToolStripMenuItem1->Name = L"ôàéëToolStripMenuItem1";
			this->ôàéëToolStripMenuItem1->Click += gcnew System::EventHandler(this, &SeePageModule::ôàéëToolStripMenuItem1_Click);
			// 
			// ïğîåêòToolStripMenuItem
			// 
			resources->ApplyResources(this->ïğîåêòToolStripMenuItem, L"ïğîåêòToolStripMenuItem");
			this->ïğîåêòToolStripMenuItem->Name = L"ïğîåêòToolStripMenuItem";
			this->ïğîåêòToolStripMenuItem->Click += gcnew System::EventHandler(this, &SeePageModule::ïğîåêòToolStripMenuItem_Click);
			// 
			// øàáëîíSPToolStripMenuItem
			// 
			resources->ApplyResources(this->øàáëîíSPToolStripMenuItem, L"øàáëîíSPToolStripMenuItem");
			this->øàáëîíSPToolStripMenuItem->Name = L"øàáëîíSPToolStripMenuItem";
			// 
			// toolStripMenuItem3
			// 
			resources->ApplyResources(this->toolStripMenuItem3, L"toolStripMenuItem3");
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			resources->ApplyResources(this->toolStripMenuItem4, L"toolStripMenuItem4");
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			resources->ApplyResources(this->toolStripMenuItem5, L"toolStripMenuItem5");
			// 
			// toolStripMenuItem6
			// 
			resources->ApplyResources(this->toolStripMenuItem6, L"toolStripMenuItem6");
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			// 
			// toolStripMenuItem7
			// 
			resources->ApplyResources(this->toolStripMenuItem7, L"toolStripMenuItem7");
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem7_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			resources->ApplyResources(this->toolStripMenuItem1, L"toolStripMenuItem1");
			// 
			// toolStripMenuItem20
			// 
			resources->ApplyResources(this->toolStripMenuItem20, L"toolStripMenuItem20");
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem20_Click);
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {this->toolStripMenuItem18, 
				this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripMenuItem14, 
				this->toolStripMenuItem15, this->toolStripMenuItem34, this->âûäåëèòüÂñåToolStripMenuItem, this->toolStripMenuItem37, this->ïîèñêÈÇàìåíàToolStripMenuItem});
			this->ïğàâêàToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			resources->ApplyResources(this->ïğàâêàToolStripMenuItem, L"ïğàâêàToolStripMenuItem");
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			// 
			// toolStripMenuItem18
			// 
			resources->ApplyResources(this->toolStripMenuItem18, L"toolStripMenuItem18");
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem18_Click);
			// 
			// toolStripMenuItem10
			// 
			resources->ApplyResources(this->toolStripMenuItem10, L"toolStripMenuItem10");
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem10_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			resources->ApplyResources(this->toolStripMenuItem11, L"toolStripMenuItem11");
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			resources->ApplyResources(this->toolStripMenuItem12, L"toolStripMenuItem12");
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			resources->ApplyResources(this->toolStripMenuItem13, L"toolStripMenuItem13");
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem13_Click);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			resources->ApplyResources(this->toolStripMenuItem14, L"toolStripMenuItem14");
			this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem14_Click);
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			resources->ApplyResources(this->toolStripMenuItem15, L"toolStripMenuItem15");
			// 
			// toolStripMenuItem34
			// 
			this->toolStripMenuItem34->Name = L"toolStripMenuItem34";
			resources->ApplyResources(this->toolStripMenuItem34, L"toolStripMenuItem34");
			// 
			// âûäåëèòüÂñåToolStripMenuItem
			// 
			this->âûäåëèòüÂñåToolStripMenuItem->Name = L"âûäåëèòüÂñåToolStripMenuItem";
			resources->ApplyResources(this->âûäåëèòüÂñåToolStripMenuItem, L"âûäåëèòüÂñåToolStripMenuItem");
			// 
			// toolStripMenuItem37
			// 
			this->toolStripMenuItem37->Name = L"toolStripMenuItem37";
			resources->ApplyResources(this->toolStripMenuItem37, L"toolStripMenuItem37");
			// 
			// ïîèñêÈÇàìåíàToolStripMenuItem
			// 
			this->ïîèñêÈÇàìåíàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ïîèñêToolStripMenuItem, 
				this->çàìåíàToolStripMenuItem});
			this->ïîèñêÈÇàìåíàToolStripMenuItem->Name = L"ïîèñêÈÇàìåíàToolStripMenuItem";
			resources->ApplyResources(this->ïîèñêÈÇàìåíàToolStripMenuItem, L"ïîèñêÈÇàìåíàToolStripMenuItem");
			// 
			// ïîèñêToolStripMenuItem
			// 
			this->ïîèñêToolStripMenuItem->Name = L"ïîèñêToolStripMenuItem";
			resources->ApplyResources(this->ïîèñêToolStripMenuItem, L"ïîèñêToolStripMenuItem");
			// 
			// çàìåíàToolStripMenuItem
			// 
			this->çàìåíàToolStripMenuItem->Name = L"çàìåíàToolStripMenuItem";
			resources->ApplyResources(this->çàìåíàToolStripMenuItem, L"çàìåíàToolStripMenuItem");
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->toolStripMenuItem16, 
				this->toolStripMenuItem17, this->toolStripMenuItem8, this->îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem, this->îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem, 
				this->toolStripMenuItem40, this->äèñïåò÷åğİëåìåíòîâToolStripMenuItem, this->ïàíåëüİëåìåíòîâToolStripMenuItem, this->äğóãèåÎêíàToolStripMenuItem, 
				this->âîÂñåToolStripMenuItem});
			this->âèäToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			resources->ApplyResources(this->âèäToolStripMenuItem, L"âèäToolStripMenuItem");
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItem21, 
				this->toolStripMenuItem22});
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			resources->ApplyResources(this->toolStripMenuItem16, L"toolStripMenuItem16");
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			resources->ApplyResources(this->toolStripMenuItem21, L"toolStripMenuItem21");
			this->toolStripMenuItem21->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem21_Click);
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			resources->ApplyResources(this->toolStripMenuItem22, L"toolStripMenuItem22");
			this->toolStripMenuItem22->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem22_Click);
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			resources->ApplyResources(this->toolStripMenuItem17, L"toolStripMenuItem17");
			this->toolStripMenuItem17->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem17_Click);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			resources->ApplyResources(this->toolStripMenuItem8, L"toolStripMenuItem8");
			// 
			// îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem
			// 
			this->îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->darkToolStripMenuItem, 
				this->whiteToolStripMenuItem, this->voidToolStripMenuItem});
			this->îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem->Name = L"îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem";
			resources->ApplyResources(this->îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem, L"îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem");
			// 
			// darkToolStripMenuItem
			// 
			this->darkToolStripMenuItem->Name = L"darkToolStripMenuItem";
			resources->ApplyResources(this->darkToolStripMenuItem, L"darkToolStripMenuItem");
			// 
			// whiteToolStripMenuItem
			// 
			this->whiteToolStripMenuItem->Name = L"whiteToolStripMenuItem";
			resources->ApplyResources(this->whiteToolStripMenuItem, L"whiteToolStripMenuItem");
			// 
			// voidToolStripMenuItem
			// 
			this->voidToolStripMenuItem->Name = L"voidToolStripMenuItem";
			resources->ApplyResources(this->voidToolStripMenuItem, L"voidToolStripMenuItem");
			// 
			// îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem
			// 
			this->îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem->Name = L"îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem";
			resources->ApplyResources(this->îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem, L"îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem");
			// 
			// toolStripMenuItem40
			// 
			this->toolStripMenuItem40->Name = L"toolStripMenuItem40";
			resources->ApplyResources(this->toolStripMenuItem40, L"toolStripMenuItem40");
			// 
			// äèñïåò÷åğİëåìåíòîâToolStripMenuItem
			// 
			this->äèñïåò÷åğİëåìåíòîâToolStripMenuItem->Name = L"äèñïåò÷åğİëåìåíòîâToolStripMenuItem";
			resources->ApplyResources(this->äèñïåò÷åğİëåìåíòîâToolStripMenuItem, L"äèñïåò÷åğİëåìåíòîâToolStripMenuItem");
			// 
			// ïàíåëüİëåìåíòîâToolStripMenuItem
			// 
			this->ïàíåëüİëåìåíòîâToolStripMenuItem->Name = L"ïàíåëüİëåìåíòîâToolStripMenuItem";
			resources->ApplyResources(this->ïàíåëüİëåìåíòîâToolStripMenuItem, L"ïàíåëüİëåìåíòîâToolStripMenuItem");
			// 
			// äğóãèåÎêíàToolStripMenuItem
			// 
			this->äğóãèåÎêíàToolStripMenuItem->Name = L"äğóãèåÎêíàToolStripMenuItem";
			resources->ApplyResources(this->äğóãèåÎêíàToolStripMenuItem, L"äğóãèåÎêíàToolStripMenuItem");
			// 
			// âîÂñåToolStripMenuItem
			// 
			this->âîÂñåToolStripMenuItem->Name = L"âîÂñåToolStripMenuItem";
			resources->ApplyResources(this->âîÂñåToolStripMenuItem, L"âîÂñåToolStripMenuItem");
			// 
			// menuStrip1
			// 
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(5);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->ôàéëToolStripMenuItem, 
				this->ïğàâêàToolStripMenuItem, this->âèäToolStripMenuItem, this->ïğîåêòToolStripMenuItem1, this->ïîñòğîåíèåToolStripMenuItem, 
				this->ToolStripMenuItem, this->äàííûåToolStripMenuItem1, this->ôîğìàòToolStripMenuItem, this->ñåğâèñToolStripMenuItem, this->toolStripMenuItem25});
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->ShowItemToolTips = true;
			this->menuStrip1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical270;
			// 
			// ïğîåêòToolStripMenuItem1
			// 
			this->ïğîåêòToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {this->äîáàâèòüİëåìåíòToolStripMenuItem, 
				this->óäàëèòüİëåìåíòToolStripMenuItem, this->toolStripMenuItem38, this->ïîêàçàòüÂñåÔàéëûToolStripMenuItem, this->toolStripMenuItem43, 
				this->äîáàâèòüÔàéëToolStripMenuItem, this->toolStripMenuItem39, this->íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem, this->îáíîâèòüToolStripMenuItem, 
				this->ìåíåäæåğÏğîåêòîâToolStripMenuItem, this->ñâîéñòâàÏğîåêòàToolStripMenuItem, this->ìåíåäæåğØàáëîíîâToolStripMenuItem});
			this->ïğîåêòToolStripMenuItem1->ForeColor = System::Drawing::Color::Coral;
			resources->ApplyResources(this->ïğîåêòToolStripMenuItem1, L"ïğîåêòToolStripMenuItem1");
			this->ïğîåêòToolStripMenuItem1->Name = L"ïğîåêòToolStripMenuItem1";
			this->ïğîåêòToolStripMenuItem1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			// 
			// äîáàâèòüİëåìåíòToolStripMenuItem
			// 
			this->äîáàâèòüİëåìåíòToolStripMenuItem->Name = L"äîáàâèòüİëåìåíòToolStripMenuItem";
			resources->ApplyResources(this->äîáàâèòüİëåìåíòToolStripMenuItem, L"äîáàâèòüİëåìåíòToolStripMenuItem");
			// 
			// óäàëèòüİëåìåíòToolStripMenuItem
			// 
			this->óäàëèòüİëåìåíòToolStripMenuItem->Name = L"óäàëèòüİëåìåíòToolStripMenuItem";
			resources->ApplyResources(this->óäàëèòüİëåìåíòToolStripMenuItem, L"óäàëèòüİëåìåíòToolStripMenuItem");
			// 
			// toolStripMenuItem38
			// 
			this->toolStripMenuItem38->Name = L"toolStripMenuItem38";
			resources->ApplyResources(this->toolStripMenuItem38, L"toolStripMenuItem38");
			// 
			// ïîêàçàòüÂñåÔàéëûToolStripMenuItem
			// 
			this->ïîêàçàòüÂñåÔàéëûToolStripMenuItem->Name = L"ïîêàçàòüÂñåÔàéëûToolStripMenuItem";
			resources->ApplyResources(this->ïîêàçàòüÂñåÔàéëûToolStripMenuItem, L"ïîêàçàòüÂñåÔàéëûToolStripMenuItem");
			// 
			// toolStripMenuItem43
			// 
			this->toolStripMenuItem43->Name = L"toolStripMenuItem43";
			resources->ApplyResources(this->toolStripMenuItem43, L"toolStripMenuItem43");
			// 
			// äîáàâèòüÔàéëToolStripMenuItem
			// 
			this->äîáàâèòüÔàéëToolStripMenuItem->Name = L"äîáàâèòüÔàéëToolStripMenuItem";
			resources->ApplyResources(this->äîáàâèòüÔàéëToolStripMenuItem, L"äîáàâèòüÔàéëToolStripMenuItem");
			// 
			// toolStripMenuItem39
			// 
			this->toolStripMenuItem39->Name = L"toolStripMenuItem39";
			resources->ApplyResources(this->toolStripMenuItem39, L"toolStripMenuItem39");
			// 
			// íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem
			// 
			this->íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem->Name = L"íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem";
			resources->ApplyResources(this->íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem, L"íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem");
			// 
			// îáíîâèòüToolStripMenuItem
			// 
			this->îáíîâèòüToolStripMenuItem->Name = L"îáíîâèòüToolStripMenuItem";
			resources->ApplyResources(this->îáíîâèòüToolStripMenuItem, L"îáíîâèòüToolStripMenuItem");
			this->îáíîâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &SeePageModule::îáíîâèòüToolStripMenuItem_Click);
			// 
			// ìåíåäæåğÏğîåêòîâToolStripMenuItem
			// 
			this->ìåíåäæåğÏğîåêòîâToolStripMenuItem->Name = L"ìåíåäæåğÏğîåêòîâToolStripMenuItem";
			resources->ApplyResources(this->ìåíåäæåğÏğîåêòîâToolStripMenuItem, L"ìåíåäæåğÏğîåêòîâToolStripMenuItem");
			// 
			// ñâîéñòâàÏğîåêòàToolStripMenuItem
			// 
			this->ñâîéñòâàÏğîåêòàToolStripMenuItem->Name = L"ñâîéñòâàÏğîåêòàToolStripMenuItem";
			resources->ApplyResources(this->ñâîéñòâàÏğîåêòàToolStripMenuItem, L"ñâîéñòâàÏğîåêòàToolStripMenuItem");
			// 
			// ìåíåäæåğØàáëîíîâToolStripMenuItem
			// 
			this->ìåíåäæåğØàáëîíîâToolStripMenuItem->Name = L"ìåíåäæåğØàáëîíîâToolStripMenuItem";
			resources->ApplyResources(this->ìåíåäæåğØàáëîíîâToolStripMenuItem, L"ìåíåäæåğØàáëîíîâToolStripMenuItem");
			// 
			// ïîñòğîåíèåToolStripMenuItem
			// 
			this->ïîñòğîåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->ïîñòğîèòüÏğîåêòToolStripMenuItem, 
				this->î÷èñòèòüÏğîåêòToolStripMenuItem, this->óäàëèòüÏğîåêòToolStripMenuItem, this->toolStripMenuItem41, this->ïîñòğîèòüÔàéëToolStripMenuItem, 
				this->î÷èñòèòüÔàéëToolStripMenuItem, this->óäàëèòüÔàéëToolStripMenuItem, this->toolStripMenuItem42});
			this->ïîñòğîåíèåToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			resources->ApplyResources(this->ïîñòğîåíèåToolStripMenuItem, L"ïîñòğîåíèåToolStripMenuItem");
			this->ïîñòğîåíèåToolStripMenuItem->Name = L"ïîñòğîåíèåToolStripMenuItem";
			this->ïîñòğîåíèåToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			// 
			// ïîñòğîèòüÏğîåêòToolStripMenuItem
			// 
			this->ïîñòğîèòüÏğîåêòToolStripMenuItem->Name = L"ïîñòğîèòüÏğîåêòToolStripMenuItem";
			resources->ApplyResources(this->ïîñòğîèòüÏğîåêòToolStripMenuItem, L"ïîñòğîèòüÏğîåêòToolStripMenuItem");
			this->ïîñòğîèòüÏğîåêòToolStripMenuItem->Click += gcnew System::EventHandler(this, &SeePageModule::ïîñòğîèòüÏğîåêòToolStripMenuItem_Click);
			// 
			// î÷èñòèòüÏğîåêòToolStripMenuItem
			// 
			this->î÷èñòèòüÏğîåêòToolStripMenuItem->Name = L"î÷èñòèòüÏğîåêòToolStripMenuItem";
			resources->ApplyResources(this->î÷èñòèòüÏğîåêòToolStripMenuItem, L"î÷èñòèòüÏğîåêòToolStripMenuItem");
			// 
			// óäàëèòüÏğîåêòToolStripMenuItem
			// 
			this->óäàëèòüÏğîåêòToolStripMenuItem->Name = L"óäàëèòüÏğîåêòToolStripMenuItem";
			resources->ApplyResources(this->óäàëèòüÏğîåêòToolStripMenuItem, L"óäàëèòüÏğîåêòToolStripMenuItem");
			// 
			// toolStripMenuItem41
			// 
			this->toolStripMenuItem41->Name = L"toolStripMenuItem41";
			resources->ApplyResources(this->toolStripMenuItem41, L"toolStripMenuItem41");
			// 
			// ïîñòğîèòüÔàéëToolStripMenuItem
			// 
			this->ïîñòğîèòüÔàéëToolStripMenuItem->Name = L"ïîñòğîèòüÔàéëToolStripMenuItem";
			resources->ApplyResources(this->ïîñòğîèòüÔàéëToolStripMenuItem, L"ïîñòğîèòüÔàéëToolStripMenuItem");
			// 
			// î÷èñòèòüÔàéëToolStripMenuItem
			// 
			this->î÷èñòèòüÔàéëToolStripMenuItem->Name = L"î÷èñòèòüÔàéëToolStripMenuItem";
			resources->ApplyResources(this->î÷èñòèòüÔàéëToolStripMenuItem, L"î÷èñòèòüÔàéëToolStripMenuItem");
			// 
			// óäàëèòüÔàéëToolStripMenuItem
			// 
			this->óäàëèòüÔàéëToolStripMenuItem->Name = L"óäàëèòüÔàéëToolStripMenuItem";
			resources->ApplyResources(this->óäàëèòüÔàéëToolStripMenuItem, L"óäàëèòüÔàéëToolStripMenuItem");
			// 
			// toolStripMenuItem42
			// 
			this->toolStripMenuItem42->Name = L"toolStripMenuItem42";
			resources->ApplyResources(this->toolStripMenuItem42, L"toolStripMenuItem42");
			// 
			// ToolStripMenuItem
			// 
			this->ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->çàïóñêToolStripMenuItem, 
				this->toolStripMenuItem44, this->çàïóñêÁåçÑáîğêèToolStripMenuItem, this->îêíàToolStripMenuItem, this->îêíàToolStripMenuItem1, 
				this->î÷èñòèòüÎêíàToolStripMenuItem, this->òî÷êàÎñòàíîâêèToolStripMenuItem});
			this->ToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			resources->ApplyResources(this->ToolStripMenuItem, L"ToolStripMenuItem");
			this->ToolStripMenuItem->Name = L"ToolStripMenuItem";
			this->ToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			// 
			// çàïóñêToolStripMenuItem
			// 
			resources->ApplyResources(this->çàïóñêToolStripMenuItem, L"çàïóñêToolStripMenuItem");
			this->çàïóñêToolStripMenuItem->Name = L"çàïóñêToolStripMenuItem";
			// 
			// toolStripMenuItem44
			// 
			this->toolStripMenuItem44->Name = L"toolStripMenuItem44";
			resources->ApplyResources(this->toolStripMenuItem44, L"toolStripMenuItem44");
			this->toolStripMenuItem44->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem44_Click);
			// 
			// çàïóñêÁåçÑáîğêèToolStripMenuItem
			// 
			this->çàïóñêÁåçÑáîğêèToolStripMenuItem->Name = L"çàïóñêÁåçÑáîğêèToolStripMenuItem";
			resources->ApplyResources(this->çàïóñêÁåçÑáîğêèToolStripMenuItem, L"çàïóñêÁåçÑáîğêèToolStripMenuItem");
			// 
			// îêíàToolStripMenuItem
			// 
			this->îêíàToolStripMenuItem->Name = L"îêíàToolStripMenuItem";
			resources->ApplyResources(this->îêíàToolStripMenuItem, L"îêíàToolStripMenuItem");
			// 
			// îêíàToolStripMenuItem1
			// 
			this->îêíàToolStripMenuItem1->Name = L"îêíàToolStripMenuItem1";
			resources->ApplyResources(this->îêíàToolStripMenuItem1, L"îêíàToolStripMenuItem1");
			// 
			// î÷èñòèòüÎêíàToolStripMenuItem
			// 
			this->î÷èñòèòüÎêíàToolStripMenuItem->Name = L"î÷èñòèòüÎêíàToolStripMenuItem";
			resources->ApplyResources(this->î÷èñòèòüÎêíàToolStripMenuItem, L"î÷èñòèòüÎêíàToolStripMenuItem");
			// 
			// òî÷êàÎñòàíîâêèToolStripMenuItem
			// 
			this->òî÷êàÎñòàíîâêèToolStripMenuItem->Name = L"òî÷êàÎñòàíîâêèToolStripMenuItem";
			resources->ApplyResources(this->òî÷êàÎñòàíîâêèToolStripMenuItem, L"òî÷êàÎñòàíîâêèToolStripMenuItem");
			// 
			// äàííûåToolStripMenuItem1
			// 
			this->äàííûåToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem, 
				this->ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem, this->äîáàâèòüÄàííûåToolStripMenuItem, this->íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem});
			this->äàííûåToolStripMenuItem1->ForeColor = System::Drawing::Color::DarkGreen;
			resources->ApplyResources(this->äàííûåToolStripMenuItem1, L"äàííûåToolStripMenuItem1");
			this->äàííûåToolStripMenuItem1->Name = L"äàííûåToolStripMenuItem1";
			this->äàííûåToolStripMenuItem1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			// 
			// ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem
			// 
			this->ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem->Name = L"ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem";
			resources->ApplyResources(this->ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem, L"ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem");
			// 
			// ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem
			// 
			this->ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem->Name = L"ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem";
			resources->ApplyResources(this->ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem, L"ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem");
			// 
			// äîáàâèòüÄàííûåToolStripMenuItem
			// 
			this->äîáàâèòüÄàííûåToolStripMenuItem->Name = L"äîáàâèòüÄàííûåToolStripMenuItem";
			resources->ApplyResources(this->äîáàâèòüÄàííûåToolStripMenuItem, L"äîáàâèòüÄàííûåToolStripMenuItem");
			// 
			// íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem
			// 
			this->íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem->Name = L"íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem";
			resources->ApplyResources(this->íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem, L"íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem");
			// 
			// ôîğìàòToolStripMenuItem
			// 
			this->ôîğìàòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->âûğàâíÿòüToolStripMenuItem, 
				this->ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem, this->toolStripMenuItem45, this->èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem, this->èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem, 
				this->toolStripMenuItem46, this->ïîÖåíòğóÔîğìûToolStripMenuItem});
			this->ôîğìàòToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			resources->ApplyResources(this->ôîğìàòToolStripMenuItem, L"ôîğìàòToolStripMenuItem");
			this->ôîğìàòToolStripMenuItem->Name = L"ôîğìàòToolStripMenuItem";
			this->ôîğìàòToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			// 
			// âûğàâíÿòüToolStripMenuItem
			// 
			this->âûğàâíÿòüToolStripMenuItem->Name = L"âûğàâíÿòüToolStripMenuItem";
			resources->ApplyResources(this->âûğàâíÿòüToolStripMenuItem, L"âûğàâíÿòüToolStripMenuItem");
			// 
			// ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem
			// 
			this->ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem->Name = L"ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem";
			resources->ApplyResources(this->ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem, L"ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem");
			// 
			// toolStripMenuItem45
			// 
			this->toolStripMenuItem45->Name = L"toolStripMenuItem45";
			resources->ApplyResources(this->toolStripMenuItem45, L"toolStripMenuItem45");
			// 
			// èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem
			// 
			this->èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem->Name = L"èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem";
			resources->ApplyResources(this->èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem, L"èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem");
			// 
			// èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem
			// 
			this->èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem->Name = L"èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem";
			resources->ApplyResources(this->èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem, L"èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem");
			// 
			// toolStripMenuItem46
			// 
			this->toolStripMenuItem46->Name = L"toolStripMenuItem46";
			resources->ApplyResources(this->toolStripMenuItem46, L"toolStripMenuItem46");
			// 
			// ïîÖåíòğóÔîğìûToolStripMenuItem
			// 
			this->ïîÖåíòğóÔîğìûToolStripMenuItem->Name = L"ïîÖåíòğóÔîğìûToolStripMenuItem";
			resources->ApplyResources(this->ïîÖåíòğóÔîğìûToolStripMenuItem, L"ïîÖåíòğóÔîğìûToolStripMenuItem");
			// 
			// ñåğâèñToolStripMenuItem
			// 
			this->ñåğâèñToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->èìïîğòØàáëîíîâToolStripMenuItem, 
				this->ıêñïîğòØàáëîíîâToolStripMenuItem, this->toolStripMenuItem47, this->íàñòğîéêàToolStripMenuItem, this->ïàğàìåòğûToolStripMenuItem});
			this->ñåğâèñToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			resources->ApplyResources(this->ñåğâèñToolStripMenuItem, L"ñåğâèñToolStripMenuItem");
			this->ñåğâèñToolStripMenuItem->Name = L"ñåğâèñToolStripMenuItem";
			this->ñåğâèñToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			// 
			// èìïîğòØàáëîíîâToolStripMenuItem
			// 
			this->èìïîğòØàáëîíîâToolStripMenuItem->Name = L"èìïîğòØàáëîíîâToolStripMenuItem";
			resources->ApplyResources(this->èìïîğòØàáëîíîâToolStripMenuItem, L"èìïîğòØàáëîíîâToolStripMenuItem");
			// 
			// ıêñïîğòØàáëîíîâToolStripMenuItem
			// 
			this->ıêñïîğòØàáëîíîâToolStripMenuItem->Name = L"ıêñïîğòØàáëîíîâToolStripMenuItem";
			resources->ApplyResources(this->ıêñïîğòØàáëîíîâToolStripMenuItem, L"ıêñïîğòØàáëîíîâToolStripMenuItem");
			// 
			// toolStripMenuItem47
			// 
			this->toolStripMenuItem47->Name = L"toolStripMenuItem47";
			resources->ApplyResources(this->toolStripMenuItem47, L"toolStripMenuItem47");
			// 
			// íàñòğîéêàToolStripMenuItem
			// 
			this->íàñòğîéêàToolStripMenuItem->Name = L"íàñòğîéêàToolStripMenuItem";
			resources->ApplyResources(this->íàñòğîéêàToolStripMenuItem, L"íàñòğîéêàToolStripMenuItem");
			// 
			// ïàğàìåòğûToolStripMenuItem
			// 
			this->ïàğàìåòğûToolStripMenuItem->Name = L"ïàğàìåòğûToolStripMenuItem";
			resources->ApplyResources(this->ïàğàìåòğûToolStripMenuItem, L"ïàğàìåòğûToolStripMenuItem");
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStripMenuItem27, 
				this->toolStripMenuItem28, this->toolStripMenuItem29, this->toolStripMenuItem30, this->toolStripMenuItem31, this->toolStripMenuItem26, 
				this->îÏğîãğàììåToolStripMenuItem});
			this->toolStripMenuItem25->ForeColor = System::Drawing::Color::DarkGreen;
			resources->ApplyResources(this->toolStripMenuItem25, L"toolStripMenuItem25");
			this->toolStripMenuItem25->Name = L"toolStripMenuItem25";
			this->toolStripMenuItem25->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			// 
			// toolStripMenuItem27
			// 
			resources->ApplyResources(this->toolStripMenuItem27, L"toolStripMenuItem27");
			this->toolStripMenuItem27->Name = L"toolStripMenuItem27";
			// 
			// toolStripMenuItem28
			// 
			resources->ApplyResources(this->toolStripMenuItem28, L"toolStripMenuItem28");
			this->toolStripMenuItem28->Name = L"toolStripMenuItem28";
			// 
			// toolStripMenuItem29
			// 
			resources->ApplyResources(this->toolStripMenuItem29, L"toolStripMenuItem29");
			this->toolStripMenuItem29->Name = L"toolStripMenuItem29";
			// 
			// toolStripMenuItem30
			// 
			resources->ApplyResources(this->toolStripMenuItem30, L"toolStripMenuItem30");
			this->toolStripMenuItem30->Name = L"toolStripMenuItem30";
			this->toolStripMenuItem30->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem30_Click);
			// 
			// toolStripMenuItem31
			// 
			resources->ApplyResources(this->toolStripMenuItem31, L"toolStripMenuItem31");
			this->toolStripMenuItem31->Name = L"toolStripMenuItem31";
			this->toolStripMenuItem31->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem31_Click);
			// 
			// toolStripMenuItem26
			// 
			this->toolStripMenuItem26->Name = L"toolStripMenuItem26";
			resources->ApplyResources(this->toolStripMenuItem26, L"toolStripMenuItem26");
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			resources->ApplyResources(this->îÏğîãğàììåToolStripMenuItem, L"îÏğîãğàììåToolStripMenuItem");
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &SeePageModule::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			resources->ApplyResources(this->tabControl1, L"tabControl1");
			this->tabControl1->ContextMenuStrip = this->contextMenuStrip1;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->treeView1);
			this->tabPage1->ForeColor = System::Drawing::Color::Coral;
			resources->ApplyResources(this->tabPage1, L"tabPage1");
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// treeView1
			// 
			this->treeView1->AllowDrop = true;
			this->treeView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->treeView1, L"treeView1");
			this->treeView1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->treeView1->ItemHeight = 37;
			this->treeView1->LabelEdit = true;
			this->treeView1->LineColor = System::Drawing::Color::DodgerBlue;
			this->treeView1->Name = L"treeView1";
			this->treeView1->ShowLines = false;
			this->treeView1->ShowNodeToolTips = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			resources->ApplyResources(this->tabPage2, L"tabPage2");
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Snow;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedVertical;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->Column1, 
				this->Column2});
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->GridColor = System::Drawing::Color::Green;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			// 
			// Column1
			// 
			resources->ApplyResources(this->Column1, L"Column1");
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			resources->ApplyResources(this->Column2, L"Column2");
			this->Column2->Name = L"Column2";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->treeView2);
			resources->ApplyResources(this->tabPage8, L"tabPage8");
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// treeView2
			// 
			this->treeView2->AllowDrop = true;
			this->treeView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->treeView2, L"treeView2");
			this->treeView2->ForeColor = System::Drawing::Color::DarkMagenta;
			this->treeView2->ItemHeight = 37;
			this->treeView2->LabelEdit = true;
			this->treeView2->LineColor = System::Drawing::Color::DarkMagenta;
			this->treeView2->Name = L"treeView2";
			this->treeView2->ShowLines = false;
			this->treeView2->ShowNodeToolTips = true;
			// 
			// listView1
			// 
			this->listView1->Activation = System::Windows::Forms::ItemActivation::OneClick;
			resources->ApplyResources(this->listView1, L"listView1");
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(9) {(cli::safe_cast<System::Windows::Forms::ListViewGroup^  >(resources->GetObject(L"listView1.Groups"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewGroup^  >(resources->GetObject(L"listView1.Groups1"))), (cli::safe_cast<System::Windows::Forms::ListViewGroup^  >(resources->GetObject(L"listView1.Groups2"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewGroup^  >(resources->GetObject(L"listView1.Groups3"))), (cli::safe_cast<System::Windows::Forms::ListViewGroup^  >(resources->GetObject(L"listView1.Groups4"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewGroup^  >(resources->GetObject(L"listView1.Groups5"))), (cli::safe_cast<System::Windows::Forms::ListViewGroup^  >(resources->GetObject(L"listView1.Groups6"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewGroup^  >(resources->GetObject(L"listView1.Groups7"))), (cli::safe_cast<System::Windows::Forms::ListViewGroup^  >(resources->GetObject(L"listView1.Groups8")))});
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(141) {(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items1"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items2"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items3"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items4"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items5"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items6"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items7"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items8"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items9"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items10"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items11"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items12"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items13"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items14"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items15"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items16"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items17"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items18"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items19"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items20"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items21"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items22"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items23"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items24"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items25"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items26"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items27"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items28"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items29"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items30"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items31"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items32"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items33"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items34"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items35"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items36"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items37"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items38"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items39"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items40"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items41"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items42"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items43"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items44"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items45"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items46"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items47"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items48"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items49"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items50"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items51"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items52"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items53"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items54"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items55"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items56"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items57"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items58"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items59"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items60"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items61"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items62"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items63"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items64"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items65"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items66"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items67"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items68"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items69"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items70"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items71"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items72"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items73"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items74"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items75"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items76"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items77"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items78"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items79"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items80"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items81"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items82"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items83"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items84"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items85"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items86"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items87"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items88"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items89"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items90"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items91"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items92"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items93"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items94"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items95"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items96"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items97"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items98"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items99"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items100"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items101"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items102"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items103"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items104"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items105"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items106"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items107"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items108"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items109"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items110"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items111"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items112"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items113"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items114"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items115"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items116"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items117"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items118"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items119"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items120"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items121"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items122"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items123"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items124"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items125"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items126"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items127"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items128"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items129"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items130"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items131"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items132"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items133"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items134"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items135"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items136"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items137"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items138"))), 
				(cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items139"))), (cli::safe_cast<System::Windows::Forms::ListViewItem^  >(resources->GetObject(L"listView1.Items140")))});
			this->listView1->Name = L"listView1";
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Tile;
			this->listView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SeePageModule::listView1_MouseClick);
			// 
			// tabControl2
			// 
			resources->ApplyResources(this->tabControl2, L"tabControl2");
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Multiline = true;
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->richTextBox8);
			this->tabPage3->Controls->Add(this->panel3);
			resources->ApplyResources(this->tabPage3, L"tabPage3");
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// richTextBox8
			// 
			this->richTextBox8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->richTextBox8, L"richTextBox8");
			this->richTextBox8->Name = L"richTextBox8";
			// 
			// panel3
			// 
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->richTextBox6);
			resources->ApplyResources(this->tabPage4, L"tabPage4");
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// richTextBox6
			// 
			this->richTextBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->richTextBox6, L"richTextBox6");
			this->richTextBox6->Name = L"richTextBox6";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->richTextBox7);
			resources->ApplyResources(this->tabPage5, L"tabPage5");
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// richTextBox7
			// 
			this->richTextBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->richTextBox7, L"richTextBox7");
			this->richTextBox7->Name = L"richTextBox7";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			resources->ApplyResources(this->toolStripLabel1, L"toolStripLabel1");
			// 
			// toolStrip2
			// 
			resources->ApplyResources(this->toolStrip2, L"toolStrip2");
			this->toolStrip2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->toolStrip2->GripMargin = System::Windows::Forms::Padding(-60, 2, 2, 2);
			this->toolStrip2->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(15) {this->toolStripLabel1, 
				this->toolStripComboBox4, this->toolStripComboBox5, this->toolStripButton1, this->toolStripButton2, this->toolStripSeparator7, 
				this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripSeparator8, this->toolStripButton16, this->toolStripButton17, 
				this->toolStripSeparator9, this->toolStripLabel2, this->toolStripTextBox1});
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolStrip2->Stretch = true;
			// 
			// toolStripComboBox4
			// 
			this->toolStripComboBox4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->toolStripComboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(267) {resources->GetString(L"toolStripComboBox4.Items"), 
				resources->GetString(L"toolStripComboBox4.Items1"), resources->GetString(L"toolStripComboBox4.Items2"), resources->GetString(L"toolStripComboBox4.Items3"), 
				resources->GetString(L"toolStripComboBox4.Items4"), resources->GetString(L"toolStripComboBox4.Items5"), resources->GetString(L"toolStripComboBox4.Items6"), 
				resources->GetString(L"toolStripComboBox4.Items7"), resources->GetString(L"toolStripComboBox4.Items8"), resources->GetString(L"toolStripComboBox4.Items9"), 
				resources->GetString(L"toolStripComboBox4.Items10"), resources->GetString(L"toolStripComboBox4.Items11"), resources->GetString(L"toolStripComboBox4.Items12"), 
				resources->GetString(L"toolStripComboBox4.Items13"), resources->GetString(L"toolStripComboBox4.Items14"), resources->GetString(L"toolStripComboBox4.Items15"), 
				resources->GetString(L"toolStripComboBox4.Items16"), resources->GetString(L"toolStripComboBox4.Items17"), resources->GetString(L"toolStripComboBox4.Items18"), 
				resources->GetString(L"toolStripComboBox4.Items19"), resources->GetString(L"toolStripComboBox4.Items20"), resources->GetString(L"toolStripComboBox4.Items21"), 
				resources->GetString(L"toolStripComboBox4.Items22"), resources->GetString(L"toolStripComboBox4.Items23"), resources->GetString(L"toolStripComboBox4.Items24"), 
				resources->GetString(L"toolStripComboBox4.Items25"), resources->GetString(L"toolStripComboBox4.Items26"), resources->GetString(L"toolStripComboBox4.Items27"), 
				resources->GetString(L"toolStripComboBox4.Items28"), resources->GetString(L"toolStripComboBox4.Items29"), resources->GetString(L"toolStripComboBox4.Items30"), 
				resources->GetString(L"toolStripComboBox4.Items31"), resources->GetString(L"toolStripComboBox4.Items32"), resources->GetString(L"toolStripComboBox4.Items33"), 
				resources->GetString(L"toolStripComboBox4.Items34"), resources->GetString(L"toolStripComboBox4.Items35"), resources->GetString(L"toolStripComboBox4.Items36"), 
				resources->GetString(L"toolStripComboBox4.Items37"), resources->GetString(L"toolStripComboBox4.Items38"), resources->GetString(L"toolStripComboBox4.Items39"), 
				resources->GetString(L"toolStripComboBox4.Items40"), resources->GetString(L"toolStripComboBox4.Items41"), resources->GetString(L"toolStripComboBox4.Items42"), 
				resources->GetString(L"toolStripComboBox4.Items43"), resources->GetString(L"toolStripComboBox4.Items44"), resources->GetString(L"toolStripComboBox4.Items45"), 
				resources->GetString(L"toolStripComboBox4.Items46"), resources->GetString(L"toolStripComboBox4.Items47"), resources->GetString(L"toolStripComboBox4.Items48"), 
				resources->GetString(L"toolStripComboBox4.Items49"), resources->GetString(L"toolStripComboBox4.Items50"), resources->GetString(L"toolStripComboBox4.Items51"), 
				resources->GetString(L"toolStripComboBox4.Items52"), resources->GetString(L"toolStripComboBox4.Items53"), resources->GetString(L"toolStripComboBox4.Items54"), 
				resources->GetString(L"toolStripComboBox4.Items55"), resources->GetString(L"toolStripComboBox4.Items56"), resources->GetString(L"toolStripComboBox4.Items57"), 
				resources->GetString(L"toolStripComboBox4.Items58"), resources->GetString(L"toolStripComboBox4.Items59"), resources->GetString(L"toolStripComboBox4.Items60"), 
				resources->GetString(L"toolStripComboBox4.Items61"), resources->GetString(L"toolStripComboBox4.Items62"), resources->GetString(L"toolStripComboBox4.Items63"), 
				resources->GetString(L"toolStripComboBox4.Items64"), resources->GetString(L"toolStripComboBox4.Items65"), resources->GetString(L"toolStripComboBox4.Items66"), 
				resources->GetString(L"toolStripComboBox4.Items67"), resources->GetString(L"toolStripComboBox4.Items68"), resources->GetString(L"toolStripComboBox4.Items69"), 
				resources->GetString(L"toolStripComboBox4.Items70"), resources->GetString(L"toolStripComboBox4.Items71"), resources->GetString(L"toolStripComboBox4.Items72"), 
				resources->GetString(L"toolStripComboBox4.Items73"), resources->GetString(L"toolStripComboBox4.Items74"), resources->GetString(L"toolStripComboBox4.Items75"), 
				resources->GetString(L"toolStripComboBox4.Items76"), resources->GetString(L"toolStripComboBox4.Items77"), resources->GetString(L"toolStripComboBox4.Items78"), 
				resources->GetString(L"toolStripComboBox4.Items79"), resources->GetString(L"toolStripComboBox4.Items80"), resources->GetString(L"toolStripComboBox4.Items81"), 
				resources->GetString(L"toolStripComboBox4.Items82"), resources->GetString(L"toolStripComboBox4.Items83"), resources->GetString(L"toolStripComboBox4.Items84"), 
				resources->GetString(L"toolStripComboBox4.Items85"), resources->GetString(L"toolStripComboBox4.Items86"), resources->GetString(L"toolStripComboBox4.Items87"), 
				resources->GetString(L"toolStripComboBox4.Items88"), resources->GetString(L"toolStripComboBox4.Items89"), resources->GetString(L"toolStripComboBox4.Items90"), 
				resources->GetString(L"toolStripComboBox4.Items91"), resources->GetString(L"toolStripComboBox4.Items92"), resources->GetString(L"toolStripComboBox4.Items93"), 
				resources->GetString(L"toolStripComboBox4.Items94"), resources->GetString(L"toolStripComboBox4.Items95"), resources->GetString(L"toolStripComboBox4.Items96"), 
				resources->GetString(L"toolStripComboBox4.Items97"), resources->GetString(L"toolStripComboBox4.Items98"), resources->GetString(L"toolStripComboBox4.Items99"), 
				resources->GetString(L"toolStripComboBox4.Items100"), resources->GetString(L"toolStripComboBox4.Items101"), resources->GetString(L"toolStripComboBox4.Items102"), 
				resources->GetString(L"toolStripComboBox4.Items103"), resources->GetString(L"toolStripComboBox4.Items104"), resources->GetString(L"toolStripComboBox4.Items105"), 
				resources->GetString(L"toolStripComboBox4.Items106"), resources->GetString(L"toolStripComboBox4.Items107"), resources->GetString(L"toolStripComboBox4.Items108"), 
				resources->GetString(L"toolStripComboBox4.Items109"), resources->GetString(L"toolStripComboBox4.Items110"), resources->GetString(L"toolStripComboBox4.Items111"), 
				resources->GetString(L"toolStripComboBox4.Items112"), resources->GetString(L"toolStripComboBox4.Items113"), resources->GetString(L"toolStripComboBox4.Items114"), 
				resources->GetString(L"toolStripComboBox4.Items115"), resources->GetString(L"toolStripComboBox4.Items116"), resources->GetString(L"toolStripComboBox4.Items117"), 
				resources->GetString(L"toolStripComboBox4.Items118"), resources->GetString(L"toolStripComboBox4.Items119"), resources->GetString(L"toolStripComboBox4.Items120"), 
				resources->GetString(L"toolStripComboBox4.Items121"), resources->GetString(L"toolStripComboBox4.Items122"), resources->GetString(L"toolStripComboBox4.Items123"), 
				resources->GetString(L"toolStripComboBox4.Items124"), resources->GetString(L"toolStripComboBox4.Items125"), resources->GetString(L"toolStripComboBox4.Items126"), 
				resources->GetString(L"toolStripComboBox4.Items127"), resources->GetString(L"toolStripComboBox4.Items128"), resources->GetString(L"toolStripComboBox4.Items129"), 
				resources->GetString(L"toolStripComboBox4.Items130"), resources->GetString(L"toolStripComboBox4.Items131"), resources->GetString(L"toolStripComboBox4.Items132"), 
				resources->GetString(L"toolStripComboBox4.Items133"), resources->GetString(L"toolStripComboBox4.Items134"), resources->GetString(L"toolStripComboBox4.Items135"), 
				resources->GetString(L"toolStripComboBox4.Items136"), resources->GetString(L"toolStripComboBox4.Items137"), resources->GetString(L"toolStripComboBox4.Items138"), 
				resources->GetString(L"toolStripComboBox4.Items139"), resources->GetString(L"toolStripComboBox4.Items140"), resources->GetString(L"toolStripComboBox4.Items141"), 
				resources->GetString(L"toolStripComboBox4.Items142"), resources->GetString(L"toolStripComboBox4.Items143"), resources->GetString(L"toolStripComboBox4.Items144"), 
				resources->GetString(L"toolStripComboBox4.Items145"), resources->GetString(L"toolStripComboBox4.Items146"), resources->GetString(L"toolStripComboBox4.Items147"), 
				resources->GetString(L"toolStripComboBox4.Items148"), resources->GetString(L"toolStripComboBox4.Items149"), resources->GetString(L"toolStripComboBox4.Items150"), 
				resources->GetString(L"toolStripComboBox4.Items151"), resources->GetString(L"toolStripComboBox4.Items152"), resources->GetString(L"toolStripComboBox4.Items153"), 
				resources->GetString(L"toolStripComboBox4.Items154"), resources->GetString(L"toolStripComboBox4.Items155"), resources->GetString(L"toolStripComboBox4.Items156"), 
				resources->GetString(L"toolStripComboBox4.Items157"), resources->GetString(L"toolStripComboBox4.Items158"), resources->GetString(L"toolStripComboBox4.Items159"), 
				resources->GetString(L"toolStripComboBox4.Items160"), resources->GetString(L"toolStripComboBox4.Items161"), resources->GetString(L"toolStripComboBox4.Items162"), 
				resources->GetString(L"toolStripComboBox4.Items163"), resources->GetString(L"toolStripComboBox4.Items164"), resources->GetString(L"toolStripComboBox4.Items165"), 
				resources->GetString(L"toolStripComboBox4.Items166"), resources->GetString(L"toolStripComboBox4.Items167"), resources->GetString(L"toolStripComboBox4.Items168"), 
				resources->GetString(L"toolStripComboBox4.Items169"), resources->GetString(L"toolStripComboBox4.Items170"), resources->GetString(L"toolStripComboBox4.Items171"), 
				resources->GetString(L"toolStripComboBox4.Items172"), resources->GetString(L"toolStripComboBox4.Items173"), resources->GetString(L"toolStripComboBox4.Items174"), 
				resources->GetString(L"toolStripComboBox4.Items175"), resources->GetString(L"toolStripComboBox4.Items176"), resources->GetString(L"toolStripComboBox4.Items177"), 
				resources->GetString(L"toolStripComboBox4.Items178"), resources->GetString(L"toolStripComboBox4.Items179"), resources->GetString(L"toolStripComboBox4.Items180"), 
				resources->GetString(L"toolStripComboBox4.Items181"), resources->GetString(L"toolStripComboBox4.Items182"), resources->GetString(L"toolStripComboBox4.Items183"), 
				resources->GetString(L"toolStripComboBox4.Items184"), resources->GetString(L"toolStripComboBox4.Items185"), resources->GetString(L"toolStripComboBox4.Items186"), 
				resources->GetString(L"toolStripComboBox4.Items187"), resources->GetString(L"toolStripComboBox4.Items188"), resources->GetString(L"toolStripComboBox4.Items189"), 
				resources->GetString(L"toolStripComboBox4.Items190"), resources->GetString(L"toolStripComboBox4.Items191"), resources->GetString(L"toolStripComboBox4.Items192"), 
				resources->GetString(L"toolStripComboBox4.Items193"), resources->GetString(L"toolStripComboBox4.Items194"), resources->GetString(L"toolStripComboBox4.Items195"), 
				resources->GetString(L"toolStripComboBox4.Items196"), resources->GetString(L"toolStripComboBox4.Items197"), resources->GetString(L"toolStripComboBox4.Items198"), 
				resources->GetString(L"toolStripComboBox4.Items199"), resources->GetString(L"toolStripComboBox4.Items200"), resources->GetString(L"toolStripComboBox4.Items201"), 
				resources->GetString(L"toolStripComboBox4.Items202"), resources->GetString(L"toolStripComboBox4.Items203"), resources->GetString(L"toolStripComboBox4.Items204"), 
				resources->GetString(L"toolStripComboBox4.Items205"), resources->GetString(L"toolStripComboBox4.Items206"), resources->GetString(L"toolStripComboBox4.Items207"), 
				resources->GetString(L"toolStripComboBox4.Items208"), resources->GetString(L"toolStripComboBox4.Items209"), resources->GetString(L"toolStripComboBox4.Items210"), 
				resources->GetString(L"toolStripComboBox4.Items211"), resources->GetString(L"toolStripComboBox4.Items212"), resources->GetString(L"toolStripComboBox4.Items213"), 
				resources->GetString(L"toolStripComboBox4.Items214"), resources->GetString(L"toolStripComboBox4.Items215"), resources->GetString(L"toolStripComboBox4.Items216"), 
				resources->GetString(L"toolStripComboBox4.Items217"), resources->GetString(L"toolStripComboBox4.Items218"), resources->GetString(L"toolStripComboBox4.Items219"), 
				resources->GetString(L"toolStripComboBox4.Items220"), resources->GetString(L"toolStripComboBox4.Items221"), resources->GetString(L"toolStripComboBox4.Items222"), 
				resources->GetString(L"toolStripComboBox4.Items223"), resources->GetString(L"toolStripComboBox4.Items224"), resources->GetString(L"toolStripComboBox4.Items225"), 
				resources->GetString(L"toolStripComboBox4.Items226"), resources->GetString(L"toolStripComboBox4.Items227"), resources->GetString(L"toolStripComboBox4.Items228"), 
				resources->GetString(L"toolStripComboBox4.Items229"), resources->GetString(L"toolStripComboBox4.Items230"), resources->GetString(L"toolStripComboBox4.Items231"), 
				resources->GetString(L"toolStripComboBox4.Items232"), resources->GetString(L"toolStripComboBox4.Items233"), resources->GetString(L"toolStripComboBox4.Items234"), 
				resources->GetString(L"toolStripComboBox4.Items235"), resources->GetString(L"toolStripComboBox4.Items236"), resources->GetString(L"toolStripComboBox4.Items237"), 
				resources->GetString(L"toolStripComboBox4.Items238"), resources->GetString(L"toolStripComboBox4.Items239"), resources->GetString(L"toolStripComboBox4.Items240"), 
				resources->GetString(L"toolStripComboBox4.Items241"), resources->GetString(L"toolStripComboBox4.Items242"), resources->GetString(L"toolStripComboBox4.Items243"), 
				resources->GetString(L"toolStripComboBox4.Items244"), resources->GetString(L"toolStripComboBox4.Items245"), resources->GetString(L"toolStripComboBox4.Items246"), 
				resources->GetString(L"toolStripComboBox4.Items247"), resources->GetString(L"toolStripComboBox4.Items248"), resources->GetString(L"toolStripComboBox4.Items249"), 
				resources->GetString(L"toolStripComboBox4.Items250"), resources->GetString(L"toolStripComboBox4.Items251"), resources->GetString(L"toolStripComboBox4.Items252"), 
				resources->GetString(L"toolStripComboBox4.Items253"), resources->GetString(L"toolStripComboBox4.Items254"), resources->GetString(L"toolStripComboBox4.Items255"), 
				resources->GetString(L"toolStripComboBox4.Items256"), resources->GetString(L"toolStripComboBox4.Items257"), resources->GetString(L"toolStripComboBox4.Items258"), 
				resources->GetString(L"toolStripComboBox4.Items259"), resources->GetString(L"toolStripComboBox4.Items260"), resources->GetString(L"toolStripComboBox4.Items261"), 
				resources->GetString(L"toolStripComboBox4.Items262"), resources->GetString(L"toolStripComboBox4.Items263"), resources->GetString(L"toolStripComboBox4.Items264"), 
				resources->GetString(L"toolStripComboBox4.Items265"), resources->GetString(L"toolStripComboBox4.Items266")});
			this->toolStripComboBox4->Name = L"toolStripComboBox4";
			resources->ApplyResources(this->toolStripComboBox4, L"toolStripComboBox4");
			// 
			// toolStripComboBox5
			// 
			this->toolStripComboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(1) {resources->GetString(L"toolStripComboBox5.Items")});
			this->toolStripComboBox5->Name = L"toolStripComboBox5";
			resources->ApplyResources(this->toolStripComboBox5, L"toolStripComboBox5");
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton1, L"toolStripButton1");
			this->toolStripButton1->Name = L"toolStripButton1";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton2, L"toolStripButton2");
			this->toolStripButton2->Name = L"toolStripButton2";
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			resources->ApplyResources(this->toolStripSeparator7, L"toolStripSeparator7");
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton4, L"toolStripButton4");
			this->toolStripButton4->Name = L"toolStripButton4";
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton5, L"toolStripButton5");
			this->toolStripButton5->Name = L"toolStripButton5";
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton6, L"toolStripButton6");
			this->toolStripButton6->Name = L"toolStripButton6";
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			resources->ApplyResources(this->toolStripSeparator8, L"toolStripSeparator8");
			// 
			// toolStripButton16
			// 
			this->toolStripButton16->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton16, L"toolStripButton16");
			this->toolStripButton16->Name = L"toolStripButton16";
			this->toolStripButton16->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripButton16_Click);
			// 
			// toolStripButton17
			// 
			this->toolStripButton17->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton17, L"toolStripButton17");
			this->toolStripButton17->Name = L"toolStripButton17";
			// 
			// toolStripSeparator9
			// 
			this->toolStripSeparator9->Name = L"toolStripSeparator9";
			resources->ApplyResources(this->toolStripSeparator9, L"toolStripSeparator9");
			// 
			// toolStripLabel2
			// 
			this->toolStripLabel2->Name = L"toolStripLabel2";
			resources->ApplyResources(this->toolStripLabel2, L"toolStripLabel2");
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			resources->ApplyResources(this->toolStripTextBox1, L"toolStripTextBox1");
			// 
			// toolStripSplitButton1
			// 
			this->toolStripSplitButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripSplitButton1, L"toolStripSplitButton1");
			this->toolStripSplitButton1->Name = L"toolStripSplitButton1";
			// 
			// tabControl3
			// 
			this->tabControl3->AllowDrop = true;
			resources->ApplyResources(this->tabControl3, L"tabControl3");
			this->tabControl3->Controls->Add(this->tabPage6);
			this->tabControl3->Controls->Add(this->tabPage7);
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Multiline = true;
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::OrangeRed;
			this->tabPage6->Controls->Add(this->fastColoredTextBox1);
			this->tabPage6->ForeColor = System::Drawing::Color::OrangeRed;
			resources->ApplyResources(this->tabPage6, L"tabPage6");
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// fastColoredTextBox1
			// 
			resources->ApplyResources(this->fastColoredTextBox1, L"fastColoredTextBox1");
			this->fastColoredTextBox1->AutoCompleteBracketsList = gcnew cli::array< System::Char >(10) {'(', ')', '{', '}', '[', ']', '\"', 
				'\"', '\'', '\''};
			this->fastColoredTextBox1->AutoIndentCharsPatterns = L"";
			this->fastColoredTextBox1->BackBrush = nullptr;
			this->fastColoredTextBox1->CharHeight = 14;
			this->fastColoredTextBox1->CharWidth = 8;
			this->fastColoredTextBox1->CommentPrefix = nullptr;
			this->fastColoredTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->fastColoredTextBox1->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->fastColoredTextBox1->ForeColor = System::Drawing::Color::DimGray;
			this->fastColoredTextBox1->IndentBackColor = System::Drawing::Color::Transparent;
			this->fastColoredTextBox1->IsReplaceMode = false;
			this->fastColoredTextBox1->Language = FastColoredTextBoxNS::Language::HTML;
			this->fastColoredTextBox1->LeftBracket = '<';
			this->fastColoredTextBox1->LeftBracket2 = '(';
			this->fastColoredTextBox1->LineNumberColor = System::Drawing::SystemColors::Highlight;
			this->fastColoredTextBox1->Name = L"fastColoredTextBox1";
			this->fastColoredTextBox1->Paddings = System::Windows::Forms::Padding(0);
			this->fastColoredTextBox1->RightBracket = '>';
			this->fastColoredTextBox1->RightBracket2 = ')';
			this->fastColoredTextBox1->SelectionColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->fastColoredTextBox1->ServiceColors = (cli::safe_cast<FastColoredTextBoxNS::ServiceColors^  >(resources->GetObject(L"fastColoredTextBox1.ServiceColors")));
			this->fastColoredTextBox1->Zoom = 100;
			// 
			// tabPage7
			// 
			this->tabPage7->AccessibleRole = System::Windows::Forms::AccessibleRole::Window;
			this->tabPage7->Controls->Add(this->richTextBox2);
			this->tabPage7->Controls->Add(this->fastColoredTextBox2);
			this->tabPage7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->tabPage7, L"tabPage7");
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			resources->ApplyResources(this->richTextBox2, L"richTextBox2");
			this->richTextBox2->Name = L"richTextBox2";
			// 
			// fastColoredTextBox2
			// 
			resources->ApplyResources(this->fastColoredTextBox2, L"fastColoredTextBox2");
			this->fastColoredTextBox2->AutoCompleteBracketsList = gcnew cli::array< System::Char >(10) {'(', ')', '{', '}', '[', ']', '\"', 
				'\"', '\'', '\''};
			this->fastColoredTextBox2->AutoIndentCharsPatterns = L"";
			this->fastColoredTextBox2->BackBrush = nullptr;
			this->fastColoredTextBox2->CharHeight = 14;
			this->fastColoredTextBox2->CharWidth = 8;
			this->fastColoredTextBox2->CommentPrefix = nullptr;
			this->fastColoredTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->fastColoredTextBox2->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->fastColoredTextBox2->IndentBackColor = System::Drawing::Color::Transparent;
			this->fastColoredTextBox2->IsReplaceMode = false;
			this->fastColoredTextBox2->Language = FastColoredTextBoxNS::Language::HTML;
			this->fastColoredTextBox2->LeftBracket = '<';
			this->fastColoredTextBox2->LeftBracket2 = '(';
			this->fastColoredTextBox2->LineNumberColor = System::Drawing::SystemColors::Highlight;
			this->fastColoredTextBox2->Name = L"fastColoredTextBox2";
			this->fastColoredTextBox2->Paddings = System::Windows::Forms::Padding(0);
			this->fastColoredTextBox2->RightBracket = '>';
			this->fastColoredTextBox2->RightBracket2 = ')';
			this->fastColoredTextBox2->SelectionColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->fastColoredTextBox2->ServiceColors = (cli::safe_cast<FastColoredTextBoxNS::ServiceColors^  >(resources->GetObject(L"fastColoredTextBox2.ServiceColors")));
			this->fastColoredTextBox2->Zoom = 100;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->richTextBox3);
			this->tabPage9->Controls->Add(this->fastColoredTextBox3);
			resources->ApplyResources(this->tabPage9, L"tabPage9");
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// richTextBox3
			// 
			resources->ApplyResources(this->richTextBox3, L"richTextBox3");
			this->richTextBox3->Name = L"richTextBox3";
			// 
			// fastColoredTextBox3
			// 
			resources->ApplyResources(this->fastColoredTextBox3, L"fastColoredTextBox3");
			this->fastColoredTextBox3->AutoCompleteBracketsList = gcnew cli::array< System::Char >(10) {'(', ')', '{', '}', '[', ']', '\"', 
				'\"', '\'', '\''};
			this->fastColoredTextBox3->AutoIndentCharsPatterns = L"\r\n^\\s*[\\w\\.]+(\\s\\w+)\?\\s*(\?<range>=)\\s*(\?<range>[^;]+);\r\n";
			this->fastColoredTextBox3->BackBrush = nullptr;
			this->fastColoredTextBox3->BracketsHighlightStrategy = FastColoredTextBoxNS::BracketsHighlightStrategy::Strategy2;
			this->fastColoredTextBox3->CharHeight = 14;
			this->fastColoredTextBox3->CharWidth = 8;
			this->fastColoredTextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->fastColoredTextBox3->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->fastColoredTextBox3->IndentBackColor = System::Drawing::Color::Transparent;
			this->fastColoredTextBox3->IsReplaceMode = false;
			this->fastColoredTextBox3->Language = FastColoredTextBoxNS::Language::JS;
			this->fastColoredTextBox3->LeftBracket = '(';
			this->fastColoredTextBox3->LeftBracket2 = '{';
			this->fastColoredTextBox3->LineNumberColor = System::Drawing::SystemColors::Highlight;
			this->fastColoredTextBox3->Name = L"fastColoredTextBox3";
			this->fastColoredTextBox3->Paddings = System::Windows::Forms::Padding(0);
			this->fastColoredTextBox3->RightBracket = ')';
			this->fastColoredTextBox3->RightBracket2 = '}';
			this->fastColoredTextBox3->SelectionColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->fastColoredTextBox3->ServiceColors = (cli::safe_cast<FastColoredTextBoxNS::ServiceColors^  >(resources->GetObject(L"fastColoredTextBox3.ServiceColors")));
			this->fastColoredTextBox3->Zoom = 100;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->richTextBox4);
			this->tabPage10->Controls->Add(this->fastColoredTextBox4);
			resources->ApplyResources(this->tabPage10, L"tabPage10");
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// richTextBox4
			// 
			resources->ApplyResources(this->richTextBox4, L"richTextBox4");
			this->richTextBox4->Name = L"richTextBox4";
			// 
			// fastColoredTextBox4
			// 
			resources->ApplyResources(this->fastColoredTextBox4, L"fastColoredTextBox4");
			this->fastColoredTextBox4->AutoCompleteBracketsList = gcnew cli::array< System::Char >(10) {'(', ')', '{', '}', '[', ']', '\"', 
				'\"', '\'', '\''};
			this->fastColoredTextBox4->AutoIndentCharsPatterns = L"\r\n^\\s*\\$[\\w\\.\\[\\]\\\'\\\"]+\\s*(\?<range>=)\\s*(\?<range>[^;]+);\r\n";
			this->fastColoredTextBox4->BackBrush = nullptr;
			this->fastColoredTextBox4->BracketsHighlightStrategy = FastColoredTextBoxNS::BracketsHighlightStrategy::Strategy2;
			this->fastColoredTextBox4->CharHeight = 14;
			this->fastColoredTextBox4->CharWidth = 8;
			this->fastColoredTextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->fastColoredTextBox4->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->fastColoredTextBox4->IndentBackColor = System::Drawing::Color::Transparent;
			this->fastColoredTextBox4->IsReplaceMode = false;
			this->fastColoredTextBox4->Language = FastColoredTextBoxNS::Language::PHP;
			this->fastColoredTextBox4->LeftBracket = '(';
			this->fastColoredTextBox4->LeftBracket2 = '{';
			this->fastColoredTextBox4->LineNumberColor = System::Drawing::SystemColors::Highlight;
			this->fastColoredTextBox4->Name = L"fastColoredTextBox4";
			this->fastColoredTextBox4->Paddings = System::Windows::Forms::Padding(0);
			this->fastColoredTextBox4->RightBracket = ')';
			this->fastColoredTextBox4->RightBracket2 = '}';
			this->fastColoredTextBox4->SelectionColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->fastColoredTextBox4->ServiceColors = (cli::safe_cast<FastColoredTextBoxNS::ServiceColors^  >(resources->GetObject(L"fastColoredTextBox4.ServiceColors")));
			this->fastColoredTextBox4->Zoom = 100;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SeePageModule::textBox1_KeyDown);
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->BackColor = System::Drawing::Color::GhostWhite;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// ñîçäàòüToolStripButton1
			// 
			this->ñîçäàòüToolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->ñîçäàòüToolStripButton1, L"ñîçäàòüToolStripButton1");
			this->ñîçäàòüToolStripButton1->Name = L"ñîçäàòüToolStripButton1";
			this->ñîçäàòüToolStripButton1->Click += gcnew System::EventHandler(this, &SeePageModule::ñîçäàòüToolStripButton1_Click);
			// 
			// toolStripSplitButton2
			// 
			this->toolStripSplitButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripSplitButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripMenuItem19, 
				this->toolStripMenuItem24, this->toolStripMenuItem33, this->toolStripMenuItem32});
			resources->ApplyResources(this->toolStripSplitButton2, L"toolStripSplitButton2");
			this->toolStripSplitButton2->Name = L"toolStripSplitButton2";
			// 
			// toolStripMenuItem19
			// 
			this->toolStripMenuItem19->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->toolStripMenuItem49, 
				this->toolStripMenuItem50, this->toolStripMenuItem51, this->toolStripMenuItem52, this->toolStripMenuItem53});
			resources->ApplyResources(this->toolStripMenuItem19, L"toolStripMenuItem19");
			this->toolStripMenuItem19->Name = L"toolStripMenuItem19";
			this->toolStripMenuItem19->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem19_Click_1);
			// 
			// toolStripMenuItem49
			// 
			this->toolStripMenuItem49->Name = L"toolStripMenuItem49";
			resources->ApplyResources(this->toolStripMenuItem49, L"toolStripMenuItem49");
			// 
			// toolStripMenuItem50
			// 
			this->toolStripMenuItem50->Name = L"toolStripMenuItem50";
			resources->ApplyResources(this->toolStripMenuItem50, L"toolStripMenuItem50");
			// 
			// toolStripMenuItem51
			// 
			this->toolStripMenuItem51->Name = L"toolStripMenuItem51";
			resources->ApplyResources(this->toolStripMenuItem51, L"toolStripMenuItem51");
			// 
			// toolStripMenuItem52
			// 
			this->toolStripMenuItem52->Name = L"toolStripMenuItem52";
			resources->ApplyResources(this->toolStripMenuItem52, L"toolStripMenuItem52");
			// 
			// toolStripMenuItem53
			// 
			this->toolStripMenuItem53->Name = L"toolStripMenuItem53";
			resources->ApplyResources(this->toolStripMenuItem53, L"toolStripMenuItem53");
			// 
			// toolStripMenuItem24
			// 
			resources->ApplyResources(this->toolStripMenuItem24, L"toolStripMenuItem24");
			this->toolStripMenuItem24->Name = L"toolStripMenuItem24";
			this->toolStripMenuItem24->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem24_Click);
			// 
			// toolStripMenuItem33
			// 
			resources->ApplyResources(this->toolStripMenuItem33, L"toolStripMenuItem33");
			this->toolStripMenuItem33->Name = L"toolStripMenuItem33";
			this->toolStripMenuItem33->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripMenuItem33_Click);
			// 
			// toolStripMenuItem32
			// 
			this->toolStripMenuItem32->Name = L"toolStripMenuItem32";
			resources->ApplyResources(this->toolStripMenuItem32, L"toolStripMenuItem32");
			// 
			// îòêğûòüToolStripButton1
			// 
			this->îòêğûòüToolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->îòêğûòüToolStripButton1, L"îòêğûòüToolStripButton1");
			this->îòêğûòüToolStripButton1->Name = L"îòêğûòüToolStripButton1";
			this->îòêğûòüToolStripButton1->Click += gcnew System::EventHandler(this, &SeePageModule::îòêğûòüToolStripButton1_Click);
			// 
			// ñîõğàíèòüToolStripButton1
			// 
			this->ñîõğàíèòüToolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->ñîõğàíèòüToolStripButton1, L"ñîõğàíèòüToolStripButton1");
			this->ñîõğàíèòüToolStripButton1->Name = L"ñîõğàíèòüToolStripButton1";
			this->ñîõğàíèòüToolStripButton1->Click += gcnew System::EventHandler(this, &SeePageModule::ñîõğàíèòüToolStripButton1_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton3, L"toolStripButton3");
			this->toolStripButton3->Name = L"toolStripButton3";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			resources->ApplyResources(this->toolStripSeparator1, L"toolStripSeparator1");
			// 
			// âûğåçàòüToolStripButton1
			// 
			this->âûğåçàòüToolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->âûğåçàòüToolStripButton1, L"âûğåçàòüToolStripButton1");
			this->âûğåçàòüToolStripButton1->Name = L"âûğåçàòüToolStripButton1";
			this->âûğåçàòüToolStripButton1->Click += gcnew System::EventHandler(this, &SeePageModule::âûğåçàòüToolStripButton1_Click);
			// 
			// êîïèğîâàòüToolStripButton1
			// 
			this->êîïèğîâàòüToolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->êîïèğîâàòüToolStripButton1, L"êîïèğîâàòüToolStripButton1");
			this->êîïèğîâàòüToolStripButton1->Name = L"êîïèğîâàòüToolStripButton1";
			this->êîïèğîâàòüToolStripButton1->Click += gcnew System::EventHandler(this, &SeePageModule::êîïèğîâàòüToolStripButton1_Click);
			// 
			// âñòàâêàToolStripButton1
			// 
			this->âñòàâêàToolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->âñòàâêàToolStripButton1, L"âñòàâêàToolStripButton1");
			this->âñòàâêàToolStripButton1->Name = L"âñòàâêàToolStripButton1";
			this->âñòàâêàToolStripButton1->Click += gcnew System::EventHandler(this, &SeePageModule::âñòàâêàToolStripButton1_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			resources->ApplyResources(this->toolStripSeparator2, L"toolStripSeparator2");
			// 
			// toolStripSplitButton3
			// 
			this->toolStripSplitButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripSplitButton3, L"toolStripSplitButton3");
			this->toolStripSplitButton3->Name = L"toolStripSplitButton3";
			this->toolStripSplitButton3->ButtonClick += gcnew System::EventHandler(this, &SeePageModule::toolStripSplitButton3_ButtonClick);
			// 
			// toolStripSplitButton4
			// 
			this->toolStripSplitButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripSplitButton4, L"toolStripSplitButton4");
			this->toolStripSplitButton4->Name = L"toolStripSplitButton4";
			this->toolStripSplitButton4->ButtonClick += gcnew System::EventHandler(this, &SeePageModule::toolStripSplitButton4_ButtonClick);
			// 
			// toolStripSplitButton5
			// 
			this->toolStripSplitButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripSplitButton5, L"toolStripSplitButton5");
			this->toolStripSplitButton5->Name = L"toolStripSplitButton5";
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton7, L"toolStripButton7");
			this->toolStripButton7->Name = L"toolStripButton7";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			resources->ApplyResources(this->toolStripSeparator3, L"toolStripSeparator3");
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton8, L"toolStripButton8");
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripButton8_Click);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {resources->GetString(L"toolStripComboBox1.Items"), 
				resources->GetString(L"toolStripComboBox1.Items1")});
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			resources->ApplyResources(this->toolStripComboBox1, L"toolStripComboBox1");
			// 
			// toolStripComboBox2
			// 
			this->toolStripComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {resources->GetString(L"toolStripComboBox2.Items"), 
				resources->GetString(L"toolStripComboBox2.Items1"), resources->GetString(L"toolStripComboBox2.Items2"), resources->GetString(L"toolStripComboBox2.Items3")});
			this->toolStripComboBox2->Name = L"toolStripComboBox2";
			resources->ApplyResources(this->toolStripComboBox2, L"toolStripComboBox2");
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			resources->ApplyResources(this->toolStripSeparator4, L"toolStripSeparator4");
			// 
			// toolStripButton9
			// 
			this->toolStripButton9->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton9, L"toolStripButton9");
			this->toolStripButton9->Name = L"toolStripButton9";
			this->toolStripButton9->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripButton9_Click);
			// 
			// toolStripComboBox3
			// 
			this->toolStripComboBox3->Name = L"toolStripComboBox3";
			resources->ApplyResources(this->toolStripComboBox3, L"toolStripComboBox3");
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			resources->ApplyResources(this->toolStripSeparator5, L"toolStripSeparator5");
			// 
			// toolStripButton10
			// 
			this->toolStripButton10->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton10, L"toolStripButton10");
			this->toolStripButton10->Name = L"toolStripButton10";
			// 
			// toolStripButton11
			// 
			this->toolStripButton11->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton11, L"toolStripButton11");
			this->toolStripButton11->Name = L"toolStripButton11";
			// 
			// toolStripButton12
			// 
			this->toolStripButton12->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton12, L"toolStripButton12");
			this->toolStripButton12->Name = L"toolStripButton12";
			// 
			// toolStripButton13
			// 
			this->toolStripButton13->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton13, L"toolStripButton13");
			this->toolStripButton13->Name = L"toolStripButton13";
			// 
			// toolStripButton14
			// 
			this->toolStripButton14->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripButton14, L"toolStripButton14");
			this->toolStripButton14->Name = L"toolStripButton14";
			// 
			// toolStripSplitButton6
			// 
			this->toolStripSplitButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolStripSplitButton6, L"toolStripSplitButton6");
			this->toolStripSplitButton6->Name = L"toolStripSplitButton6";
			this->toolStripSplitButton6->ButtonClick += gcnew System::EventHandler(this, &SeePageModule::toolStripSplitButton6_ButtonClick);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			resources->ApplyResources(this->toolStripSeparator6, L"toolStripSeparator6");
			// 
			// toolStripButton15
			// 
			this->toolStripButton15->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton15->ForeColor = System::Drawing::Color::Red;
			resources->ApplyResources(this->toolStripButton15, L"toolStripButton15");
			this->toolStripButton15->Name = L"toolStripButton15";
			this->toolStripButton15->Click += gcnew System::EventHandler(this, &SeePageModule::toolStripButton15_Click);
			// 
			// ñïğàâêàToolStripButton1
			// 
			this->ñïğàâêàToolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->ñïğàâêàToolStripButton1, L"ñïğàâêàToolStripButton1");
			this->ñïğàâêàToolStripButton1->Name = L"ñïğàâêàToolStripButton1";
			this->ñïğàâêàToolStripButton1->Click += gcnew System::EventHandler(this, &SeePageModule::ñïğàâêàToolStripButton1_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::GhostWhite;
			resources->ApplyResources(this->toolStrip1, L"toolStrip1");
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(31) {this->ñîçäàòüToolStripButton1, 
				this->toolStripSplitButton2, this->îòêğûòüToolStripButton1, this->ñîõğàíèòüToolStripButton1, this->toolStripButton3, this->toolStripSeparator1, 
				this->âûğåçàòüToolStripButton1, this->êîïèğîâàòüToolStripButton1, this->âñòàâêàToolStripButton1, this->toolStripSeparator2, this->toolStripSplitButton3, 
				this->toolStripSplitButton4, this->toolStripSplitButton5, this->toolStripButton7, this->toolStripSeparator3, this->toolStripButton8, 
				this->toolStripComboBox1, this->toolStripComboBox2, this->toolStripSeparator4, this->toolStripButton9, this->toolStripComboBox3, 
				this->toolStripSeparator5, this->toolStripButton10, this->toolStripButton11, this->toolStripButton12, this->toolStripButton13, 
				this->toolStripButton14, this->toolStripSplitButton6, this->toolStripSeparator6, this->toolStripButton15, this->ñïğàâêàToolStripButton1});
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			// 
			// saveFileDialog2
			// 
			this->saveFileDialog2->CheckFileExists = true;
			resources->ApplyResources(this->saveFileDialog2, L"saveFileDialog2");
			this->saveFileDialog2->RestoreDirectory = true;
			this->saveFileDialog2->SupportMultiDottedExtensions = true;
			this->saveFileDialog2->ValidateNames = false;
			// 
			// folderBrowserDialog4
			// 
			this->folderBrowserDialog4->ShowNewFolderButton = false;
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::GhostWhite;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Name = L"label1";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->richTextBox1, L"richTextBox1");
			this->richTextBox1->Name = L"richTextBox1";
			// 
			// SeePageModule
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->tabControl3);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->toolStrip2);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SeePageModule";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
			this->tabControl3->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox1))->EndInit();
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox2))->EndInit();
			this->tabPage9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox3))->EndInit();
			this->tabPage10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fastColoredTextBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

			 
#pragma endregion

static int enumberInc = 0;

//----------------------------------------------Êîíòåêñòíîå ìåíş--------------------------------------
public: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (path1 == "") 
	{
		MessageBox::Show("Ïóòü íå óêàçàí.");
	} 
	else 
	{
		richTextBox1->Text = fastColoredTextBox1->Text;
		richTextBox1->SaveFile(path1, RichTextBoxStreamType::PlainText);
	}
}

public: System::Void toolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) 
{

		 

	if (saveFileDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK) {

		 path1 = saveFileDialog1->FileName;

		 if (saveFileDialog1 -> FilterIndex == 1) {
			  richTextBox1->Text = fastColoredTextBox1->Text;
			  richTextBox1->SaveFile(path1+".html", RichTextBoxStreamType::PlainText);
							 }

		 if (saveFileDialog1 -> FilterIndex == 2) {
			  richTextBox2->Text = fastColoredTextBox2->Text;
			  richTextBox2->SaveFile(path1+".css", RichTextBoxStreamType::PlainText);
							 }

		 if (saveFileDialog1 -> FilterIndex == 3) {
			  richTextBox3->Text = fastColoredTextBox3->Text;
			  richTextBox3->SaveFile(path1+".js", RichTextBoxStreamType::PlainText);
							 }

		 if (saveFileDialog1 -> FilterIndex == 4) {
			  richTextBox4->Text = fastColoredTextBox4->Text;
			  richTextBox4->SaveFile(path1+".php", RichTextBoxStreamType::PlainText);
							 }
			  //HTML-äîêóìåíò|*.html*|CSS-ñòèëü|*.css*|Ñêğèïò-JS|*.js*|PHP äîêóìåíò|*.php*
			 }
		 }

public: System::Void toolStripMenuItem17_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			 fontDialog1->ShowDialog();
			 richTextBox1->Font=fontDialog1->Font;
		 }

private: System::Void toolStripMenuItem21_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 colorDialog1->ShowDialog();
			 richTextBox1->ForeColor=colorDialog1->Color;
		 }
private: System::Void toolStripMenuItem22_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 colorDialog2->ShowDialog();
			 fastColoredTextBox1->BackColor=colorDialog2->Color;
		 }

private: System::Void toolStripMenuItem20_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this -> Close();
		 }

private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
		 {

			 path1 = saveFileDialog1->FileName;

	if (saveFileDialog1 ->InitialDirectory == ".html")	  {
			 richTextBox1->Text = fastColoredTextBox1->Text; 
			 richTextBox1->SaveFile(path1+".html", RichTextBoxStreamType::PlainText);
		 if (path1 -> Empty) {
				  MessageBox::Show("Îøèáêà êîìïèëÿöèè. Íå óêàçàí ïóòü ïğîåêòà.");
			  }
		}

	if (saveFileDialog1 ->InitialDirectory == "PHP äîêóìåíò")	  
	{

			 path1 = saveFileDialog1->FileName;

		     richTextBox1->Text = fastColoredTextBox1->Text;
			 richTextBox1->SaveFile(path1+".php", RichTextBoxStreamType::PlainText);
		 if (path1 -> Empty) {
			 MessageBox::Show("Îøèáêà êîìïèëÿöèè. Íå óêàçàí ïóòü ïğîåêòà.");
				  }

			  }
		}

private: System::Void toolStripButton8_Click(System::Object^  sender, System::EventArgs^  e) { 

			 Browser^ Brows = gcnew Browser();
			 Brows->Show();
			 int rnd = rand() % 10000 +1;
			 richTextBox1->Text = fastColoredTextBox1->Text;
			

		 if (path1 == "") {

			 MessageBox::Show("Îøèáêà êîìïèëÿöèè. Íå óêàçàí ïóòü ïğîåêòà.");
			 label1->Text="Îøèáêà ¹1: íå óêàçàí ïóòü ïğîåêòà/ïğîåêò íå ñîçäàí.";
			 richTextBox8->Text+="Ïîñòğîåíèå âûïîëíåíî íå óñïåøíî. Îøèáêè: 1. Èçìåíåíèé: 0. Íàçâàíèå âàøåãî ïğîåêòà: "+toolStripTextBox1->Text+". Âåğñèÿ ñáîğêè: 0."+rnd+"\n";
			
		 } else {

			 richTextBox1->SaveFile(path1, RichTextBoxStreamType::PlainText);
			 label1->Text="Ãîòîâî";
			 Brows->webBrowser1->Navigate(path1);

			 richTextBox8->Text+="Ïîñòğîåíèå âûïîëíåíî óñïåøíî. Îøèáêè: 0. Èçìåíåíèé: 0. Íàçâàíèå âàøåãî ïğîåêòà: "+toolStripTextBox1->Text+". Ïîñòğîåíèå âûïîëíåíî â ğåæèìå: "+". Âåğñèÿ ñáîğêè: 0."+rnd+"\n";
			  
			}
		
		 }

private: System::Void toolStripButton15_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text="";
		 }

private: System::Void ñîçäàòüToolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 CreateProjectModule^ NewProject = gcnew CreateProjectModule();
			 NewProject -> Show();
		 }

private: System::Void ñïğàâêàToolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Ïğîãğàììà íà ñòàäèè àëüôà-âåğñèè è íå îòîáğàæàåò å¸ êîí÷åíûé ğåçóëüòàò! \nÂåğñèÿ ïğîãğàììû: 0.51. Build: 11311. \nÑîçäàòåëü ïğîãğàììû: Ilya Warlod.\nE-mail: arhangel1998i@gmail.com \nÂñå ïğàâà çàùèùåíû ©. ");
			 //SeePage 0.51 (build 11216)
		 }

private: System::Void toolStripSplitButton6_ButtonClick(System::Object^  sender, System::EventArgs^  e) {
			 Helper^ help = gcnew Helper();
			 help->Show();
		 }

private: System::Void toolStripSplitButton3_ButtonClick(System::Object^  sender, System::EventArgs^  e) {
			 fastColoredTextBox1->Undo();
		 }

private: System::Void toolStripSplitButton4_ButtonClick(System::Object^  sender, System::EventArgs^  e) {
			 fastColoredTextBox1->Redo();			 
		 }

private: System::Void âûğåçàòüToolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 fastColoredTextBox1->Cut();
		 }

private: System::Void êîïèğîâàòüToolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 fastColoredTextBox1->Copy();
		 }

private: System::Void âñòàâêàToolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 fastColoredTextBox1->Paste();
		 }

private: System::Void toolStripButton9_Click(System::Object^  sender, System::EventArgs^  e) {

			 CreateLibs^ libsShow = gcnew CreateLibs();
			 libsShow->Show();

		 }

private: System::Void ñîõğàíèòüToolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {

			 path1=saveFileDialog1->FileName;

			 richTextBox1->Text = fastColoredTextBox1->Text;
			 richTextBox1->SaveFile(path1, RichTextBoxStreamType::PlainText);

		 if (path1->Empty) {
			 MessageBox::Show("Ïóòü íå óêàçàí.");

			   }

		 }

private: System::Void toolStripButton16_Click(System::Object^  sender, System::EventArgs^  e) {
			  colorDialog2->ShowDialog();
			  fastColoredTextBox1->BackColor=colorDialog2->Color;
		 }

private: System::Void toolStripMenuItem10_Click(System::Object^  sender, System::EventArgs^  e) {
			 fastColoredTextBox1->Undo();
		 }

private: System::Void toolStripMenuItem18_Click(System::Object^  sender, System::EventArgs^  e) {
			 fastColoredTextBox1->Redo();
		 }

private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Ïğîãğàììà íà ñòàäèè àëüôà-âåğñèè è íå îòîáğàæàåò å¸ êîí÷åíûé ğåçóëüòàò! \nÂåğñèÿ ïğîãğàììû: 0.43. Build: 11216. \nÑîçäàòåëü ïğîãğàììû: Ilya Warlod.\nE-mail: arhangel1998i@mail.ru \nÂñå ïğàâà çàùèùåíû ©. ");
			 //0.43		
		 }

private: System::Void toolStripMenuItem13_Click(System::Object^  sender, System::EventArgs^  e) {
			 fastColoredTextBox1->Copy();
		 }

private: System::Void toolStripMenuItem14_Click(System::Object^  sender, System::EventArgs^  e) {
			 fastColoredTextBox1->Paste();
		 }

private: System::Void toolStripMenuItem12_Click(System::Object^  sender, System::EventArgs^  e) {
			 fastColoredTextBox1->Cut();
		 }

private: System::Void toolStripMenuItem30_Click(System::Object^  sender, System::EventArgs^  e) {
			 MailSend^ newForms = gcnew MailSend();
			 newForms -> Show();
		 }

private: System::Void toolStripMenuItem31_Click(System::Object^  sender, System::EventArgs^  e) {
			 Upload^ Up = gcnew Upload();
			 Up -> Show();
		 }

private: System::Void îòêğûòüToolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		 if (openFileDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK) {
			 path1=openFileDialog1->FileName;
			 richTextBox1->LoadFile(path1, RichTextBoxStreamType::PlainText);
			 }
		 }

private: System::Void toolStripMenuItem7_Click(System::Object^  sender, System::EventArgs^  e) {
			  Helper^ help = gcnew Helper();
			  help->Show();
		 }
		 	  
private: System::Void toolStripMenuItem19_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 if (saveFileDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK) {
			  path1=saveFileDialog1->FileName;
			  richTextBox1->SaveFile(path1+".html", RichTextBoxStreamType::PlainText);
			 }
		 }

private: System::Void toolStripMenuItem24_Click(System::Object^  sender, System::EventArgs^  e) {
			 CreateProjectModule^ NewProject = gcnew CreateProjectModule();
			 NewProject -> Show();
		 }

private: System::Void toolStripMenuItem33_Click(System::Object^  sender, System::EventArgs^  e) {
			NewElement^ showCreateElement = gcnew NewElement();
		 }

private: System::Void toolStripMenuItem35_Click(System::Object^  sender, System::EventArgs^  e) {
			 CreateProjectModule^ NewProject = gcnew CreateProjectModule();
			 NewProject -> Show();
		 }

private: System::Void îáíîâèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text = "";
		 }

private: System::Void øàáëîíSPToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 CreateLibs^ libsShow = gcnew CreateLibs();
			 libsShow->Show();
		 }

private: System::Void ôàéëToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {		
			 path1 = openFileDialog1->FileName;
			 richTextBox1->LoadFile(path1, RichTextBoxStreamType::PlainText);
			 fastColoredTextBox1->Text = richTextBox1->Text;

			 }

		 }

private: System::Void toolStripMenuItem36_Click(System::Object^  sender, System::EventArgs^  e) {
	if (saveFileDialog2->ShowDialog()== System::Windows::Forms::DialogResult::OK) {
		 if (saveFileDialog2 -> FilterIndex == 1) {
			  path1=saveFileDialog2->FileName;
			  File::Create(path1+".html");
							 }

		if (saveFileDialog2 -> FilterIndex == 2) {
			  path1=saveFileDialog2->FileName;
			  File::Create(path1+".css");
							 }

		if (saveFileDialog2 -> FilterIndex == 3) {
			  System::String^ path1=saveFileDialog2->FileName;
			  File::Create(path1+".js");
							 }

		if (saveFileDialog2 -> FilterIndex == 4) {
			  System::String^ path1=saveFileDialog2->FileName;
			  File::Create(path1+".php");
							 }
						 }
		 }

private: System::Void ïğîåêòToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{			 			 
		if (folderBrowserDialog3->ShowDialog()== System::Windows::Forms::DialogResult::OK) 
		{
			  String^ path = folderBrowserDialog3->SelectedPath;
			  String^ pathFolderName = Path::GetFileName(folderBrowserDialog3->SelectedPath);
			  array<String^>^ files = Directory::GetFiles(path);
			  treeView1 -> Nodes -> Add(pathFolderName);		
				for (int i = 0; i< files->Length; i++) 
				{ 
					Convert::ToString(files[i]); 
					String^ filename = Path::GetFileName( files[i] );
					treeView1 -> Nodes[enumberInc] -> Nodes -> Add(filename); 
				} 
			  enumberInc++;		
		}
}
			 

private: System::Void listView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	 	 if(listView1 -> Items[0] -> Selected) {
			  fastColoredTextBox1->SelectedText = "<!DOCTYPE HTML> \n";	
			  fastColoredTextBox1->SelectedText = "<HTML> \n";
			  fastColoredTextBox1->SelectedText = "<HEAD> \n";
			  fastColoredTextBox1->SelectedText = "\n";
			  fastColoredTextBox1->SelectedText = "</HEAD> \n";
			  fastColoredTextBox1->SelectedText = "\n";
			  fastColoredTextBox1->SelectedText = "\n";
			  fastColoredTextBox1->SelectedText = "<BODY> \n";
			  fastColoredTextBox1->SelectedText = "\n";
			  fastColoredTextBox1->SelectedText = "</BODY> \n";
			  fastColoredTextBox1->SelectedText = "\n";
			  fastColoredTextBox1->SelectedText = "\n";
			  fastColoredTextBox1->SelectedText = "</HTML>\n";
			 }

	 	 if(listView1 -> Items[1] -> Selected) {
			  fastColoredTextBox1->SelectedText = "<!DOCTYPE HTML>";			 
			 }

	 	 if(listView1 -> Items[2] -> Selected) {
			  fastColoredTextBox1->SelectedText = "<HTML> \n";
			 }

	 	 if(listView1 -> Items[3] -> Selected) {
			  fastColoredTextBox1->SelectedText = "</HTML> \n";
			 }

	 	 if(listView1 -> Items[4] -> Selected) {
			  fastColoredTextBox1->SelectedText = "<BODY> \n";
			 }

	 	 if(listView1 -> Items[5] -> Selected) {
			  fastColoredTextBox1->SelectedText = "</BODY> \n";

			 }

	 	 if(listView1 -> Items[6] -> Selected) {
			  fastColoredTextBox1->SelectedText = "<TITLE> \n";
			  fastColoredTextBox1->SelectedText = "\n";
			  fastColoredTextBox1->SelectedText = "</TITLE> \n";
			 }

	 	 if(listView1 -> Items[7] -> Selected) {
			  fastColoredTextBox1->SelectedText = "<div class=""></div>";
			 }

	 	 if(listView1 -> Items[8] -> Selected) {
			  fastColoredTextBox1->SelectedText = "<TABLE> \n";

			 }

	 	 if(listView1 -> Items[9] -> Selected) {
			  fastColoredTextBox1->SelectedText = "</TABLE> \n";
			 }

	 	 if(listView1 -> Items[10] -> Selected) {
			  fastColoredTextBox1->SelectedText = "<tr> \n";

			 }

	 	 if(listView1 -> Items[11] -> Selected) {
			  fastColoredTextBox1->SelectedText = "<TABLE> \n";
			  fastColoredTextBox1->SelectedText = "<tr> \n";
			  fastColoredTextBox1->SelectedText = "\n";
			  fastColoredTextBox1->SelectedText = "<td> \n";
			  fastColoredTextBox1->SelectedText = "</td> \n";
			  fastColoredTextBox1->SelectedText = "\n";
			  fastColoredTextBox1->SelectedText = "</tr> \n";
			  fastColoredTextBox1->SelectedText = "\n";
			  fastColoredTextBox1->SelectedText = "</TABLE> \n";

			 }

	 	 if(listView1 -> Items[12] -> Selected) {

			  fastColoredTextBox1->SelectedText = "</tr> \n";
			 }

	 	 if(listView1 -> Items[13] -> Selected) {
			  fastColoredTextBox1->SelectedText = "<td> \n";

			 }

	 	 if(listView1 -> Items[14] -> Selected) {
			  fastColoredTextBox1->SelectedText = "</td> \n";

			 }

	 	 if(listView1 -> Items[15] -> Selected) {
			  fastColoredTextBox1->SelectedText = ("<style type=""text/css""></style> \n");

			 }

	 	 if(listView1 -> Items[16] -> Selected) {
			  fastColoredTextBox1->SelectedText = ("<img src=> \n");

			 }

	 	 if(listView1 -> Items[17] -> Selected) {

			  fastColoredTextBox1->SelectedText = ("<a href=''></a> \n");
			 }

	 	 if(listView1 -> Items[18] -> Selected) {
			  fastColoredTextBox1->SelectedText = ("<script></script> \n");

			 }

	 	 if(listView1 -> Items[19] -> Selected) {
			  fastColoredTextBox1->SelectedText = ("<audio src=></audio> \n");


			 }

	 	 if(listView1 -> Items[20] -> Selected) {
			  fastColoredTextBox1->SelectedText = ("<video src=></video> \n");

			 }

	 	 if(listView1 -> Items[21] -> Selected) {

			  fastColoredTextBox1->SelectedText = ("<br> \n");
			 }

	 	 if(listView1 -> Items[22] -> Selected) {

			  fastColoredTextBox1->SelectedText = ("<hr> \n");
			 }

	 	 if(listView1 -> Items[23] -> Selected) {

			  fastColoredTextBox1->SelectedText = ("<p></p> \n");
			 }

	 	 if(listView1 -> Items[24] -> Selected) {

			  fastColoredTextBox1->SelectedText = ("<p> \n");
			 }

	 	 if(listView1 -> Items[25] -> Selected) {

			  fastColoredTextBox1->SelectedText = ("</p> \n");
			 }

	 	 if(listView1 -> Items[26] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<HEAD> \n";
			 }

	 	 if(listView1 -> Items[27] -> Selected) {

			  fastColoredTextBox1->SelectedText = "</HEAD> \n";
			 }

	 	 if(listView1 -> Items[28] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<b></b>\n";
			 }

	 	 if(listView1 -> Items[29] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<b> \n";
			 }

	 	 if(listView1 -> Items[30] -> Selected) {

			  fastColoredTextBox1->SelectedText = "</b> \n";
			 }

	 	 if(listView1 -> Items[31] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<th></th> \n";
			 }

	 	 if(listView1 -> Items[32] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<th> \n";
			 }
	 	 if(listView1 -> Items[33] -> Selected) {

			  fastColoredTextBox1->SelectedText = "</th> \n";
			 }

	 	 if(listView1 -> Items[34] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<frameset> \n";
			 }

	 	 if(listView1 -> Items[35] -> Selected) {

			  fastColoredTextBox1->SelectedText = "</frameset> \n";
			 }

	 	 if(listView1 -> Items[36] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<frame></frame> \n";
			 }

	 	 if(listView1 -> Items[37] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<form> \n";
			 }
	 	 if(listView1 -> Items[38] -> Selected) {

			  fastColoredTextBox1->SelectedText = "</form> \n";
			 }

	 	 if(listView1 -> Items[39] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<input type='text'> \n";
			 }

	 	 if(listView1 -> Items[40] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<input type='checkbox' name='NAME'> \n";
			 }

	 	 if(listView1 -> Items[41] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<input type='radio' name='NAME'> \n";
			 }

	 	 if(listView1 -> Items[42] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<select name='NAME'></select> \n";
			 }

	 	 if(listView1 -> Items[43] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<input type='reset'> \n";
			 }

	 	 if(listView1 -> Items[44] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<input type='reset'> \n";
			 }

	 	 if(listView1 -> Items[45] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<textarea></textarea> \n";
			 }

	 	 if(listView1 -> Items[46] -> Selected) {

			  fastColoredTextBox1->SelectedText = "for(áëîê îïğåäåëåíèÿ; óñëîâèå; áëîê èçìåíåíèÿ) \n";
			  fastColoredTextBox1->SelectedText = "{ \n";
			  fastColoredTextBox1->SelectedText = "Òåëî öèëêà \n";
			  fastColoredTextBox1->SelectedText = "} \n"; 

			 }

	 	 if(listView1 -> Items[47] -> Selected) {

			  fastColoredTextBox1->SelectedText = "while(óñëîâèå) \n";
			  fastColoredTextBox1->SelectedText = "{ \n";
			  fastColoredTextBox1->SelectedText = "Òåëî öèêëà \n";
			  fastColoredTextBox1->SelectedText = "} \n";

			 }

	 	 if(listView1 -> Items[48] -> Selected) {

			  fastColoredTextBox1->SelectedText = "var ïåğåìåííàÿ/ïåğåìåííûå; \n";
			 }

	 	 if(listView1 -> Items[49] -> Selected) {

			  fastColoredTextBox1->SelectedText = "var ïåğåìåííàÿ/ïåğåìåííûå; \n";
			 }

	 	 if(listView1 -> Items[50] -> Selected) {

			  fastColoredTextBox1->SelectedText = "alert('Âûâîäèìûé òåêñò'); \n";
			 }

	 	 if(listView1 -> Items[51] -> Selected) {

			  fastColoredTextBox1->SelectedText = "prompt('Âûâîäèìûé òåêñò', 'Ñòàíäàğòíûé âûâåäåííûé â ïîëå òåêñò') ;\n";
			 }


	 	 if(listView1 -> Items[52] -> Selected) {

			  fastColoredTextBox1->SelectedText = "function èìÿÔóíêöèè(ïåğåìåííàÿ 1, ïåğåìåííàÿ 2) \n";
			  fastColoredTextBox1->SelectedText = "{\n";
			  fastColoredTextBox1->SelectedText = "Òåëî ôóíêöèè \n";
			  fastColoredTextBox1->SelectedText = "}\n";

			 }

	 	 if(listView1 -> Items[53] -> Selected) {

			  fastColoredTextBox1->SelectedText = "do\n";
			  fastColoredTextBox1->SelectedText = "{\n";
			  fastColoredTextBox1->SelectedText = "Òåëî öèêëà \n";
			  fastColoredTextBox1->SelectedText = "}\n";
			  fastColoredTextBox1->SelectedText = "while (Óñëîâèå)\n";

			 }

	 	 if(listView1 -> Items[54] -> Selected) {

			  fastColoredTextBox1->SelectedText = " break;\n";
			 }

	 	 if(listView1 -> Items[55] -> Selected) {

			  fastColoredTextBox1->SelectedText = " continue; \n";
			 }

	 	 if(listView1 -> Items[56] -> Selected) {

			  fastColoredTextBox1->SelectedText = "for (ïåğåìåííàÿ in îáúåêò/ìàññèâ) \n";
			  fastColoredTextBox1->SelectedText = "{\n";
			  fastColoredTextBox1->SelectedText = "Òåëî öèêëà \n";
			  fastColoredTextBox1->SelectedText = "} \n";

			 }

	 	 if(listView1 -> Items[57] -> Selected) {

			  fastColoredTextBox1->SelectedText = "if (óñëîâèå) \n";
			  fastColoredTextBox1->SelectedText = "{\n";
			  fastColoredTextBox1->SelectedText = "Òåëo óñëîâèÿ \n";
			  fastColoredTextBox1->SelectedText = "} \n";

			 }

	 	 if(listView1 -> Items[58] -> Selected) {

			  fastColoredTextBox1->SelectedText = "<script> \n";
			 }

	 	 if(listView1 -> Items[59] -> Selected) {

			  fastColoredTextBox1->SelectedText = "</script> \n";
			 }

	 	 if(listView1 -> Items[60] -> Selected) {


			 }

	 	 if(listView1 -> Items[61] -> Selected) {


			 }

	 	 if(listView1 -> Items[62] -> Selected) {


			 }

	 	 if(listView1 -> Items[63] -> Selected) {

			 }

	 	 if(listView1 -> Items[64] -> Selected) {


			 }

	 	 if(listView1 -> Items[65] -> Selected) {


			 }

	 	 if(listView1 -> Items[66] -> Selected) {


			 }

	 	 if(listView1 -> Items[67] -> Selected) {


			 }

	 	 if(listView1 -> Items[68] -> Selected) {


			 }

	 	 if(listView1 -> Items[69] -> Selected) {


			 }

	 	 if(listView1 -> Items[70] -> Selected) {


			 }
	 	 if(listView1 -> Items[71] -> Selected) {


			 }

	 	 if(listView1 -> Items[72] -> Selected) {


			 }

	 	 if(listView1 -> Items[73] -> Selected) {


			 }

	 	 if(listView1 -> Items[74] -> Selected) {


			 }

	 	 if(listView1 -> Items[75] -> Selected) {


			 }

	 	 if(listView1 -> Items[76] -> Selected) {


			 }


	 	 if(listView1 -> Items[77] -> Selected) {


			 }

	 	 if(listView1 -> Items[78] -> Selected) {


			 }

	 	 if(listView1 -> Items[79] -> Selected) {


			 }

	 	 if(listView1 -> Items[80] -> Selected) {


			 }

	 	 if(listView1 -> Items[81] -> Selected) {


			 }

	 	 if(listView1 -> Items[82] -> Selected) {


			 }

	 	 if(listView1 -> Items[83] -> Selected) {


			 }

	 	 if(listView1 -> Items[84] -> Selected) {


			 }

	 	 if(listView1 -> Items[85] -> Selected) {


			 }

	 	 if(listView1 -> Items[86] -> Selected) {



			 }
															
		 }

private: System::Void ïîñòğîèòüÏğîåêòToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  Browser^ Brows = gcnew Browser();
			  Brows->Show();
			  int rnd = rand() % 10000 +1;
			  System::String^ path1=saveFileDialog1->FileName; 
			  richTextBox1->SaveFile(path1, RichTextBoxStreamType::PlainText);
	 	 if (path1=="None") {
			  MessageBox::Show("Îøèáêà êîìïèëÿöèè. Íå óêàçàí ïóòü ïğîåêòà.");
			  label1->Text="Îøèáêà ¹1: íå óêàçàí ïóòü ïğîåêòà/ïğîåêò íå ñîçäàí.";
			  richTextBox8->Text+="Ïîñòğîåíèå âûïîëíåíî íå óñïåøíî. Îøèáêè: 1. Èçìåíåíèé: 0. Íàçâàíèå âàøåãî ïğîåêòà: "+toolStripTextBox1->Text+". Âåğñèÿ ñáîğêè: 0."+rnd+"\n";
			  } else {
			  label1->Text="Ãîòîâî";
			  Brows->webBrowser1->Navigate(openFileDialog1->FileName);
			  Brows->webBrowser1->Navigate(saveFileDialog1->FileName);
			  richTextBox8->Text+="Ïîñòğîåíèå âûïîëíåíî óñïåøíî. Îøèáêè: 0. Èçìåíåíèé: 0. Íàçâàíèå âàøåãî ïğîåêòà: "+toolStripTextBox1->Text+". Ïîñòğîåíèå âûïîëíåíî â ğåæèìå: "+". Âåğñèÿ ñáîğêè: 0."+rnd+"\n";
			  }
		 }

private: int findString (System::String^ str) {

			 int i, index;

			 for (i = 0; i<listView1->Items->Count; i++) {

				 if (listView1->Items[i]->Text == str) index = i;

			 }

			 return index;

		 }

private: void focusClear () {

			 for(int j = 0; j<listView1->Items->Count; j++) {listView1->Items[j]->Selected = false; listView1->Items[j]->Selected = false; listView1->Select(); listView1->Focus();}

		 }

private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {	
	
			 int index = findString(textBox1->Text);

			 if (e -> KeyCode == Keys::Enter) {

			 focusClear ();

			 listView1->Items[index]->Selected = true;
			 listView1->Items[index]->Focused = true;	
			 listView1->Select();
			 listView1->Focus();
			 
			 }


		 }
		 
private: System::Void toolStripMenuItem44_Click(System::Object^  sender, System::EventArgs^  e) {
			 Browser^ Brows = gcnew Browser();
			 Brows->Show();
		 }

private: System::Void ıêñïîğòØàáëîíîâToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 CreateLibs^ libsShow = gcnew CreateLibs();
			 libsShow->Show();
		 }

private: System::Void î÷èñòèòüÏğîåêòToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 treeView1->Nodes->Clear();
			 richTextBox1 -> Text = "";

		 }

private: System::Void èìïîğòØàáëîíîâToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 int i = 0;
	 	 if (folderBrowserDialog4 -> ShowDialog() == System::Windows::Forms::DialogResult::OK) { 
			 treeView2->Nodes->Add("Template "+ i + " directory: " + folderBrowserDialog4->SelectedPath);  
			 }
			 i++;

		 }

private: System::Void toolStripComboBox3_Click(System::Object^  sender, System::EventArgs^  e) {

			 int i = 0;
	 	 if (folderBrowserDialog4 -> ShowDialog() == System::Windows::Forms::DialogResult::OK) { 
			 treeView2->Nodes->Add("Template "+ i + " directory: " + folderBrowserDialog4->SelectedPath);  
			 }
			 i++;

		 }
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 MessageBox::Show(
			 "Íà äàííûé ìîìåíò íåò âîçìîæíîñòè âûïîëíèòü âõîä â ó÷åòíóş çàïèñü. Çàêğûòü îêíî?", 
             "Îøèáêà", MessageBoxButtons::YesNo, 
             MessageBoxIcon::Exclamation);

		 }

private: System::Void textBox1_Enter(System::Object^  sender, System::EventArgs^  e) {



		 }


};
}