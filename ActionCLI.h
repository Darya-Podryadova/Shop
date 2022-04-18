#pragma once
//#ifndef ACTIONCLI_CPP
//#define ACTIONCLI_CPP


using namespace System;
using namespace System::IO;
using namespace Newtonsoft::Json;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref struct Node
{
	String^ Name;
	String^ ProductType;
	int Cost;
	int Count;
	String^ LastDate;
	Node^ next;

};

ref struct ChequeNode
{
	String^ Name;
	int Count;
	ChequeNode^ next;


};

ref class MarketClass
{
public:
	
	void NewCheque();
	void ReadBase();
	void AddBase(String^ _Name, String^ _ProductType, int _Cost, int _Count, String^ _LastDate);
	void Delete(String^ _Name);
	void Cheque(String^ _Name, int _Count);
	String^ Search(String^ _Name);
	String^ Search(int _Cost);
	void WriteFileBase();
	void WriteFileCheque();
	void Edit(String^ _Name, String^ NewItem, int item);
	int CountList();
	String^ PrintAllBase(int k);
	String^ BaseList(int k);

private:
	List <Node^>^ BaseProd = gcnew List <Node^>();
	List <ChequeNode^>^ BaseCheque = gcnew List<ChequeNode^>();
};








//#endif