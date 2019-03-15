#include "stdafx.h"
#using <System.dll>
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Net;
using namespace System::Net::Mail;
using namespace System::Net::Mime;
using namespace System::Threading;
using namespace System::ComponentModel;


namespace SeePage {

	/// <summary>
	/// Сводка для MailSend
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class MailSend : public System::Windows::Forms::Form
	{
	public:
		MailSend(void)
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
		~MailSend()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox1;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MailSend::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 90);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(490, 130);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(222, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Отправить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MailSend::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Номер ошибки:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(233, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Заголовок:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(434, 74);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Сообщение";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Версия:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(157, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(303, 52);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(199, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(402, 20);
			this->textBox1->TabIndex = 4;
			// 
			// MailSend
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 261);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(530, 300);
			this->MinimumSize = System::Drawing::Size(530, 300);
			this->Name = L"MailSend";
			this->Text = L"Сообщить об ошибке";
			this->Load += gcnew System::EventHandler(this, &MailSend::MailSend_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

            MailMessage ^message = gcnew MailMessage(); // создание нового письма
            message -> To -> Add("seepagesup@mail.ru"); // добавление адреса получателя
            message -> From = gcnew MailAddress("seepagesup@mail.ru"); // указание имени и адреса отправителя
            message -> Subject = textBox3->Text; // указание темы письма 
			message -> BodyEncoding = System::Text::Encoding::UTF8; // указание кодировки письма
            message -> IsBodyHtml = false; // указание формата письма (true - HTML, false - не HTML)
			message -> Body = "Ошибка: "+textBox1->Text+"\nВерсия программы: "+textBox2->Text+"\nСообщение: \n"+richTextBox1->Text; // указание текста (тела) письма

            SmtpClient ^client = gcnew SmtpClient("smtp.mail.ru", 587); // создание нового подключения к серверу "smtp.domain.tld"
			client -> DeliveryMethod = SmtpDeliveryMethod::Network; // определяет метод отправки сообщений
            client -> EnableSsl = true; // отключает необходимость использования защищенного соединения с сервером
            client -> UseDefaultCredentials = false; // отключение использования реквизитов авторизации "по-умолчанию"
            client -> Credentials = gcnew NetworkCredential("seepagesup@mail.ru", "9231imp"); // указание нужных реквизитов (имени пользователя и пароля) для авторизации на SMTP-сервере
            client -> Send(message); // отправка сообщения

					 MessageBox::Show("Сообщение отправлено. Благодарим за вашу поддержку!");	
				 richTextBox1->Text = "";
					 this->Close();

			 }
	private: System::Void MailSend_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
