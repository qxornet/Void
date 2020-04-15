#include "StdAfx.h"
#include "RelationThreadModule.h"

using namespace SeePage;

void RelationThreadModule::addedBlockOfNormalSize							(	) 
{
	int oldX = -690,
		oldY = -220;

	DataGridViewTextBoxColumn^ dgvAge = gcnew DataGridViewTextBoxColumn();
	DataGridView^ dgv = gcnew DataGridView();
	Point^ position;
	System::Windows::Forms::MouseEventArgs^ mousemov;

	dgvAge -> Name						= "Test1";
	dgvAge -> HeaderText				= "Test1";
	dgvAge -> Width						= 99.5;
	dgv -> Height					= 150;
	dgv -> Width						= 101.5; 
	dgv -> Name						= "dgvc" + sch;
	dgv -> Left						= oldX + ::Cursor::Position.X; 
	dgv -> Top						= oldY + ::Cursor::Position.Y;
	dgv -> BorderStyle				= BorderStyle::FixedSingle;
	dgv -> BackgroundColor			= SystemColors::ControlLightLight;
	dgv -> CellBorderStyle			= DataGridViewCellBorderStyle::SingleHorizontal;
	dgv -> ColumnHeadersBorderStyle	= DataGridViewHeaderBorderStyle::Sunken;
	dgv -> ColumnHeadersVisible		= false;
	dgv -> RowHeadersVisible			= false;

	dgv -> Columns -> Add (dgvAge);
	dgv -> Rows -> Add("111");
	dgv -> Rows -> Add("111");
	dgv -> Rows -> Add("222");
	dgv -> Rows -> Add("333");
	dgv -> Rows -> Add("234");

	panel1 -> Controls -> Add(dgv);

	sch += 1;
}

void RelationThreadModule::addedBlockOfFullSize								(	) 
{
	int oldX = -620,
		oldY = -220;

	DataGridViewTextBoxColumn^ dgvAge = gcnew DataGridViewTextBoxColumn();
	DataGridView^ dgv = gcnew DataGridView();
	Point^ position;
	System::Windows::Forms::MouseEventArgs^ mousemov;

	dgvAge -> Name						= "Test1";
	dgvAge -> HeaderText				= "Test1";
	dgvAge -> Width					= 99.5;
	dgv -> Height					= 150;
	dgv -> Width						= 101.5; 
	dgv -> Name						= "dgvc" + sch;
	dgv -> Left						= oldX + ::Cursor::Position.X; 
	dgv -> Top						= oldY + ::Cursor::Position.Y;
	dgv -> BorderStyle				= BorderStyle::FixedSingle;
	dgv -> BackgroundColor			= SystemColors::ControlLightLight;
	dgv -> CellBorderStyle			= DataGridViewCellBorderStyle::SingleHorizontal;
	dgv -> ColumnHeadersBorderStyle	=  DataGridViewHeaderBorderStyle::Sunken;
	dgv -> ColumnHeadersVisible		= false;
	dgv -> RowHeadersVisible			= false;

	dgv -> Columns -> Add (dgvAge);
	dgv -> Rows -> Add("111");
	dgv -> Rows -> Add("111");
	dgv -> Rows -> Add("222");
	dgv -> Rows -> Add("333");
	dgv -> Rows -> Add("234");

	panel1 -> Controls -> Add(dgv);

	sch += 1;
}

System::Void RelationThreadModule::dataGridView4_CellContentClick			(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) 
{



}

