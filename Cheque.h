#pragma once
#include "MenuMarket.h"

#include "EditWindow.h"
#include "BaseMarket.h"
#include "ActionCLI.h"


namespace Market {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Cheque
	/// </summary>
	public ref class Cheque : public System::Windows::Forms::Form
	{
	public:
		Cheque(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		//Cheque(list* List__)
		//{
		//	ListCheque = List__;
		//}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Cheque()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: MarketClass^ market = gcnew MarketClass();
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	//private: list* ListCheque;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(193, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Cheque::textBox1_KeyPress);
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Cheque::textBox1_Validating);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(193, 174);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Cheque::textBox2_KeyPress);
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Cheque::textBox2_Validating);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(193, 245);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Cheque::textBox3_KeyPress);
			this->textBox3->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Cheque::textBox3_Validating);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(37, 106);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(37, 172);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 4;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(37, 243);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 24);
			this->comboBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(350, 105);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Cheque::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(350, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Cheque::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(350, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Добавить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Cheque::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(259, 330);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(152, 49);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Выписать чек";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Cheque::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(34, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(389, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Выберите товары для добавления в чек";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Наименование";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(190, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Количество";
			// 
			// Cheque
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 426);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Cheque";
			this->Text = L"Выписка чека";
			this->Load += gcnew System::EventHandler(this, &Cheque::Cheque_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*public:	void SetList(list* List)
		{
			ListCheque = List;
		}*/
private: System::Void Cheque_Load(System::Object^  sender, System::EventArgs^  e) 
{
	market->ReadBase();
	comboBox1->Items->Clear();
	comboBox2->Items->Clear();
	comboBox3->Items->Clear();

	List <Node^>^ BaseProduct = gcnew List <Node^>();

	for (int i = 0; i < market->CountList(); i++)
	{
		comboBox1->Items->Add(market->PrintAllBase(i));
		comboBox2->Items->Add(market->PrintAllBase(i));
		comboBox3->Items->Add(market->PrintAllBase(i));
	};
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	market->ReadBase();
	
	String^ Name;
	int Count;
	

	Name = comboBox1->Text;
	try 
	{
		Count = Int32::Parse(textBox1->Text);
	}
	catch (FormatException^)
	{
		MessageBox::Show("Неверный формат записи, введите цифры");
	}

	if (Name == "")
	{
		MessageBox::Show("Проверьте введенные данные!");
	}
	else
	{
		market->Cheque(Name, Count);

		MessageBox::Show("Записано!");
		market->WriteFileCheque();
	}
	
	textBox1->Clear();

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	market->ReadBase();

	String^ Name;
	int Count;


	Name = comboBox2->Text;
	try
	{
		Count = Int32::Parse(textBox2->Text);
	}
	catch (FormatException^)
	{
		MessageBox::Show("Неверный формат записи, введите цифры");
	}

	if (Name == "")
	{
		MessageBox::Show("Проверьте введенные данные!");
	}
	else
	{
		market->Cheque(Name, Count);

		MessageBox::Show("Записано!");
		market->WriteFileCheque();
	}
	
	textBox2->Clear();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	market->ReadBase();

	String^ Name;
	int Count;


	Name = comboBox3->Text;
	try
	{
		Count = Int32::Parse(textBox3->Text);
	}
	catch (FormatException^)
	{
		MessageBox::Show("Неверный формат записи, введите цифры");
	}
	if (Name == "")
	{
		MessageBox::Show("Проверьте введенные данные!");
	}
	else
	{
		market->Cheque(Name, Count);

		MessageBox::Show("Записано!");
		market->WriteFileCheque();
	}
	

	textBox3->Clear();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	market->ReadBase();
	market->NewCheque();
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{

	char number = e->KeyChar;

	if (Char::IsDigit(number))
	{
		e->Handled = false;
	}
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{

	char number = e->KeyChar;

	if (Char::IsDigit(number))
	{
		e->Handled = false;
	}
}

private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{

	char number = e->KeyChar;

	if (Char::IsDigit(number))
	{
		e->Handled = false;
	}
}
private: System::Void textBox1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox1->Text = System::Text::RegularExpressions::Regex::Replace(textBox1->Text, "[^0-9]", "");
}
private: System::Void textBox2_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox2->Text = System::Text::RegularExpressions::Regex::Replace(textBox2->Text, "[^0-9]", "");
}
private: System::Void textBox3_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox3->Text = System::Text::RegularExpressions::Regex::Replace(textBox3->Text, "[^0-9]", "");
}
};
}
