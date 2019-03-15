#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SeePage {

	/// <summary>
	/// Ñâîäêà äëÿ net_classWrtServer
	///
	/// Âíèìàíèå! Ïğè èçìåíåíèè èìåíè ıòîãî êëàññà íåîáõîäèìî òàêæå èçìåíèòü
	///          ñâîéñòâî èìåíè ôàéëà ğåñóğñîâ ("Resource File Name") äëÿ ñğåäñòâà êîìïèëÿöèè óïğàâëÿåìîãî ğåñóğñà,
	///          ñâÿçàííîãî ñî âñåìè ôàéëàìè ñ ğàñøèğåíèåì .resx, îò êîòîğûõ çàâèñèò äàííûé êëàññ. Â ïğîòèâíîì ñëó÷àå,
	///          êîíñòğóêòîğû íå ñìîãóò ïğàâèëüíî ğàáîòàòü ñ ëîêàëèçîâàííûìè
	///          ğåñóğñàìè, ñîïîñòàâëåííûìè äàííîé ôîğìå.
	/// </summary>
	public ref class net_classWrtServer : public System::Windows::Forms::Form
	{
	public:
		net_classWrtServer(void)
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
	private: System::Windows::Forms::ToolStripButton^  ñîçäàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  îòêğûòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ñîõğàíèòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ïå÷àòüToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  âûğåçàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  êîïèğîâàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  âñòàâêàToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  ñïğàâêàToolStripButton;
	private: System::Windows::Forms::ListView^  listView1;
	public: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: 
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	public: 
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem35;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem36;
	private: System::Windows::Forms::ToolStripMenuItem^  øàáëîíSPToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğîåêòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  øàáëîíSPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem20;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem18;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem10;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem11;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem13;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem14;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem15;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem34;
	private: System::Windows::Forms::ToolStripMenuItem^  âûäåëèòüÂñåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem37;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîèñêÈÇàìåíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîèñêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çàìåíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem16;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem21;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem22;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem17;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^  îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  darkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  whiteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  voidToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem40;
	private: System::Windows::Forms::ToolStripMenuItem^  äèñïåò÷åğİëåìåíòîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïàíåëüİëåìåíòîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  äğóãèåÎêíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âîÂñåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğîåêòToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  äîáàâèòüİëåìåíòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüİëåìåíòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem38;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîêàçàòüÂñåÔàéëûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem43;
	private: System::Windows::Forms::ToolStripMenuItem^  äîáàâèòüÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem39;
	private: System::Windows::Forms::ToolStripMenuItem^  íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îáíîâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ìåíåäæåğÏğîåêòîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñâîéñòâàÏğîåêòàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ìåíåäæåğØàáëîíîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîñòğîåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîñòğîèòüÏğîåêòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  î÷èñòèòüÏğîåêòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüÏğîåêòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem41;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîñòğîèòüÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  î÷èñòèòüÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem42;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çàïóñêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem44;
	private: System::Windows::Forms::ToolStripMenuItem^  çàïóñêÁåçÑáîğêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  îêíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îêíàToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  î÷èñòèòüÎêíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  òî÷êàÎñòàíîâêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  äàííûåToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  äîáàâèòüÄàííûåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ôîğìàòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âûğàâíÿòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem45;
	private: System::Windows::Forms::ToolStripMenuItem^  èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem46;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîÖåíòğóÔîğìûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñåğâèñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  èìïîğòØàáëîíîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ıêñïîğòØàáëîíîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem47;
	private: System::Windows::Forms::ToolStripMenuItem^  íàñòğîéêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïàğàìåòğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem25;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem27;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem28;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem29;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem30;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem31;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem26;
	private: System::Windows::Forms::ToolStripMenuItem^  îÏğîãğàììåToolStripMenuItem;








	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Òğåáóåòñÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Îáÿçàòåëüíûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà - íå èçìåíÿéòå
		/// ñîäåğæèìîå äàííîãî ìåòîäà ïğè ïîìîùè ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(net_classWrtServer::typeid));
			System::Windows::Forms::ListViewGroup^  listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"Öèêëû", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup2 = (gcnew System::Windows::Forms::ListViewGroup(L"Çàãîëîâî÷íûå ôàéëû", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup3 = (gcnew System::Windows::Forms::ListViewGroup(L"Ôóíêöèè", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup4 = (gcnew System::Windows::Forms::ListViewGroup(L"Êëàññû", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup5 = (gcnew System::Windows::Forms::ListViewGroup(L"Ñòğóêòóğû", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup6 = (gcnew System::Windows::Forms::ListViewGroup(L"Ñîêåòû", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup7 = (gcnew System::Windows::Forms::ListViewGroup(L"Îòïğàâêà è ñîåäèíåíèå", System::Windows::Forms::HorizontalAlignment::Left));
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
			this->ñîçäàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->îòêğûòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ñîõğàíèòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ïå÷àòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûğåçàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->êîïèğîâàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->âñòàâêàToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ñïğàâêàToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
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
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->ñîçäàòüToolStripButton, 
				this->îòêğûòüToolStripButton, this->ñîõğàíèòüToolStripButton, this->ïå÷àòüToolStripButton, this->toolStripSeparator, this->âûğåçàòüToolStripButton, 
				this->êîïèğîâàòüToolStripButton, this->âñòàâêàToolStripButton, this->toolStripSeparator1, this->ñïğàâêàToolStripButton});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->toolStrip1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStrip1->Size = System::Drawing::Size(979, 25);
			this->toolStrip1->TabIndex = 16;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// ñîçäàòüToolStripButton
			// 
			this->ñîçäàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñîçäàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ñîçäàòüToolStripButton.Image")));
			this->ñîçäàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîçäàòüToolStripButton->Name = L"ñîçäàòüToolStripButton";
			this->ñîçäàòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->ñîçäàòüToolStripButton->Text = L"&Ñîçäàòü";
			// 
			// îòêğûòüToolStripButton
			// 
			this->îòêğûòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->îòêğûòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"îòêğûòüToolStripButton.Image")));
			this->îòêğûòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->îòêğûòüToolStripButton->Name = L"îòêğûòüToolStripButton";
			this->îòêğûòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->îòêğûòüToolStripButton->Text = L"&Îòêğûòü";
			// 
			// ñîõğàíèòüToolStripButton
			// 
			this->ñîõğàíèòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñîõğàíèòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ñîõğàíèòüToolStripButton.Image")));
			this->ñîõğàíèòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîõğàíèòüToolStripButton->Name = L"ñîõğàíèòüToolStripButton";
			this->ñîõğàíèòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->ñîõğàíèòüToolStripButton->Text = L"&Ñîõğàíèòü";
			// 
			// ïå÷àòüToolStripButton
			// 
			this->ïå÷àòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ïå÷àòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïå÷àòüToolStripButton.Image")));
			this->ïå÷àòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ïå÷àòüToolStripButton->Name = L"ïå÷àòüToolStripButton";
			this->ïå÷àòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->ïå÷àòüToolStripButton->Text = L"&Ïå÷àòü";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// âûğåçàòüToolStripButton
			// 
			this->âûğåçàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->âûğåçàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"âûğåçàòüToolStripButton.Image")));
			this->âûğåçàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âûğåçàòüToolStripButton->Name = L"âûğåçàòüToolStripButton";
			this->âûğåçàòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->âûğåçàòüToolStripButton->Text = L"Â&ûğåçàòü";
			// 
			// êîïèğîâàòüToolStripButton
			// 
			this->êîïèğîâàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->êîïèğîâàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"êîïèğîâàòüToolStripButton.Image")));
			this->êîïèğîâàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->êîïèğîâàòüToolStripButton->Name = L"êîïèğîâàòüToolStripButton";
			this->êîïèğîâàòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->êîïèğîâàòüToolStripButton->Text = L"&Êîïèğîâàòü";
			// 
			// âñòàâêàToolStripButton
			// 
			this->âñòàâêàToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->âñòàâêàToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"âñòàâêàToolStripButton.Image")));
			this->âñòàâêàToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âñòàâêàToolStripButton->Name = L"âñòàâêàToolStripButton";
			this->âñòàâêàToolStripButton->Size = System::Drawing::Size(23, 22);
			this->âñòàâêàToolStripButton->Text = L"Âñò&àâêà";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// ñïğàâêàToolStripButton
			// 
			this->ñïğàâêàToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñïğàâêàToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ñïğàâêàToolStripButton.Image")));
			this->ñïğàâêàToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñïğàâêàToolStripButton->Name = L"ñïğàâêàToolStripButton";
			this->ñïğàâêàToolStripButton->Size = System::Drawing::Size(23, 22);
			this->ñïğàâêàToolStripButton->Text = L"Ñïğ&àâêà";
			// 
			// listView1
			// 
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			listViewGroup1->Header = L"Öèêëû";
			listViewGroup1->Name = L"listViewGroup1";
			listViewGroup2->Header = L"Çàãîëîâî÷íûå ôàéëû";
			listViewGroup2->Name = L"listViewGroup2";
			listViewGroup3->Header = L"Ôóíêöèè";
			listViewGroup3->Name = L"listViewGroup3";
			listViewGroup4->Header = L"Êëàññû";
			listViewGroup4->Name = L"listViewGroup4";
			listViewGroup5->Header = L"Ñòğóêòóğû";
			listViewGroup5->Name = L"listViewGroup5";
			listViewGroup6->Header = L"Ñîêåòû";
			listViewGroup6->Name = L"listViewGroup6";
			listViewGroup7->Header = L"Îòïğàâêà è ñîåäèíåíèå";
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->ôàéëToolStripMenuItem, 
				this->ïğàâêàToolStripMenuItem, this->âèäToolStripMenuItem, this->ïğîåêòToolStripMenuItem1, this->ïîñòğîåíèåToolStripMenuItem, 
				this->ToolStripMenuItem, this->äàííûåToolStripMenuItem1, this->ôîğìàòToolStripMenuItem, this->ñåğâèñToolStripMenuItem, this->toolStripMenuItem25});
			this->menuStrip1->Location = System::Drawing::Point(0, 25);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(0, 1, 0, 1);
			this->menuStrip1->ShowItemToolTips = true;
			this->menuStrip1->Size = System::Drawing::Size(52, 555);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical270;
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->toolStripMenuItem9, 
				this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6, 
				this->toolStripMenuItem7, this->toolStripMenuItem1, this->toolStripMenuItem20});
			this->ôàéëToolStripMenuItem->ForeColor = System::Drawing::Color::Coral;
			this->ôàéëToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ôàéëToolStripMenuItem.Image")));
			this->ôàéëToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ôàéëToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::A));
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			this->ôàéëToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->ôàéëToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripMenuItem35, 
				this->toolStripMenuItem36, this->øàáëîíSPToolStripMenuItem1});
			this->toolStripMenuItem9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem9.Image")));
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem9->Text = L"Ñîçäàòü";
			// 
			// toolStripMenuItem35
			// 
			this->toolStripMenuItem35->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem35.Image")));
			this->toolStripMenuItem35->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->toolStripMenuItem35->Name = L"toolStripMenuItem35";
			this->toolStripMenuItem35->Size = System::Drawing::Size(135, 22);
			this->toolStripMenuItem35->Text = L" Ïğîåêò";
			// 
			// toolStripMenuItem36
			// 
			this->toolStripMenuItem36->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem36.Image")));
			this->toolStripMenuItem36->Name = L"toolStripMenuItem36";
			this->toolStripMenuItem36->Size = System::Drawing::Size(135, 22);
			this->toolStripMenuItem36->Text = L" Ôàéë";
			// 
			// øàáëîíSPToolStripMenuItem1
			// 
			this->øàáëîíSPToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"øàáëîíSPToolStripMenuItem1.Image")));
			this->øàáëîíSPToolStripMenuItem1->Name = L"øàáëîíSPToolStripMenuItem1";
			this->øàáëîíSPToolStripMenuItem1->Size = System::Drawing::Size(135, 22);
			this->øàáëîíSPToolStripMenuItem1->Text = L"Øàáëîí SP";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ôàéëToolStripMenuItem1, 
				this->ïğîåêòToolStripMenuItem, this->øàáëîíSPToolStripMenuItem});
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->toolStripMenuItem2->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem2->Text = L"Îòêğûòü";
			// 
			// ôàéëToolStripMenuItem1
			// 
			this->ôàéëToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ôàéëToolStripMenuItem1.Image")));
			this->ôàéëToolStripMenuItem1->Name = L"ôàéëToolStripMenuItem1";
			this->ôàéëToolStripMenuItem1->Size = System::Drawing::Size(135, 22);
			this->ôàéëToolStripMenuItem1->Text = L"Ôàéë";
			// 
			// ïğîåêòToolStripMenuItem
			// 
			this->ïğîåêòToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïğîåêòToolStripMenuItem.Image")));
			this->ïğîåêòToolStripMenuItem->Name = L"ïğîåêòToolStripMenuItem";
			this->ïğîåêòToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->ïğîåêòToolStripMenuItem->Text = L"Ïğîåêò";
			// 
			// øàáëîíSPToolStripMenuItem
			// 
			this->øàáëîíSPToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"øàáëîíSPToolStripMenuItem.Image")));
			this->øàáëîíSPToolStripMenuItem->Name = L"øàáëîíSPToolStripMenuItem";
			this->øàáëîíSPToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->øàáëîíSPToolStripMenuItem->Text = L"Øàáëîí SP";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem3.Image")));
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->toolStripMenuItem3->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem3->Text = L"Ñîõğàíèòü";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem4.Image")));
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->toolStripMenuItem4->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem4->Text = L"Ñîõğàíèòü êàê...";
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
			this->toolStripMenuItem6->Text = L"Ïàğàìåòğû ñòğàíèöû...";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem7.Image")));
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(204, 22);
			this->toolStripMenuItem7->Text = L"Ïîìîùü";
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
			this->toolStripMenuItem20->Text = L"Âûõîä";
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {this->toolStripMenuItem18, 
				this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripMenuItem14, 
				this->toolStripMenuItem15, this->toolStripMenuItem34, this->âûäåëèòüÂñåToolStripMenuItem, this->toolStripMenuItem37, this->ïîèñêÈÇàìåíàToolStripMenuItem});
			this->ïğàâêàToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			this->ïğàâêàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïğàâêàToolStripMenuItem.Image")));
			this->ïğàâêàToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ïğàâêàToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::C));
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			this->ïğàâêàToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->ïğàâêàToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem18
			// 
			this->toolStripMenuItem18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem18.Image")));
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->toolStripMenuItem18->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem18->Text = L"Âåğíóòü";
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem10.Image")));
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripMenuItem10->RightToLeftAutoMirrorImage = true;
			this->toolStripMenuItem10->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->toolStripMenuItem10->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem10->Text = L"Îòìåíà";
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
			this->toolStripMenuItem12->Text = L"Âûğåçàòü";
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem13.Image")));
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->toolStripMenuItem13->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem13->Text = L"Êîïèğîâàòü";
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->toolStripMenuItem14->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem14->Text = L"Âñòàâèòü";
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->toolStripMenuItem15->Size = System::Drawing::Size(181, 22);
			this->toolStripMenuItem15->Text = L"Óäàëèòü";
			// 
			// toolStripMenuItem34
			// 
			this->toolStripMenuItem34->Name = L"toolStripMenuItem34";
			this->toolStripMenuItem34->Size = System::Drawing::Size(178, 6);
			// 
			// âûäåëèòüÂñåToolStripMenuItem
			// 
			this->âûäåëèòüÂñåToolStripMenuItem->Name = L"âûäåëèòüÂñåToolStripMenuItem";
			this->âûäåëèòüÂñåToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->âûäåëèòüÂñåToolStripMenuItem->Text = L"Âûäåëèòü âñå";
			// 
			// toolStripMenuItem37
			// 
			this->toolStripMenuItem37->Name = L"toolStripMenuItem37";
			this->toolStripMenuItem37->Size = System::Drawing::Size(178, 6);
			// 
			// ïîèñêÈÇàìåíàToolStripMenuItem
			// 
			this->ïîèñêÈÇàìåíàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ïîèñêToolStripMenuItem, 
				this->çàìåíàToolStripMenuItem});
			this->ïîèñêÈÇàìåíàToolStripMenuItem->Name = L"ïîèñêÈÇàìåíàToolStripMenuItem";
			this->ïîèñêÈÇàìåíàToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->ïîèñêÈÇàìåíàToolStripMenuItem->Text = L"Ïîèñê è çàìåíà";
			// 
			// ïîèñêToolStripMenuItem
			// 
			this->ïîèñêToolStripMenuItem->Name = L"ïîèñêToolStripMenuItem";
			this->ïîèñêToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->ïîèñêToolStripMenuItem->Text = L"Ïîèñê";
			// 
			// çàìåíàToolStripMenuItem
			// 
			this->çàìåíàToolStripMenuItem->Name = L"çàìåíàToolStripMenuItem";
			this->çàìåíàToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->çàìåíàToolStripMenuItem->Text = L"Çàìåíà";
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->toolStripMenuItem16, 
				this->toolStripMenuItem17, this->toolStripMenuItem8, this->îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem, this->îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem, 
				this->toolStripMenuItem40, this->äèñïåò÷åğİëåìåíòîâToolStripMenuItem, this->ïàíåëüİëåìåíòîâToolStripMenuItem, this->äğóãèåÎêíàToolStripMenuItem, 
				this->âîÂñåToolStripMenuItem});
			this->âèäToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			this->âèäToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"âèäToolStripMenuItem.Image")));
			this->âèäToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->âèäToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::V));
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			this->âèäToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->âèäToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItem21, 
				this->toolStripMenuItem22});
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(195, 22);
			this->toolStripMenuItem16->Text = L"Öâåò...";
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(104, 22);
			this->toolStripMenuItem21->Text = L"Òåêñò";
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			this->toolStripMenuItem22->Size = System::Drawing::Size(104, 22);
			this->toolStripMenuItem22->Text = L"Ôîí";
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(195, 22);
			this->toolStripMenuItem17->Text = L"Ğåäàêòèğîâàòü òåêñò...";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(192, 6);
			// 
			// îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem
			// 
			this->îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->darkToolStripMenuItem, 
				this->whiteToolStripMenuItem, this->voidToolStripMenuItem});
			this->îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem->Name = L"îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem";
			this->îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->îêíîĞåäàêòèğîâàíèÿÊîäàToolStripMenuItem->Text = L"Òåìû";
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
			// îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem
			// 
			this->îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem->Name = L"îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem";
			this->îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->îáîçğåâàòåëüİëåìåíòîâToolStripMenuItem->Text = L"Çàãğóçêà òåì";
			// 
			// toolStripMenuItem40
			// 
			this->toolStripMenuItem40->Name = L"toolStripMenuItem40";
			this->toolStripMenuItem40->Size = System::Drawing::Size(192, 6);
			// 
			// äèñïåò÷åğİëåìåíòîâToolStripMenuItem
			// 
			this->äèñïåò÷åğİëåìåíòîâToolStripMenuItem->Name = L"äèñïåò÷åğİëåìåíòîâToolStripMenuItem";
			this->äèñïåò÷åğİëåìåíòîâToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->äèñïåò÷åğİëåìåíòîâToolStripMenuItem->Text = L"Äèñïåò÷åğ ıëåìåíòîâ";
			// 
			// ïàíåëüİëåìåíòîâToolStripMenuItem
			// 
			this->ïàíåëüİëåìåíòîâToolStripMenuItem->Name = L"ïàíåëüİëåìåíòîâToolStripMenuItem";
			this->ïàíåëüİëåìåíòîâToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->ïàíåëüİëåìåíòîâToolStripMenuItem->Text = L"Ïàíåëü ıëåìåíòîâ";
			// 
			// äğóãèåÎêíàToolStripMenuItem
			// 
			this->äğóãèåÎêíàToolStripMenuItem->Name = L"äğóãèåÎêíàToolStripMenuItem";
			this->äğóãèåÎêíàToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->äğóãèåÎêíàToolStripMenuItem->Text = L"Äğóãèå îêíà";
			// 
			// âîÂñåToolStripMenuItem
			// 
			this->âîÂñåToolStripMenuItem->Name = L"âîÂñåToolStripMenuItem";
			this->âîÂñåToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->âîÂñåToolStripMenuItem->Text = L"Âî âåñü ıêğàí";
			// 
			// ïğîåêòToolStripMenuItem1
			// 
			this->ïğîåêòToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {this->äîáàâèòüİëåìåíòToolStripMenuItem, 
				this->óäàëèòüİëåìåíòToolStripMenuItem, this->toolStripMenuItem38, this->ïîêàçàòüÂñåÔàéëûToolStripMenuItem, this->toolStripMenuItem43, 
				this->äîáàâèòüÔàéëToolStripMenuItem, this->toolStripMenuItem39, this->íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem, this->îáíîâèòüToolStripMenuItem, 
				this->ìåíåäæåğÏğîåêòîâToolStripMenuItem, this->ñâîéñòâàÏğîåêòàToolStripMenuItem, this->ìåíåäæåğØàáëîíîâToolStripMenuItem});
			this->ïğîåêòToolStripMenuItem1->ForeColor = System::Drawing::Color::Coral;
			this->ïğîåêòToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïğîåêòToolStripMenuItem1.Image")));
			this->ïğîåêòToolStripMenuItem1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ïğîåêòToolStripMenuItem1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ïğîåêòToolStripMenuItem1->Name = L"ïğîåêòToolStripMenuItem1";
			this->ïğîåêòToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::P));
			this->ïğîåêòToolStripMenuItem1->Size = System::Drawing::Size(51, 67);
			this->ïğîåêòToolStripMenuItem1->Text = L"Ïğîåêò";
			this->ïğîåêòToolStripMenuItem1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->ïğîåêòToolStripMenuItem1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// äîáàâèòüİëåìåíòToolStripMenuItem
			// 
			this->äîáàâèòüİëåìåíòToolStripMenuItem->Name = L"äîáàâèòüİëåìåíòToolStripMenuItem";
			this->äîáàâèòüİëåìåíòToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->äîáàâèòüİëåìåíòToolStripMenuItem->Text = L"Äîáàâèòü ıëåìåíò";
			// 
			// óäàëèòüİëåìåíòToolStripMenuItem
			// 
			this->óäàëèòüİëåìåíòToolStripMenuItem->Name = L"óäàëèòüİëåìåíòToolStripMenuItem";
			this->óäàëèòüİëåìåíòToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->óäàëèòüİëåìåíòToolStripMenuItem->Text = L"Óäàëèòü ıëåìåíò";
			// 
			// toolStripMenuItem38
			// 
			this->toolStripMenuItem38->Name = L"toolStripMenuItem38";
			this->toolStripMenuItem38->Size = System::Drawing::Size(264, 6);
			// 
			// ïîêàçàòüÂñåÔàéëûToolStripMenuItem
			// 
			this->ïîêàçàòüÂñåÔàéëûToolStripMenuItem->Name = L"ïîêàçàòüÂñåÔàéëûToolStripMenuItem";
			this->ïîêàçàòüÂñåÔàéëûToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->ïîêàçàòüÂñåÔàéëûToolStripMenuItem->Text = L"Ïîêàçàòü âñå ôàéëû";
			// 
			// toolStripMenuItem43
			// 
			this->toolStripMenuItem43->Name = L"toolStripMenuItem43";
			this->toolStripMenuItem43->Size = System::Drawing::Size(267, 22);
			this->toolStripMenuItem43->Text = L"Äîáàâèòü ôàéë";
			// 
			// äîáàâèòüÔàéëToolStripMenuItem
			// 
			this->äîáàâèòüÔàéëToolStripMenuItem->Name = L"äîáàâèòüÔàéëToolStripMenuItem";
			this->äîáàâèòüÔàéëToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->äîáàâèòüÔàéëToolStripMenuItem->Text = L"Ïåğåèìåíîâàòü ôàéë";
			// 
			// toolStripMenuItem39
			// 
			this->toolStripMenuItem39->Name = L"toolStripMenuItem39";
			this->toolStripMenuItem39->Size = System::Drawing::Size(264, 6);
			// 
			// íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem
			// 
			this->íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem->Name = L"íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem";
			this->íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->íàçíà÷èòüÇàïóñêàåìûìÏğîåêòîìToolStripMenuItem->Text = L"Íàçíà÷èòü çàïóñêàåìûì ïğîåêòîì";
			// 
			// îáíîâèòüToolStripMenuItem
			// 
			this->îáíîâèòüToolStripMenuItem->Name = L"îáíîâèòüToolStripMenuItem";
			this->îáíîâèòüToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->îáíîâèòüToolStripMenuItem->Text = L"Î÷èñòèòü îêíî ğåäàêòèğîâàíèÿ";
			// 
			// ìåíåäæåğÏğîåêòîâToolStripMenuItem
			// 
			this->ìåíåäæåğÏğîåêòîâToolStripMenuItem->Name = L"ìåíåäæåğÏğîåêòîâToolStripMenuItem";
			this->ìåíåäæåğÏğîåêòîâToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->ìåíåäæåğÏğîåêòîâToolStripMenuItem->Text = L"Ìåíåäæåğ ïğîåêòîâ";
			// 
			// ñâîéñòâàÏğîåêòàToolStripMenuItem
			// 
			this->ñâîéñòâàÏğîåêòàToolStripMenuItem->Name = L"ñâîéñòâàÏğîåêòàToolStripMenuItem";
			this->ñâîéñòâàÏğîåêòàToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->ñâîéñòâàÏğîåêòàToolStripMenuItem->Text = L"Ñâîéñòâà ïğîåêòà";
			// 
			// ìåíåäæåğØàáëîíîâToolStripMenuItem
			// 
			this->ìåíåäæåğØàáëîíîâToolStripMenuItem->Name = L"ìåíåäæåğØàáëîíîâToolStripMenuItem";
			this->ìåíåäæåğØàáëîíîâToolStripMenuItem->Size = System::Drawing::Size(267, 22);
			this->ìåíåäæåğØàáëîíîâToolStripMenuItem->Text = L"Ìåíåäæåğ øàáëîíîâ";
			// 
			// ïîñòğîåíèåToolStripMenuItem
			// 
			this->ïîñòğîåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->ïîñòğîèòüÏğîåêòToolStripMenuItem, 
				this->î÷èñòèòüÏğîåêòToolStripMenuItem, this->óäàëèòüÏğîåêòToolStripMenuItem, this->toolStripMenuItem41, this->ïîñòğîèòüÔàéëToolStripMenuItem, 
				this->î÷èñòèòüÔàéëToolStripMenuItem, this->óäàëèòüÔàéëToolStripMenuItem, this->toolStripMenuItem42});
			this->ïîñòğîåíèåToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			this->ïîñòğîåíèåToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïîñòğîåíèåToolStripMenuItem.Image")));
			this->ïîñòğîåíèåToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ïîñòğîåíèåToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ïîñòğîåíèåToolStripMenuItem->Name = L"ïîñòğîåíèåToolStripMenuItem";
			this->ïîñòğîåíèåToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::B));
			this->ïîñòğîåíèåToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->ïîñòğîåíèåToolStripMenuItem->Text = L"Áèëä";
			this->ïîñòğîåíèåToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->ïîñòğîåíèåToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// ïîñòğîèòüÏğîåêòToolStripMenuItem
			// 
			this->ïîñòğîèòüÏğîåêòToolStripMenuItem->Name = L"ïîñòğîèòüÏğîåêòToolStripMenuItem";
			this->ïîñòğîèòüÏğîåêòToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->ïîñòğîèòüÏğîåêòToolStripMenuItem->Text = L"Ïîñòğîèòü ïğîåêò";
			// 
			// î÷èñòèòüÏğîåêòToolStripMenuItem
			// 
			this->î÷èñòèòüÏğîåêòToolStripMenuItem->Name = L"î÷èñòèòüÏğîåêòToolStripMenuItem";
			this->î÷èñòèòüÏğîåêòToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->î÷èñòèòüÏğîåêòToolStripMenuItem->Text = L"Î÷èñòèòü ïğîåêò";
			// 
			// óäàëèòüÏğîåêòToolStripMenuItem
			// 
			this->óäàëèòüÏğîåêòToolStripMenuItem->Name = L"óäàëèòüÏğîåêòToolStripMenuItem";
			this->óäàëèòüÏğîåêòToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->óäàëèòüÏğîåêòToolStripMenuItem->Text = L"Óäàëèòü ïğîåêò";
			// 
			// toolStripMenuItem41
			// 
			this->toolStripMenuItem41->Name = L"toolStripMenuItem41";
			this->toolStripMenuItem41->Size = System::Drawing::Size(171, 6);
			// 
			// ïîñòğîèòüÔàéëToolStripMenuItem
			// 
			this->ïîñòğîèòüÔàéëToolStripMenuItem->Name = L"ïîñòğîèòüÔàéëToolStripMenuItem";
			this->ïîñòğîèòüÔàéëToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->ïîñòğîèòüÔàéëToolStripMenuItem->Text = L"Ïîñòğîèòü ôàéë";
			// 
			// î÷èñòèòüÔàéëToolStripMenuItem
			// 
			this->î÷èñòèòüÔàéëToolStripMenuItem->Name = L"î÷èñòèòüÔàéëToolStripMenuItem";
			this->î÷èñòèòüÔàéëToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->î÷èñòèòüÔàéëToolStripMenuItem->Text = L"Î÷èñòèòü ôàéë";
			// 
			// óäàëèòüÔàéëToolStripMenuItem
			// 
			this->óäàëèòüÔàéëToolStripMenuItem->Name = L"óäàëèòüÔàéëToolStripMenuItem";
			this->óäàëèòüÔàéëToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->óäàëèòüÔàéëToolStripMenuItem->Text = L"Óäàëèòü ôàéë";
			// 
			// toolStripMenuItem42
			// 
			this->toolStripMenuItem42->Name = L"toolStripMenuItem42";
			this->toolStripMenuItem42->Size = System::Drawing::Size(171, 6);
			// 
			// ToolStripMenuItem
			// 
			this->ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->çàïóñêToolStripMenuItem, 
				this->toolStripMenuItem44, this->çàïóñêÁåçÑáîğêèToolStripMenuItem, this->îêíàToolStripMenuItem, this->îêíàToolStripMenuItem1, 
				this->î÷èñòèòüÎêíàToolStripMenuItem, this->òî÷êàÎñòàíîâêèToolStripMenuItem});
			this->ToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			this->ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripMenuItem.Image")));
			this->ToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ToolStripMenuItem->Name = L"ToolStripMenuItem";
			this->ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::D));
			this->ToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->ToolStripMenuItem->Text = L"Îòëàäêà";
			this->ToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// çàïóñêToolStripMenuItem
			// 
			this->çàïóñêToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"çàïóñêToolStripMenuItem.Image")));
			this->çàïóñêToolStripMenuItem->Name = L"çàïóñêToolStripMenuItem";
			this->çàïóñêToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->çàïóñêToolStripMenuItem->Text = L"Çàïóñê";
			// 
			// toolStripMenuItem44
			// 
			this->toolStripMenuItem44->Name = L"toolStripMenuItem44";
			this->toolStripMenuItem44->Size = System::Drawing::Size(176, 22);
			this->toolStripMenuItem44->Text = L"Çàïóñê áåç ñáîğêè";
			// 
			// çàïóñêÁåçÑáîğêèToolStripMenuItem
			// 
			this->çàïóñêÁåçÑáîğêèToolStripMenuItem->Name = L"çàïóñêÁåçÑáîğêèToolStripMenuItem";
			this->çàïóñêÁåçÑáîğêèToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->çàïóñêÁåçÑáîğêèToolStripMenuItem->Text = L"Çàïóñê ñ î÷èñòêîé";
			// 
			// îêíàToolStripMenuItem
			// 
			this->îêíàToolStripMenuItem->Name = L"îêíàToolStripMenuItem";
			this->îêíàToolStripMenuItem->Size = System::Drawing::Size(173, 6);
			// 
			// îêíàToolStripMenuItem1
			// 
			this->îêíàToolStripMenuItem1->Name = L"îêíàToolStripMenuItem1";
			this->îêíàToolStripMenuItem1->Size = System::Drawing::Size(176, 22);
			this->îêíàToolStripMenuItem1->Text = L"Îêíà";
			// 
			// î÷èñòèòüÎêíàToolStripMenuItem
			// 
			this->î÷èñòèòüÎêíàToolStripMenuItem->Name = L"î÷èñòèòüÎêíàToolStripMenuItem";
			this->î÷èñòèòüÎêíàToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->î÷èñòèòüÎêíàToolStripMenuItem->Text = L"Î÷èñòèòü îêíà";
			// 
			// òî÷êàÎñòàíîâêèToolStripMenuItem
			// 
			this->òî÷êàÎñòàíîâêèToolStripMenuItem->Name = L"òî÷êàÎñòàíîâêèToolStripMenuItem";
			this->òî÷êàÎñòàíîâêèToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->òî÷êàÎñòàíîâêèToolStripMenuItem->Text = L"Òî÷êà îñòàíîâêè";
			// 
			// äàííûåToolStripMenuItem1
			// 
			this->äàííûåToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem, 
				this->ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem, this->äîáàâèòüÄàííûåToolStripMenuItem, this->íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem});
			this->äàííûåToolStripMenuItem1->ForeColor = System::Drawing::Color::DarkGreen;
			this->äàííûåToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"äàííûåToolStripMenuItem1.Image")));
			this->äàííûåToolStripMenuItem1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->äàííûåToolStripMenuItem1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->äàííûåToolStripMenuItem1->Name = L"äàííûåToolStripMenuItem1";
			this->äàííûåToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::I));
			this->äàííûåToolStripMenuItem1->Size = System::Drawing::Size(51, 67);
			this->äàííûåToolStripMenuItem1->Text = L"Äàííûå";
			this->äàííûåToolStripMenuItem1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->äàííûåToolStripMenuItem1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem
			// 
			this->ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem->Name = L"ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem";
			this->ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->ïîêàçàòüÈñòî÷íèêèÄàííûõToolStripMenuItem->Text = L"Ïîêàçàòü èñòî÷íèêè äàííûõ";
			// 
			// ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem
			// 
			this->ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem->Name = L"ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem";
			this->ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->ñïèñîêÍàéäåííûõÄàííûõToolStripMenuItem->Text = L"Ñïèñîê íàéäåííûõ äàííûõ";
			// 
			// äîáàâèòüÄàííûåToolStripMenuItem
			// 
			this->äîáàâèòüÄàííûåToolStripMenuItem->Name = L"äîáàâèòüÄàííûåToolStripMenuItem";
			this->äîáàâèòüÄàííûåToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->äîáàâèòüÄàííûåToolStripMenuItem->Text = L"Äîáàâèòü äàííûå";
			// 
			// íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem
			// 
			this->íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem->Name = L"íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem";
			this->íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->íàéòèÄàííûåÂÈíòåğíåòåToolStripMenuItem->Text = L"Íàéòè äàííûå â Èíòåğíåòå";
			// 
			// ôîğìàòToolStripMenuItem
			// 
			this->ôîğìàòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->âûğàâíÿòüToolStripMenuItem, 
				this->ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem, this->toolStripMenuItem45, this->èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem, this->èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem, 
				this->toolStripMenuItem46, this->ïîÖåíòğóÔîğìûToolStripMenuItem});
			this->ôîğìàòToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			this->ôîğìàòToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ôîğìàòToolStripMenuItem.Image")));
			this->ôîğìàòToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ôîğìàòToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ôîğìàòToolStripMenuItem->Name = L"ôîğìàòToolStripMenuItem";
			this->ôîğìàòToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::L));
			this->ôîğìàòToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->ôîğìàòToolStripMenuItem->Text = L"Ôîğìàò";
			this->ôîğìàòToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->ôîğìàòToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// âûğàâíÿòüToolStripMenuItem
			// 
			this->âûğàâíÿòüToolStripMenuItem->Name = L"âûğàâíÿòüToolStripMenuItem";
			this->âûğàâíÿòüToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->âûğàâíÿòüToolStripMenuItem->Text = L"Âûğîâíÿòü";
			// 
			// ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem
			// 
			this->ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem->Name = L"ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem";
			this->ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->ñäåëàòüÎäíîãîĞàçìåğàToolStripMenuItem->Text = L"Ñäåëàòü îäíîãî ğàçìåğà";
			// 
			// toolStripMenuItem45
			// 
			this->toolStripMenuItem45->Name = L"toolStripMenuItem45";
			this->toolStripMenuItem45->Size = System::Drawing::Size(213, 6);
			// 
			// èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem
			// 
			this->èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem->Name = L"èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem";
			this->èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->èíåòğâàëÏîÃàğèçîíàòëèToolStripMenuItem->Text = L"Èíòåğâàë ïî ãàğèçîíòàëè";
			// 
			// èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem
			// 
			this->èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem->Name = L"èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem";
			this->èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->èíåòğâàëÏîÂåğòèêàëèToolStripMenuItem->Text = L"Èíòåğâàë ïî âåğòèêàëè";
			// 
			// toolStripMenuItem46
			// 
			this->toolStripMenuItem46->Name = L"toolStripMenuItem46";
			this->toolStripMenuItem46->Size = System::Drawing::Size(213, 6);
			// 
			// ïîÖåíòğóÔîğìûToolStripMenuItem
			// 
			this->ïîÖåíòğóÔîğìûToolStripMenuItem->Name = L"ïîÖåíòğóÔîğìûToolStripMenuItem";
			this->ïîÖåíòğóÔîğìûToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->ïîÖåíòğóÔîğìûToolStripMenuItem->Text = L"Ïî öåíòğó ôîğìû";
			// 
			// ñåğâèñToolStripMenuItem
			// 
			this->ñåğâèñToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->èìïîğòØàáëîíîâToolStripMenuItem, 
				this->ıêñïîğòØàáëîíîâToolStripMenuItem, this->toolStripMenuItem47, this->íàñòğîéêàToolStripMenuItem, this->ïàğàìåòğûToolStripMenuItem});
			this->ñåğâèñToolStripMenuItem->ForeColor = System::Drawing::Color::DarkGreen;
			this->ñåğâèñToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ñåğâèñToolStripMenuItem.Image")));
			this->ñåğâèñToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ñåğâèñToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ñåğâèñToolStripMenuItem->Name = L"ñåğâèñToolStripMenuItem";
			this->ñåğâèñToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::S));
			this->ñåğâèñToolStripMenuItem->Size = System::Drawing::Size(51, 67);
			this->ñåğâèñToolStripMenuItem->Text = L"Ñåğâèñ";
			this->ñåğâèñToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->ñåğâèñToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// èìïîğòØàáëîíîâToolStripMenuItem
			// 
			this->èìïîğòØàáëîíîâToolStripMenuItem->Name = L"èìïîğòØàáëîíîâToolStripMenuItem";
			this->èìïîğòØàáëîíîâToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->èìïîğòØàáëîíîâToolStripMenuItem->Text = L"Èìïîğò øàáëîíîâ";
			// 
			// ıêñïîğòØàáëîíîâToolStripMenuItem
			// 
			this->ıêñïîğòØàáëîíîâToolStripMenuItem->Name = L"ıêñïîğòØàáëîíîâToolStripMenuItem";
			this->ıêñïîğòØàáëîíîâToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ıêñïîğòØàáëîíîâToolStripMenuItem->Text = L"İêñïîğò øàáëîíîâ";
			// 
			// toolStripMenuItem47
			// 
			this->toolStripMenuItem47->Name = L"toolStripMenuItem47";
			this->toolStripMenuItem47->Size = System::Drawing::Size(177, 6);
			// 
			// íàñòğîéêàToolStripMenuItem
			// 
			this->íàñòğîéêàToolStripMenuItem->Name = L"íàñòğîéêàToolStripMenuItem";
			this->íàñòğîéêàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->íàñòğîéêàToolStripMenuItem->Text = L"Íàñòğîéêà";
			// 
			// ïàğàìåòğûToolStripMenuItem
			// 
			this->ïàğàìåòğûToolStripMenuItem->Name = L"ïàğàìåòğûToolStripMenuItem";
			this->ïàğàìåòğûToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïàğàìåòğûToolStripMenuItem->Text = L"Ïàğàìåòğû";
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStripMenuItem27, 
				this->toolStripMenuItem28, this->toolStripMenuItem29, this->toolStripMenuItem30, this->toolStripMenuItem31, this->toolStripMenuItem26, 
				this->îÏğîãğàììåToolStripMenuItem});
			this->toolStripMenuItem25->ForeColor = System::Drawing::Color::DarkGreen;
			this->toolStripMenuItem25->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem25.Image")));
			this->toolStripMenuItem25->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->toolStripMenuItem25->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem25->Name = L"toolStripMenuItem25";
			this->toolStripMenuItem25->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::H));
			this->toolStripMenuItem25->Size = System::Drawing::Size(51, 67);
			this->toolStripMenuItem25->Text = L"Ñïğàâêà";
			this->toolStripMenuItem25->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->toolStripMenuItem25->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// toolStripMenuItem27
			// 
			this->toolStripMenuItem27->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem27.Image")));
			this->toolStripMenuItem27->Name = L"toolStripMenuItem27";
			this->toolStripMenuItem27->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem27->Text = L"Ñïğàâêà";
			// 
			// toolStripMenuItem28
			// 
			this->toolStripMenuItem28->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem28.Image")));
			this->toolStripMenuItem28->Name = L"toolStripMenuItem28";
			this->toolStripMenuItem28->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem28->Text = L"Ïîèñê";
			// 
			// toolStripMenuItem29
			// 
			this->toolStripMenuItem29->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem29.Image")));
			this->toolStripMenuItem29->Name = L"toolStripMenuItem29";
			this->toolStripMenuItem29->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem29->Text = L"Ñîäåğæàíèå";
			// 
			// toolStripMenuItem30
			// 
			this->toolStripMenuItem30->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem30.Image")));
			this->toolStripMenuItem30->Name = L"toolStripMenuItem30";
			this->toolStripMenuItem30->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem30->Text = L" Ñîîáùèòü îá îøèáêå";
			// 
			// toolStripMenuItem31
			// 
			this->toolStripMenuItem31->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem31.Image")));
			this->toolStripMenuItem31->Name = L"toolStripMenuItem31";
			this->toolStripMenuItem31->Size = System::Drawing::Size(258, 22);
			this->toolStripMenuItem31->Text = L" Ïğîâåğèòü íàëè÷èå îáíîâëåíèé";
			// 
			// toolStripMenuItem26
			// 
			this->toolStripMenuItem26->Name = L"toolStripMenuItem26";
			this->toolStripMenuItem26->Size = System::Drawing::Size(255, 6);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå SeePage 0.43";
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
