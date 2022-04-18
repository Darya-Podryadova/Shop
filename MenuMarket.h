#pragma once

#include "Cheque.h"
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
	using namespace System;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MenuMarket
	/// </summary>
	public ref class MenuMarket : public System::Windows::Forms::Form
	{
	public:
		MenuMarket(void)
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
		~MenuMarket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	//private: list* List;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(21, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Добрый день! Выберите действие";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(114, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 64);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выписать чек";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuMarket::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(114, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 64);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Редактировать базу данных";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuMarket::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(114, 224);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 64);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Открыть базу данных";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuMarket::button3_Click);
			// 
			// MenuMarket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 346);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MenuMarket";
			this->Text = L"Меню";
			this->Load += gcnew System::EventHandler(this, &MenuMarket::MenuMarket_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MenuMarket_Load(System::Object^  sender, System::EventArgs^  e)
	{
		/* List = new list();
		List->ReadBase();*/

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Cheque ^OpenCheque;
		OpenCheque = gcnew Cheque();
		//OpenCheque->SetList(List);
		OpenCheque -> Show();
		

	}


	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		EditWindow^ OpenEdit = gcnew EditWindow();
	//	OpenEdit->SetList(List);
		OpenEdit -> Show();

		
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		BaseMarket^ OpenBase = gcnew BaseMarket();
		//OpenBase->SetList(List);
		OpenBase->Show();
		
	}

};
}