System::Void RelationThreadModule::listView2_MouseClick						(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	//Math functions
	if(sqlFunctionList -> Items[0] -> Selected)
		sqlCodeEditBox -> SelectedText = "SELECT ABS(@value);\n";

	if(sqlFunctionList -> Items[1] -> Selected)
		sqlCodeEditBox -> SelectedText = "SELECT ROUND(@value, @value);\n";

	if(sqlFunctionList -> Items[2] -> Selected)
		sqlCodeEditBox -> SelectedText = "SELECT SIGN(@value);\n";

	if(sqlFunctionList -> Items[3] -> Selected)
		sqlCodeEditBox -> SelectedText = "SELECT POWER(@value, $number);\n";

	if(sqlFunctionList -> Items[4] -> Selected)
		sqlCodeEditBox -> SelectedText = "SELECT SQRT(@value);\n";

	if(sqlFunctionList -> Items[5] -> Selected)
		sqlCodeEditBox -> SelectedText = "SELECT CEILING($number);\n";

	if(sqlFunctionList -> Items[6] -> Selected) 
		sqlCodeEditBox -> SelectedText = "SELECT FLOOR($number);\n";

	//String func
	if(sqlFunctionList -> Items[7] -> Selected)
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[8] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[9] -> Selected)
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[10] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[11] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[12] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[13] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[14] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[15] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[16] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[17] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";



	//date functions
	if(sqlFunctionList -> Items[18] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[19] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[20] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[21] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[22] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[23] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[24] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	//
	if(sqlFunctionList -> Items[25] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";

	if(sqlFunctionList -> Items[26] -> Selected) 
		sqlCodeEditBox -> SelectedText = "TEST";
}

System::Void RelationThreadModule::listView1_Click							(System::Object^  sender, System::EventArgs^  e) 
{
	if(listView1 -> Items[0] -> Selected) 
	{
		aboutSelectedBox -> Text = "\n\nEmpty Graph" 
			+ " \n Это пустой граф, который можно заполнить самому.";

		if(listView1 -> Items[1] -> Selected)
			aboutSelectedBox -> Text = "\n\nEmpty Graph" 
			+ " \n Это граф с базовыми элементами таблицы. Не изменяется.";
		else
			aboutSelectedBox -> Text = "";


		if(listView1 -> Items[2] -> Selected)
			aboutSelectedBox -> Text = "\n\nEmpty Graph" 
			+ " \n Это изменяемый граф с элементами таблицы, которые можно изменять.";
		else 
			aboutSelectedBox -> Text = "";

	} else
		aboutSelectedBox -> Text = "";
}

System::Void RelationThreadModule::panel1_DoubleClick						(System::Object^  sender, System::EventArgs^  e) 
{

	if(listView1 -> Items[0] -> Selected) 
	{
		if (this->WindowState == FormWindowState::Maximized)
			addedBlockOfFullSize();

		if (this->WindowState == FormWindowState::Normal)
			addedBlockOfNormalSize();
	}

}

System::Void RelationThreadModule::открытьToolStripButton_Click				(System::Object^  sender, System::EventArgs^  e) 
{
	if (folderBrowserDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK) 
	{

		System::String^ path				= folderBrowserDialog1->SelectedPath;
		System::String^ pathFolderName	= Path::GetFileName(folderBrowserDialog1->SelectedPath);
		array<String^>^ files			= Directory::GetFiles(path);

		treeView1 -> Nodes -> Add(pathFolderName);	

		for (int i = 0; i< files->Length; i++) 
		{ 
			Convert::ToString(files[i]); 
			String^ filename = Path::GetFileName( files[i] );
			treeView1 -> Nodes[enumberInc] -> Nodes -> Add(filename); 
		} 

	}
	enumberInc++;
}

System::Void RelationThreadModule::проектToolStripMenuItem_Click			(System::Object^  sender, System::EventArgs^  e) 
{
	if (folderBrowserDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK) 
	{

		System::String^ path				= folderBrowserDialog1->SelectedPath;
		System::String^ pathFolderName	= Path::GetFileName(folderBrowserDialog1->SelectedPath);
		array<String^>^ files				= Directory::GetFiles(path);

		treeView1 -> Nodes -> Add(pathFolderName);	

		for (int i = 0; i< files->Length; i++) 
		{ 
			Convert::ToString(files[i]); 
			String^ filename = Path::GetFileName( files[i] );
			treeView1 -> Nodes[enumberInc] -> Nodes -> Add(filename); 
		} 

	}
	enumberInc++;
}

System::Void RelationThreadModule::менеджерПроектовToolStripMenuItem_Click	(System::Object^  sender, System::EventArgs^  e) 
{
	form_connect -> ShowDialog();

	dbc_addr = form_connect -> bd_addr;
	dbc_name = form_connect -> bd_name;
	dbc_flag = form_connect -> bd_flag;

	toolStripLabel4 -> Text = dbc_name;

	if ( dbc_name != "" ) 
	{
		if ( dbc_flag != false )
		{
			dbc_password = form_connect -> bd_password;
		}
		else
		{
			toolStripLabel1 -> Image = pictureBox1 -> Image;
			connect	= gcnew OleDbConnection("provider = Microsoft.Jet.OLEDB.4.0; data source = " + dbc_addr);
			is_open = true;

			connect -> Open();
			System::Data::DataTable^ tmp = connect -> GetSchema("Tables");
			connect -> Close();

			dataGridView1 -> DataSource = tmp;			
		}
	}
}

System::Void RelationThreadModule::toolStripButton1_Click					(System::Object^  sender, System::EventArgs^  e) 
{
	if ( sqlCodeEditBox -> Text != "") 
	{
		System::String^ buffer		 = sqlCodeEditBox -> Text -> Replace("\n"," ");
		System::String^ t_command	 = buffer;

		command						 = connect -> CreateCommand();
		command -> CommandText		 = t_command;

		if(is_open)
		{
			connect -> Open();
			OleDbDataReader^ dataReader;

			try 
			{
				dataReader = command->ExecuteReader(); 
			}
			catch(OleDbException^ ex)
			{
				System::String^ errorMessages = "";

				for (int i=0; i < ex->Errors->Count; i++)
				{
					errorMessages += "Index #"		  + var							   + " " +
						"Message: "	  + ex -> Errors[i] -> Message	   + " " +
						"NativeError: "  + ex -> Errors[i] -> NativeError + " " +
						"Source: "		  + ex -> Errors[i] -> Source	   + " " +
						"SQLState: "	  + ex -> Errors[i] -> SQLState	   + "\n";
				}

				fastColoredTextBox2 ->	SelectedText	= errorMessages;
				command				->	CommandText		= "";
				command				->	Cancel();
				var++;
			}
			connect -> Close();
		}
	} 
	else 
		MessageBox::Show(L"Блок запросов пусто. Ничего не выполнено.", 
		"Ошибка выполнения запроса",
		MessageBoxButtons ::OK,
		MessageBoxIcon	::Exclamation);
}

//git fix
/*MessageBox::Show(L"Ошибка синтаксиса.", 
"Ошибка выполнения запроса",
MessageBoxButtons::OK,
MessageBoxIcon::Exclamation);*/

//TabPage page = new TabPage("New");
//page.BackColor = Color.LightBlue;
//tabMenu.TabPages.Add(page);

//Label label = new Label();
//label.Location = new Point(0, 0);
//label.Text = "Tab number " + (tabMenu.TabPages.Count - 1);
//label.AutoSize = true;
//page.Controls.Add(label);
