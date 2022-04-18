
#pragma once
#include "MenuMarket.h"
#include "ActionCLI.h"
#include <string>
#include <iostream>




namespace Market {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace Market;
	using namespace std;

	/// <summary>
	/// Сводка для EditWindow
	/// </summary>
	public ref class EditWindow : public System::Windows::Forms::Form
	{
	public:
		EditWindow(void)
		{
			InitializeComponent();
			
			//
			//TODO: добавьте код конструктора
			//
		}
		//EditWindow(list* List__)
		//{
		//	ListEditWindow = List__;
		//}



	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: MarketClass^ market = gcnew MarketClass();
	//private: list* ListEditWindow;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button3;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(115, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Добавить или удалить продукт";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Наименование продукта";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Единица измерения";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(170, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Цена единицы продукта";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 262);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Количество";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 334);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(171, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Дата последнего завоза";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(245, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Выберите наименование";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 27);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(248, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 35);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EditWindow::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(248, 117);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(31, 112);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 11;
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditWindow::textBox1_Validating);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(29, 157);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 12;
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditWindow::textBox2_Validating);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(29, 213);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 13;
			this->textBox3->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditWindow::textBox3_Validating);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(29, 282);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 14;
			this->textBox4->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditWindow::textBox4_Validating);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(29, 354);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 15;
			this->textBox5->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditWindow::textBox5_Validating);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Text files (*.txt) |*.txt ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(476, 354);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 25;
			this->textBox6->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditWindow::textBox6_Validating);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(476, 282);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 24;
			this->textBox7->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditWindow::textBox7_Validating);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(476, 213);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 23;
			this->textBox8->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditWindow::textBox8_Validating);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(476, 157);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 22;
			this->textBox9->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditWindow::textBox9_Validating);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(478, 112);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 21;
			this->textBox10->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditWindow::textBox10_Validating);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(473, 334);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(171, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Дата последнего завоза";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(473, 249);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 17);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Количество";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(473, 193);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(170, 17);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Цена единицы продукта";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(475, 137);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(141, 17);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Единица измерения";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(475, 92);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(171, 17);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Наименование продукта";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(476, 396);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 23);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Редактировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &EditWindow::button3_Click);
			// 
			// EditWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(707, 483);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EditWindow";
			this->Text = L"Редактировать";
			this->Load += gcnew System::EventHandler(this, &EditWindow::EditWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		market->ReadBase();
		String^ Name;
		String^ ProductType;
		int Cost;
		int Count;
		String^ LastDate;

		try
		{
		Name = textBox1->Text; 
		ProductType = textBox2->Text; 
		Cost = Int32::Parse(textBox3->Text);  
		Count = Int32::Parse(textBox4->Text); 
		LastDate = textBox5->Text;
		market->AddBase(Name, ProductType, Cost, Count, LastDate);

		MessageBox::Show("Записано!");
		market->WriteFileBase();
		}
		catch(FormatException^)
		{
			MessageBox::Show("Введите верные данные!");
		}

		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();

		//ListEditWindow->ReadFile();


	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	market->ReadBase();

	String^ del = comboBox1->Text;
	if (del == "")
	{
		MessageBox::Show("Выберите продукт!");
	}
	else
	{
		market->Delete(del);
		market->WriteFileBase();

		MessageBox::Show("Удалено!");
	}
	
	
}
private: System::Void EditWindow_Load(System::Object^  sender, System::EventArgs^  e) 
{
	market->ReadBase();
	comboBox1->Items->Clear();
	List <Node^>^ BaseProduct = gcnew List <Node^>();
	
	for (int i = 0; i < market->CountList(); i++)
	{
		comboBox1->Items->Add(market->PrintAllBase(i));
	};
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	market->ReadBase();
	String^ Name_;			Node^ Name;
	String^ ProductType_;	Node^ ProductType;
	String^ Cost_;			Node^ Cost;
	String^ Count_;			Node^ Count;
	String^ LastDate_;		Node^ LastDate;

	Name_ = textBox10->Text;
	ProductType_ = textBox9->Text;
	Cost_ = textBox8->Text;
	Count_ = textBox7->Text;
	LastDate_ = textBox6->Text;

	if ((ProductType_ != "") && (Cost_ == "") && (Count_ == "") && (LastDate_ == ""))
	{
		market->Edit(Name_, ProductType_, 2);
		MessageBox::Show("Отредактировано!");
	} 
	else if ((ProductType_ == "") && (Cost_ != "") && (Count_ == "") && (LastDate_ == ""))
	{
		market->Edit(Name_, Cost_, 3);
		MessageBox::Show("Отредактировано!");
	}
	else if ((ProductType_ == "") && (Cost_ == "") && (Count_ != "") && (LastDate_ == ""))
	{
		market->Edit(Name_, Count_, 4);
		MessageBox::Show("Отредактировано!");
	}
	else if ((ProductType_ == "") && (Cost_ == "") && (Count_ == "") && (LastDate_ != ""))
	{
		market->Edit(Name_, LastDate_, 5);
		MessageBox::Show("Отредактировано!");
	}
	else
	{
		MessageBox::Show("Введите верные данные!");
	}
	
	market->WriteFileBase();
	textBox10->Clear();
	textBox9->Clear();
	textBox8->Clear();
	textBox7->Clear();
	textBox6->Clear();
}
private: System::Void textBox1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox1->Text = System::Text::RegularExpressions::Regex::Replace(textBox1->Text, "[^a-zA-Zа-яА-Я]", "");

}
private: System::Void textBox2_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox2->Text = System::Text::RegularExpressions::Regex::Replace(textBox2->Text, "[^a-zA-Zа-яА-Я]", "");

}
private: System::Void textBox10_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox10->Text = System::Text::RegularExpressions::Regex::Replace(textBox10->Text, "[^a-zA-Zа-яА-Я]", "");

}

private: System::Void textBox9_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox9->Text = System::Text::RegularExpressions::Regex::Replace(textBox9->Text, "[^a-zA-Zа-яА-Я]", "");

}

private: System::Void textBox3_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox3->Text = System::Text::RegularExpressions::Regex::Replace(textBox3->Text, "[^0-9]", "");
}
private: System::Void textBox4_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox4->Text = System::Text::RegularExpressions::Regex::Replace(textBox4->Text, "[^0-9]", "");
}
private: System::Void textBox5_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox5->Text = System::Text::RegularExpressions::Regex::Replace(textBox5->Text, "[^0-9.0-9.0-9]", "");
}
private: System::Void textBox8_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox8->Text = System::Text::RegularExpressions::Regex::Replace(textBox8->Text, "[^0-9]", "");
}
private: System::Void textBox7_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox7->Text = System::Text::RegularExpressions::Regex::Replace(textBox7->Text, "[^0-9]", "");
}
private: System::Void textBox6_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	textBox6->Text = System::Text::RegularExpressions::Regex::Replace(textBox6->Text, "[^0-9.0-9.0-9]", "");
}
};
}
