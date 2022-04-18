#include "ActionCLI.h"

using namespace System;
using namespace System::IO;
using namespace Newtonsoft::Json;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;



void MarketClass::ReadBase()
{
	try
	{
		auto file = File::ReadAllText(".\Practice.json");
		BaseProd = JsonConvert::DeserializeObject<List<Node^>^>(file);
		
	}
	catch (Exception^)
	{
		MessageBox::Show("Error!");
	}

};
	
void MarketClass::AddBase(String^ _Name, String^ _ProductType, int _Cost, int _Count, String^ _LastDate)
{
	Node^ Position = gcnew Node();

	//Считывание данных
	Position->Name = _Name;
	Position->ProductType = _ProductType;
	Position->Cost = _Cost;
	Position->Count = _Count;
	Position->LastDate = _LastDate;

	//Запись в список
	BaseProd->Add(Position);

};
void MarketClass::Delete(String^ _Name)
{
	int k;
	for (int i = 0; i < BaseProd->Count; i++)
	{
		if (BaseProd[i]->Name == _Name)
		{
			k = i;
		}
	}
	BaseProd->RemoveAt(k);

};
void MarketClass::Cheque(String^ _Name,  int _Count)
{
	ChequeNode^ PositionCheque = gcnew ChequeNode();

	PositionCheque->Name = _Name;
	
	PositionCheque->Count = _Count;

	BaseCheque->Add(PositionCheque);
};

String^ MarketClass::Search(String^ _Name)
{

	for (int i = 0; i < BaseProd->Count; i++)
	{
		List<Node^>^ Baseprod;
		if (BaseProd[i]->Name == _Name)
		{
			String^ CostP = Convert::ToString(BaseProd[i]->Cost);
			String^ CountP = Convert::ToString(BaseProd[i]->Count);

			//Вывод нужного узла в виде строки
			String^ line = BaseProd[i]->Name + " " + BaseProd[i]->ProductType + " " +
				CostP + " " + CountP + " " + BaseProd[i]->LastDate;
			return line ;
		}
	}
};
String^ MarketClass::Search(int _Cost)
{
	
	for (int i = 0; i < BaseProd->Count; i++)
	{
		if (BaseProd[i]->Cost == _Cost)
		{
			String^ CostP = Convert::ToString(BaseProd[i]->Cost);
			String^ CountP = Convert::ToString(BaseProd[i]->Count);

			//Вывод нужного узла в виде строки
			String^ line = BaseProd[i]->Name + " " + BaseProd[i]->ProductType + " " +
				CostP + " " + CountP + " " + BaseProd[i]->LastDate;
			return line;
		}
	}
	
};
int MarketClass::CountList()
{
	return BaseProd->Count;
};

void MarketClass::WriteFileBase()
{
	auto BaseFile = JsonConvert::SerializeObject(BaseProd);
	File::WriteAllText(".\Practice.json", BaseFile);
};
void MarketClass::WriteFileCheque()
{
	auto BaseFileCheque = JsonConvert::SerializeObject(BaseCheque);
	File::WriteAllText(".\Cheque.json", BaseFileCheque);
};
void MarketClass::Edit(String^ _Name, String^ NewItem, int item)
{

	Node^ Name;//1
	Node^ ProductType;//2
	Node^ Cost;//3
	Node^ Count;//4
	Node^ LastDate;//5
	int k;
	//Поиск индекса нужного узла
	for (int i = 0; i < BaseProd->Count; i++)
	{
		if (BaseProd[i]->Name == _Name)
		{
			k = i;
		}
	}

	//В зависимости от значения, находится элемент по индексу, 
	//которому присваивается новое значение
	if (item == 1)
	{
		BaseProd[k]->Name = NewItem;
	}
	else if (item == 2)
	{
		BaseProd[k]->ProductType = NewItem;
	}
	else if (item == 3)
	{
		int x = Int32::Parse(NewItem);
		BaseProd[k]->Cost = x;
	}
	else if (item == 4)
	{
		int x = Int32::Parse(NewItem);
		BaseProd[k]->Count = x;
	}
	else if (item == 5)
	{
		BaseProd[k]->LastDate = NewItem;
	}
};
String^ MarketClass::PrintAllBase(int k)
{
	
	String^ line;
	return BaseProd[k]->Name;

}
void MarketClass::NewCheque()
{
	File::WriteAllText("\Practice.txt", "");
	String^ line;
	double itog;
	for (int i = 0; i < BaseCheque->Count; i++)
	{
		int CostP;
	//	List<Node^>^ Baseprod;
		for (int j = 0; j < BaseProd->Count; j++)
		{
			if (BaseProd[j]->Name == BaseCheque[i]->Name)
			{
				 CostP = BaseProd[j]->Cost;
			}
		}

			
			String^ CountP = Convert::ToString(BaseProd[i]->Count);
			double sum = (BaseCheque[i]->Count)*CostP;
			itog += sum;
			String^ Sum = Convert::ToString(sum);
			
			

			String^ line = BaseCheque[i]->Name +  " " + BaseCheque[i]->Count + " " + Sum+ "руб";
			File::AppendAllText("\Practice.txt", line+"\n");

	}
	
	String^ Itog = Convert::ToString(itog);
	MessageBox::Show("Чек готов!");
	File::AppendAllText("\Practice.txt",  "          Итого:"+Itog+" руб");

}
String^ MarketClass::BaseList(int k)
{
	
		List<Node^>^ Baseprod;

			String^ CostP = Convert::ToString(BaseProd[k]->Cost);
			String^ CountP = Convert::ToString(BaseProd[k]->Count);


			String^ line = BaseProd[k]->Name + " " + BaseProd[k]->ProductType + " " +
				CostP + " " + CountP + " " + BaseProd[k]->LastDate;
			return line;
		
	
}