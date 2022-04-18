#pragma once
#include "MenuMarket.h"
#include "Cheque.h"
#include "EditWindow.h"
#include "ActionCLI.h"

namespace Market {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BaseMarket
	/// </summary>
	public ref class BaseMarket : public System::Windows::Forms::Form
	{
	public:
		BaseMarket(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		//BaseMarket(list* List__)
		//{
		//	ListBaseMarket = List__;
		//}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~BaseMarket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	//private: list* ListBaseMarket;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: MarketClass^ market = gcnew MarketClass();

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(53, 361);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать базу данных";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BaseMarket::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(463, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Поиск по названию";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BaseMarket::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 80);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(359, 260);
			this->listBox1->TabIndex = 2;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(463, 271);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(335, 36);
			this->listBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(463, 223);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &BaseMarket::textBox1_Validating);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(346, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Демонстрация базы данных и поиск";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(460, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введите название";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(642, 223);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &BaseMarket::textBox2_Validating);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(639, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Введите цену";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(642, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 43);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Поиск по цене";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &BaseMarket::button3_Click);
			// 
			// BaseMarket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 478);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"BaseMarket";
			this->Text = L"База данных";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		market->ReadBase();

		listBox1->Items->Clear();

		for (int i; i < market->CountList(); i++)
		{
			String^ line = market->BaseList(i);
			listBox1->Items->Add(line+"\n");
		}
		
	}


	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		market->ReadBase();
		String ^Name;
		int i;
		try
		{
		listBox2->Items->Clear();
		Name = textBox1->Text;
		String^ line = market->Search(Name);
		listBox2->Items->Add(line);
		}
		catch (ArgumentNullException^)
		{
			MessageBox::Show(" Не найдено!");
		}

	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	market->ReadBase();
	String ^Name;
	int i;

	try
	{
	listBox2->Items->Clear();
	Name = textBox2->Text;
	int x = Int32::Parse(Name);
	
	String^ line = market->Search(x);
	listBox2->Items->Add(line);
	}
	catch (FormatException^)
	{
		MessageBox::Show("Не найдено!");
	}

}
private: System::Void textBox1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox1->Text = System::Text::RegularExpressions::Regex::Replace(textBox1->Text, "[^a-zA-Zа-яА-я]", "");
}
private: System::Void textBox2_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox2->Text = System::Text::RegularExpressions::Regex::Replace(textBox2->Text, "[^0-9]", "");
}
};
}
