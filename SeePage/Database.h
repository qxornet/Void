

  /*String^ connectionString = "provider = Microsoft.Jet.OLEDB.4.0; data source = kurs.mdb";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	command->CommandText = "SELECT * FROM ВУЗы";
	conn->Open();
	OleDbDataReader^ dataReader = command->ExecuteReader();
	while (dataReader->Read()){
    dataGridView1->Rows->Add(dataReader["Номер ВУЗа"], dataReader["Название"], dataReader["Адрес"], dataReader["ФИО ректора"]);
	}
	dataReader->Close();
	conn->Close();
	
	
	
	String^ field = textBox1->Text;
	String^ selectedField = comboBox1->Text;
	String^ connectionString = "provider = Microsoft.Jet.OLEDB.4.0; data source = kurs.mdb";
	OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = conn->CreateCommand();
	command->CommandText = "SELECT ÂÓÇû.Íàçâàíèå, ÂÓÇû.Àäðåñ, ÑÓÇû.Íàçâàíèå, ÑÓÇû.Àäðåñ \n FROM ÂÓÇû INNER JOIN ÑÓÇû ON (ÂÓÇû.Àäðåñ = ÑÓÇû.Àäðåñ) AND (ÂÓÇû.[Íîìåð ÂÓÇà] = ÑÓÇû.[Íîìåð ÂÓÇà]) \n WHERE (((ÂÓÇû.Àäðåñ)='"+field+"') AND ((ÑÓÇû.Àäðåñ)='"+field+"'));";
	conn->Open();
	OleDbDataReader^ dataReader = command->ExecuteReader();
	while (dataReader->Read()){
    dataGridView6->Rows->Add(dataReader["ÂÓÇû.Íàçâàíèå"], dataReader["ÂÓÇû.Àäðåñ"],dataReader["ÑÓÇû.Íàçâàíèå"], dataReader["ÑÓÇû.Àäðåñ"]);
	} 
	dataReader->Close();
	conn->Close();*/