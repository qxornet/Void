#include "StdAfx.h"
#include "database_manager.h"

using namespace SeePage;

	void database_manager::addedBlockOfNormalSize							(	) 
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

	void database_manager::addedBlockOfFullSize								(	) 
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

	System::Void database_manager::listView2_MouseClick						(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
			//Math functions
	 		 if(listView2 -> Items[0] -> Selected)
				 fastColoredTextBox1 -> SelectedText = "SELECT ABS(@value);\n";

	 		 if(listView2 -> Items[1] -> Selected)
				 fastColoredTextBox1 -> SelectedText = "SELECT ROUND(@value, @value);\n";

	 		 if(listView2 -> Items[2] -> Selected)
				 fastColoredTextBox1 -> SelectedText = "SELECT SIGN(@value);\n";

	 		 if(listView2 -> Items[3] -> Selected)
				 fastColoredTextBox1 -> SelectedText = "SELECT POWER(@value, $number);\n";

	 		 if(listView2 -> Items[4] -> Selected)
				 fastColoredTextBox1 -> SelectedText = "SELECT SQRT(@value);\n";

	 		 if(listView2 -> Items[5] -> Selected)
				 fastColoredTextBox1 -> SelectedText = "SELECT CEILING($number);\n";

	 		 if(listView2 -> Items[6] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "SELECT FLOOR($number);\n";

			 //String func
	 		 if(listView2 -> Items[7] -> Selected)
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[8] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[9] -> Selected)
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[10] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[11] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[12] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[13] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[14] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[15] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[16] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";
			 
	 		 if(listView2 -> Items[17] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";



			 //date functions
			 if(listView2 -> Items[18] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[19] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[20] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[21] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[22] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[23] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[24] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

			 //
	 		 if(listView2 -> Items[25] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";

	 		 if(listView2 -> Items[26] -> Selected) 
				 fastColoredTextBox1 -> SelectedText = "TEST";
}

	System::Void database_manager::listView1_Click							(System::Object^  sender, System::EventArgs^  e) 
{
			 if(listView1 -> Items[0] -> Selected) 
			 {
				richTextBox1 -> Text = "\n\nEmpty Graph" 
				+ " \n Это пустой граф, который можно заполнить самому.";

			 if(listView1 -> Items[1] -> Selected)
				richTextBox1 -> Text = "\n\nEmpty Graph" 
				+ " \n Это граф с базовыми элементами таблицы. Не изменяется.";
			 else
				richTextBox1 -> Text = "";


			 if(listView1 -> Items[2] -> Selected)
				richTextBox1 -> Text = "\n\nEmpty Graph" 
				+ " \n Это изменяемый граф с элементами таблицы, которые можно изменять.";
			 else 
				richTextBox1 -> Text = "";

			 } else
				  richTextBox1 -> Text = "";
}

	System::Void database_manager::panel1_DoubleClick						(System::Object^  sender, System::EventArgs^  e) 
{

			 if(listView1 -> Items[0] -> Selected) 
			 {
				if (this->WindowState == FormWindowState::Maximized)
					addedBlockOfFullSize();

				if (this->WindowState == FormWindowState::Normal)
					addedBlockOfNormalSize();
			 }
					
}

	System::Void database_manager::открытьToolStripButton_Click				(System::Object^  sender, System::EventArgs^  e) 
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

	System::Void database_manager::проектToolStripMenuItem_Click			(System::Object^  sender, System::EventArgs^  e) 
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

	System::Void database_manager::менеджерПроектовToolStripMenuItem_Click	(System::Object^  sender, System::EventArgs^  e) 
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
				 }
			 }
}

	System::Void database_manager::toolStripButton1_Click					(System::Object^  sender, System::EventArgs^  e) 
{
	if ( fastColoredTextBox1 -> Text != "") 
	{
		System::String^ buffer		 = fastColoredTextBox1 -> Text -> Replace("\n"," ");
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

				for (int i=0; i < ex -> Errors -> Count; i++)
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
		MessageBoxButtons::OK,
		MessageBoxIcon::Exclamation);
}
	//git fix
	/*MessageBox::Show(L"Ошибка синтаксиса.", 
						"Ошибка выполнения запроса",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);*/