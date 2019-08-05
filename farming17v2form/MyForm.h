#pragma once
#include "Classes.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include <cmath>
#include <iostream>
using namespace std;

//instances
Vars vars;
int a = 0;
Txcards txcard(a);
Cards c0(txcard.getcnum(0), txcard.gettarray(0), txcard.getmarray(0), txcard.gettxo0(0), txcard.gettxo0(1), txcard.gettxo0(2), txcard.gettxo0(3));
Cards c1(txcard.getcnum(1), txcard.gettarray(1), txcard.getmarray(1), txcard.gettxo1(0), txcard.gettxo1(1), txcard.gettxo1(2), txcard.gettxo1(3));
Cards c2(txcard.getcnum(2), txcard.gettarray(2), txcard.getmarray(2), txcard.gettxo2(0), txcard.gettxo2(1));
vector <Cards> cset{ c0,c1,c2 };
vector <Players> iset{};

namespace farming17v2form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Reset();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  txpnum;
	private: System::Windows::Forms::ProgressBar^  pbar;
	protected:

	private: System::Windows::Forms::ComboBox^  Pnum;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  txpbar;

	private: System::Windows::Forms::TextBox^  txp1name;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  txp1cows;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  txp1m;
	private: System::Windows::Forms::Label^  txp1wheat;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  txp1ewes;
	private: System::Windows::Forms::Label^  txp1sows;
	private: System::Windows::Forms::Label^  txp1horses;
	private: System::Windows::Forms::Label^  txp1hc;
	private: System::Windows::Forms::Label^  txp1bc;
	private: System::Windows::Forms::Label^  txp1lambs;
	private: System::Windows::Forms::Label^  txp1sp;
	private: System::Windows::Forms::Label^  txp1barley;
	private: System::Windows::Forms::Label^  txp1oates;
	private: System::Windows::Forms::Label^  txp1potatoes;
	private: System::Windows::Forms::Label^  txp1roots;
	private: System::Windows::Forms::Label^  txp1hay;
	private: System::Windows::Forms::Label^  txp1pasture;
	private: System::Windows::Forms::Label^  txp1ley;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  txp2ley;

	private: System::Windows::Forms::Label^  txp2pasture;

	private: System::Windows::Forms::Label^  txp2hay;

	private: System::Windows::Forms::Label^  txp2roots;

	private: System::Windows::Forms::Label^  txp2potatoes;

	private: System::Windows::Forms::Label^  txp2oates;

	private: System::Windows::Forms::Label^  txp2barley;

	private: System::Windows::Forms::Label^  txp2sp;

	private: System::Windows::Forms::Label^  txp2lambs;

	private: System::Windows::Forms::Label^  txp2bc;

	private: System::Windows::Forms::Label^  txp2hc;

	private: System::Windows::Forms::Label^  txp2horses;

	private: System::Windows::Forms::Label^  txp2sows;

	private: System::Windows::Forms::Label^  txp2ewes;

	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  txp2wheat;

	private: System::Windows::Forms::Label^  txp2m;

	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  txp2cows;

	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::TextBox^  txp2name;

	private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Label^  txp3ley;

private: System::Windows::Forms::Label^  txp3pasture;

private: System::Windows::Forms::Label^  txp3hay;

private: System::Windows::Forms::Label^  txp3roots;

private: System::Windows::Forms::Label^  txp3potatoes;

private: System::Windows::Forms::Label^  txp3oates;

private: System::Windows::Forms::Label^  txp3barley;

private: System::Windows::Forms::Label^  txp3sp;

private: System::Windows::Forms::Label^  txp3lambs;

private: System::Windows::Forms::Label^  txp3bc;

private: System::Windows::Forms::Label^  txp3hc;

private: System::Windows::Forms::Label^  txp3horses;

private: System::Windows::Forms::Label^  txp3sows;

private: System::Windows::Forms::Label^  txp3ewes;

	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  txp3wheat;

private: System::Windows::Forms::Label^  txp3m;

	private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  txp3cows;

	private: System::Windows::Forms::Label^  label84;
	private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::TextBox^  txp3name;

	private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Label^  txp4ley;

private: System::Windows::Forms::Label^  txp4pasture;

private: System::Windows::Forms::Label^  txp4hay;

private: System::Windows::Forms::Label^  txp4roots;

private: System::Windows::Forms::Label^  txp4potatoes;

private: System::Windows::Forms::Label^  txp4oates;

private: System::Windows::Forms::Label^  txp4barley;

private: System::Windows::Forms::Label^  txp4sp;

private: System::Windows::Forms::Label^  txp4lambs;

private: System::Windows::Forms::Label^  txp4bc;

private: System::Windows::Forms::Label^  txp4hc;

private: System::Windows::Forms::Label^  txp4horses;

private: System::Windows::Forms::Label^  txp4sows;

private: System::Windows::Forms::Label^  txp4ewes;

	private: System::Windows::Forms::Label^  label100;
	private: System::Windows::Forms::Label^  label101;
	private: System::Windows::Forms::Label^  label102;
	private: System::Windows::Forms::Label^  label103;
	private: System::Windows::Forms::Label^  label104;
	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::Label^  label107;
	private: System::Windows::Forms::Label^  label108;
	private: System::Windows::Forms::Label^  label109;
	private: System::Windows::Forms::Label^  label110;
	private: System::Windows::Forms::Label^  label111;
	private: System::Windows::Forms::Label^  label112;
	private: System::Windows::Forms::Label^  label113;
private: System::Windows::Forms::Label^  txp4wheat;

private: System::Windows::Forms::Label^  txp4m;

	private: System::Windows::Forms::Label^  label116;
private: System::Windows::Forms::Label^  txp4cows;

	private: System::Windows::Forms::Label^  label118;
	private: System::Windows::Forms::Label^  label119;
private: System::Windows::Forms::TextBox^  txp4name;

	private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  txp5ley;

private: System::Windows::Forms::Label^  txp5pasture;

private: System::Windows::Forms::Label^  txp5hay;

private: System::Windows::Forms::Label^  txp5roots;

private: System::Windows::Forms::Label^  txp5potatoes;

private: System::Windows::Forms::Label^  txp5oates;

private: System::Windows::Forms::Label^  txp5barley;

private: System::Windows::Forms::Label^  txp5sp;

private: System::Windows::Forms::Label^  txp5lambs;

private: System::Windows::Forms::Label^  txp5bc;

private: System::Windows::Forms::Label^  txp5hc;

private: System::Windows::Forms::Label^  txp5horses;

private: System::Windows::Forms::Label^  txp5sows;

private: System::Windows::Forms::Label^  txp5ewes;

	private: System::Windows::Forms::Label^  label134;
	private: System::Windows::Forms::Label^  label135;
	private: System::Windows::Forms::Label^  label136;
	private: System::Windows::Forms::Label^  label137;
	private: System::Windows::Forms::Label^  label138;
	private: System::Windows::Forms::Label^  label139;
	private: System::Windows::Forms::Label^  label140;
	private: System::Windows::Forms::Label^  label141;
	private: System::Windows::Forms::Label^  label142;
	private: System::Windows::Forms::Label^  label143;
	private: System::Windows::Forms::Label^  label144;
	private: System::Windows::Forms::Label^  label145;
	private: System::Windows::Forms::Label^  label146;
	private: System::Windows::Forms::Label^  label147;
private: System::Windows::Forms::Label^  txp5wheat;

private: System::Windows::Forms::Label^  txp5m;

	private: System::Windows::Forms::Label^  label150;
private: System::Windows::Forms::Label^  txp5cows;

	private: System::Windows::Forms::Label^  label152;
	private: System::Windows::Forms::Label^  label153;
private: System::Windows::Forms::TextBox^  txp5name;

	private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Label^  txnum;
private: System::Windows::Forms::Label^  txf;
private: System::Windows::Forms::TextBox^  txtitle;
private: System::Windows::Forms::RichTextBox^  txmain;
private: System::Windows::Forms::RichTextBox^  txoutput;
private: System::Windows::Forms::NumericUpDown^  op1txvalue;
private: System::Windows::Forms::CheckBox^  op1cb;



private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::CheckBox^  op2cb;

private: System::Windows::Forms::NumericUpDown^  op2txvalue;
private: System::Windows::Forms::CheckBox^  op3cb;


private: System::Windows::Forms::NumericUpDown^  op3txvalue;

private: System::Windows::Forms::Button^  Btnpnum;
private: System::Windows::Forms::Label^  label154;
private: System::Windows::Forms::Button^  Btnnext;
private: System::Windows::Forms::Button^  Btnadv;
private: System::Windows::Forms::Button^  Btnreset;
private: System::Windows::Forms::Button^  Btndroll;
private: System::Windows::Forms::Label^  txdroll;
private: System::Windows::Forms::Label^  label156;
private: System::Windows::Forms::ComboBox^  Dbox;
private: System::Windows::Forms::Button^  Btndselect;

private: System::Windows::Forms::CheckBox^  op4cb;

private: System::Windows::Forms::NumericUpDown^  op6txvalue;
private: System::Windows::Forms::CheckBox^  op5cb;


private: System::Windows::Forms::NumericUpDown^  op5txvalue;
private: System::Windows::Forms::CheckBox^  op6cb;


private: System::Windows::Forms::NumericUpDown^  op4txvalue;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txpnum = (gcnew System::Windows::Forms::Label());
			this->pbar = (gcnew System::Windows::Forms::ProgressBar());
			this->Pnum = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txpbar = (gcnew System::Windows::Forms::Label());
			this->txp1name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txp1cows = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txp1m = (gcnew System::Windows::Forms::Label());
			this->txp1wheat = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txp1ewes = (gcnew System::Windows::Forms::Label());
			this->txp1sows = (gcnew System::Windows::Forms::Label());
			this->txp1horses = (gcnew System::Windows::Forms::Label());
			this->txp1hc = (gcnew System::Windows::Forms::Label());
			this->txp1bc = (gcnew System::Windows::Forms::Label());
			this->txp1lambs = (gcnew System::Windows::Forms::Label());
			this->txp1sp = (gcnew System::Windows::Forms::Label());
			this->txp1barley = (gcnew System::Windows::Forms::Label());
			this->txp1oates = (gcnew System::Windows::Forms::Label());
			this->txp1potatoes = (gcnew System::Windows::Forms::Label());
			this->txp1roots = (gcnew System::Windows::Forms::Label());
			this->txp1hay = (gcnew System::Windows::Forms::Label());
			this->txp1pasture = (gcnew System::Windows::Forms::Label());
			this->txp1ley = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txp2ley = (gcnew System::Windows::Forms::Label());
			this->txp2pasture = (gcnew System::Windows::Forms::Label());
			this->txp2hay = (gcnew System::Windows::Forms::Label());
			this->txp2roots = (gcnew System::Windows::Forms::Label());
			this->txp2potatoes = (gcnew System::Windows::Forms::Label());
			this->txp2oates = (gcnew System::Windows::Forms::Label());
			this->txp2barley = (gcnew System::Windows::Forms::Label());
			this->txp2sp = (gcnew System::Windows::Forms::Label());
			this->txp2lambs = (gcnew System::Windows::Forms::Label());
			this->txp2bc = (gcnew System::Windows::Forms::Label());
			this->txp2hc = (gcnew System::Windows::Forms::Label());
			this->txp2horses = (gcnew System::Windows::Forms::Label());
			this->txp2sows = (gcnew System::Windows::Forms::Label());
			this->txp2ewes = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->txp2wheat = (gcnew System::Windows::Forms::Label());
			this->txp2m = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->txp2cows = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->txp2name = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txp3ley = (gcnew System::Windows::Forms::Label());
			this->txp3pasture = (gcnew System::Windows::Forms::Label());
			this->txp3hay = (gcnew System::Windows::Forms::Label());
			this->txp3roots = (gcnew System::Windows::Forms::Label());
			this->txp3potatoes = (gcnew System::Windows::Forms::Label());
			this->txp3oates = (gcnew System::Windows::Forms::Label());
			this->txp3barley = (gcnew System::Windows::Forms::Label());
			this->txp3sp = (gcnew System::Windows::Forms::Label());
			this->txp3lambs = (gcnew System::Windows::Forms::Label());
			this->txp3bc = (gcnew System::Windows::Forms::Label());
			this->txp3hc = (gcnew System::Windows::Forms::Label());
			this->txp3horses = (gcnew System::Windows::Forms::Label());
			this->txp3sows = (gcnew System::Windows::Forms::Label());
			this->txp3ewes = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->txp3wheat = (gcnew System::Windows::Forms::Label());
			this->txp3m = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->txp3cows = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->txp3name = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txp4ley = (gcnew System::Windows::Forms::Label());
			this->txp4pasture = (gcnew System::Windows::Forms::Label());
			this->txp4hay = (gcnew System::Windows::Forms::Label());
			this->txp4roots = (gcnew System::Windows::Forms::Label());
			this->txp4potatoes = (gcnew System::Windows::Forms::Label());
			this->txp4oates = (gcnew System::Windows::Forms::Label());
			this->txp4barley = (gcnew System::Windows::Forms::Label());
			this->txp4sp = (gcnew System::Windows::Forms::Label());
			this->txp4lambs = (gcnew System::Windows::Forms::Label());
			this->txp4bc = (gcnew System::Windows::Forms::Label());
			this->txp4hc = (gcnew System::Windows::Forms::Label());
			this->txp4horses = (gcnew System::Windows::Forms::Label());
			this->txp4sows = (gcnew System::Windows::Forms::Label());
			this->txp4ewes = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->txp4wheat = (gcnew System::Windows::Forms::Label());
			this->txp4m = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->txp4cows = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->txp4name = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->txp5ley = (gcnew System::Windows::Forms::Label());
			this->txp5pasture = (gcnew System::Windows::Forms::Label());
			this->txp5hay = (gcnew System::Windows::Forms::Label());
			this->txp5roots = (gcnew System::Windows::Forms::Label());
			this->txp5potatoes = (gcnew System::Windows::Forms::Label());
			this->txp5oates = (gcnew System::Windows::Forms::Label());
			this->txp5barley = (gcnew System::Windows::Forms::Label());
			this->txp5sp = (gcnew System::Windows::Forms::Label());
			this->txp5lambs = (gcnew System::Windows::Forms::Label());
			this->txp5bc = (gcnew System::Windows::Forms::Label());
			this->txp5hc = (gcnew System::Windows::Forms::Label());
			this->txp5horses = (gcnew System::Windows::Forms::Label());
			this->txp5sows = (gcnew System::Windows::Forms::Label());
			this->txp5ewes = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->txp5wheat = (gcnew System::Windows::Forms::Label());
			this->txp5m = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->txp5cows = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->txp5name = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->txnum = (gcnew System::Windows::Forms::Label());
			this->txf = (gcnew System::Windows::Forms::Label());
			this->txtitle = (gcnew System::Windows::Forms::TextBox());
			this->txmain = (gcnew System::Windows::Forms::RichTextBox());
			this->txoutput = (gcnew System::Windows::Forms::RichTextBox());
			this->op1txvalue = (gcnew System::Windows::Forms::NumericUpDown());
			this->op1cb = (gcnew System::Windows::Forms::CheckBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->op2cb = (gcnew System::Windows::Forms::CheckBox());
			this->op2txvalue = (gcnew System::Windows::Forms::NumericUpDown());
			this->op3cb = (gcnew System::Windows::Forms::CheckBox());
			this->op3txvalue = (gcnew System::Windows::Forms::NumericUpDown());
			this->Btnpnum = (gcnew System::Windows::Forms::Button());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->Btnnext = (gcnew System::Windows::Forms::Button());
			this->Btnadv = (gcnew System::Windows::Forms::Button());
			this->Btnreset = (gcnew System::Windows::Forms::Button());
			this->Btndroll = (gcnew System::Windows::Forms::Button());
			this->txdroll = (gcnew System::Windows::Forms::Label());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->Dbox = (gcnew System::Windows::Forms::ComboBox());
			this->Btndselect = (gcnew System::Windows::Forms::Button());
			this->op4cb = (gcnew System::Windows::Forms::CheckBox());
			this->op6txvalue = (gcnew System::Windows::Forms::NumericUpDown());
			this->op5cb = (gcnew System::Windows::Forms::CheckBox());
			this->op5txvalue = (gcnew System::Windows::Forms::NumericUpDown());
			this->op6cb = (gcnew System::Windows::Forms::CheckBox());
			this->op4txvalue = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op1txvalue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op2txvalue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op3txvalue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op6txvalue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op5txvalue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op4txvalue))->BeginInit();
			this->SuspendLayout();
			// 
			// txpnum
			// 
			this->txpnum->AutoSize = true;
			this->txpnum->Location = System::Drawing::Point(12, 9);
			this->txpnum->Name = L"txpnum";
			this->txpnum->Size = System::Drawing::Size(93, 13);
			this->txpnum->TabIndex = 0;
			this->txpnum->Text = L"Number of Players";
			// 
			// pbar
			// 
			this->pbar->Location = System::Drawing::Point(737, 12);
			this->pbar->Name = L"pbar";
			this->pbar->Size = System::Drawing::Size(100, 23);
			this->pbar->TabIndex = 1;
			// 
			// Pnum
			// 
			this->Pnum->FormattingEnabled = true;
			this->Pnum->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->Pnum->Location = System::Drawing::Point(35, 25);
			this->Pnum->Name = L"Pnum";
			this->Pnum->Size = System::Drawing::Size(46, 21);
			this->Pnum->TabIndex = 2;
			this->Pnum->Text = L"2";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(111, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(620, 100);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// txpbar
			// 
			this->txpbar->AutoSize = true;
			this->txpbar->Location = System::Drawing::Point(765, 38);
			this->txpbar->Name = L"txpbar";
			this->txpbar->Size = System::Drawing::Size(48, 13);
			this->txpbar->TabIndex = 4;
			this->txpbar->Text = L"Progress";
			// 
			// txp1name
			// 
			this->txp1name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txp1name->Location = System::Drawing::Point(12, 115);
			this->txp1name->Name = L"txp1name";
			this->txp1name->Size = System::Drawing::Size(100, 26);
			this->txp1name->TabIndex = 5;
			this->txp1name->Text = L"Player 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(12, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Cows:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(118, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Money: £";
			// 
			// txp1cows
			// 
			this->txp1cows->AutoSize = true;
			this->txp1cows->BackColor = System::Drawing::Color::Red;
			this->txp1cows->Location = System::Drawing::Point(93, 144);
			this->txp1cows->Name = L"txp1cows";
			this->txp1cows->Size = System::Drawing::Size(19, 13);
			this->txp1cows->TabIndex = 8;
			this->txp1cows->Text = L"55";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(118, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Wheat:";
			// 
			// txp1m
			// 
			this->txp1m->AutoSize = true;
			this->txp1m->BackColor = System::Drawing::Color::Red;
			this->txp1m->Location = System::Drawing::Point(175, 128);
			this->txp1m->Name = L"txp1m";
			this->txp1m->Size = System::Drawing::Size(37, 13);
			this->txp1m->TabIndex = 10;
			this->txp1m->Text = L"15000";
			// 
			// txp1wheat
			// 
			this->txp1wheat->AutoSize = true;
			this->txp1wheat->BackColor = System::Drawing::Color::Red;
			this->txp1wheat->Location = System::Drawing::Point(175, 144);
			this->txp1wheat->Name = L"txp1wheat";
			this->txp1wheat->Size = System::Drawing::Size(19, 13);
			this->txp1wheat->TabIndex = 11;
			this->txp1wheat->Text = L"55";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(12, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Ewes:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(12, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Sows:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(12, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Horses:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(12, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Heifer Calves:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(12, 209);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Bull Calves:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(12, 222);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Lambs:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(12, 235);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Store Pigs:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(118, 157);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Barley:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(118, 170);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(38, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Oates:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(118, 183);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Potatoes:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(118, 196);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Roots:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(118, 209);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Hay:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(118, 222);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(46, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Pasture:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(118, 235);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 13);
			this->label17->TabIndex = 25;
			this->label17->Text = L"Ley:";
			// 
			// txp1ewes
			// 
			this->txp1ewes->AutoSize = true;
			this->txp1ewes->BackColor = System::Drawing::Color::Red;
			this->txp1ewes->Location = System::Drawing::Point(93, 157);
			this->txp1ewes->Name = L"txp1ewes";
			this->txp1ewes->Size = System::Drawing::Size(19, 13);
			this->txp1ewes->TabIndex = 26;
			this->txp1ewes->Text = L"55";
			// 
			// txp1sows
			// 
			this->txp1sows->AutoSize = true;
			this->txp1sows->BackColor = System::Drawing::Color::Red;
			this->txp1sows->Location = System::Drawing::Point(93, 170);
			this->txp1sows->Name = L"txp1sows";
			this->txp1sows->Size = System::Drawing::Size(19, 13);
			this->txp1sows->TabIndex = 27;
			this->txp1sows->Text = L"55";
			// 
			// txp1horses
			// 
			this->txp1horses->AutoSize = true;
			this->txp1horses->BackColor = System::Drawing::Color::Red;
			this->txp1horses->Location = System::Drawing::Point(93, 183);
			this->txp1horses->Name = L"txp1horses";
			this->txp1horses->Size = System::Drawing::Size(19, 13);
			this->txp1horses->TabIndex = 28;
			this->txp1horses->Text = L"55";
			// 
			// txp1hc
			// 
			this->txp1hc->AutoSize = true;
			this->txp1hc->BackColor = System::Drawing::Color::Red;
			this->txp1hc->Location = System::Drawing::Point(93, 196);
			this->txp1hc->Name = L"txp1hc";
			this->txp1hc->Size = System::Drawing::Size(19, 13);
			this->txp1hc->TabIndex = 29;
			this->txp1hc->Text = L"55";
			// 
			// txp1bc
			// 
			this->txp1bc->AutoSize = true;
			this->txp1bc->BackColor = System::Drawing::Color::Red;
			this->txp1bc->Location = System::Drawing::Point(93, 209);
			this->txp1bc->Name = L"txp1bc";
			this->txp1bc->Size = System::Drawing::Size(19, 13);
			this->txp1bc->TabIndex = 30;
			this->txp1bc->Text = L"55";
			// 
			// txp1lambs
			// 
			this->txp1lambs->AutoSize = true;
			this->txp1lambs->BackColor = System::Drawing::Color::Red;
			this->txp1lambs->Location = System::Drawing::Point(93, 222);
			this->txp1lambs->Name = L"txp1lambs";
			this->txp1lambs->Size = System::Drawing::Size(19, 13);
			this->txp1lambs->TabIndex = 31;
			this->txp1lambs->Text = L"55";
			// 
			// txp1sp
			// 
			this->txp1sp->AutoSize = true;
			this->txp1sp->BackColor = System::Drawing::Color::Red;
			this->txp1sp->Location = System::Drawing::Point(93, 235);
			this->txp1sp->Name = L"txp1sp";
			this->txp1sp->Size = System::Drawing::Size(19, 13);
			this->txp1sp->TabIndex = 32;
			this->txp1sp->Text = L"55";
			// 
			// txp1barley
			// 
			this->txp1barley->AutoSize = true;
			this->txp1barley->BackColor = System::Drawing::Color::Red;
			this->txp1barley->Location = System::Drawing::Point(175, 157);
			this->txp1barley->Name = L"txp1barley";
			this->txp1barley->Size = System::Drawing::Size(19, 13);
			this->txp1barley->TabIndex = 33;
			this->txp1barley->Text = L"55";
			// 
			// txp1oates
			// 
			this->txp1oates->AutoSize = true;
			this->txp1oates->BackColor = System::Drawing::Color::Red;
			this->txp1oates->Location = System::Drawing::Point(175, 170);
			this->txp1oates->Name = L"txp1oates";
			this->txp1oates->Size = System::Drawing::Size(19, 13);
			this->txp1oates->TabIndex = 34;
			this->txp1oates->Text = L"55";
			// 
			// txp1potatoes
			// 
			this->txp1potatoes->AutoSize = true;
			this->txp1potatoes->BackColor = System::Drawing::Color::Red;
			this->txp1potatoes->Location = System::Drawing::Point(175, 183);
			this->txp1potatoes->Name = L"txp1potatoes";
			this->txp1potatoes->Size = System::Drawing::Size(19, 13);
			this->txp1potatoes->TabIndex = 35;
			this->txp1potatoes->Text = L"55";
			// 
			// txp1roots
			// 
			this->txp1roots->AutoSize = true;
			this->txp1roots->BackColor = System::Drawing::Color::Red;
			this->txp1roots->Location = System::Drawing::Point(175, 196);
			this->txp1roots->Name = L"txp1roots";
			this->txp1roots->Size = System::Drawing::Size(19, 13);
			this->txp1roots->TabIndex = 36;
			this->txp1roots->Text = L"55";
			// 
			// txp1hay
			// 
			this->txp1hay->AutoSize = true;
			this->txp1hay->BackColor = System::Drawing::Color::Red;
			this->txp1hay->Location = System::Drawing::Point(175, 209);
			this->txp1hay->Name = L"txp1hay";
			this->txp1hay->Size = System::Drawing::Size(19, 13);
			this->txp1hay->TabIndex = 37;
			this->txp1hay->Text = L"55";
			// 
			// txp1pasture
			// 
			this->txp1pasture->AutoSize = true;
			this->txp1pasture->BackColor = System::Drawing::Color::Red;
			this->txp1pasture->Location = System::Drawing::Point(175, 222);
			this->txp1pasture->Name = L"txp1pasture";
			this->txp1pasture->Size = System::Drawing::Size(19, 13);
			this->txp1pasture->TabIndex = 38;
			this->txp1pasture->Text = L"55";
			// 
			// txp1ley
			// 
			this->txp1ley->AutoSize = true;
			this->txp1ley->BackColor = System::Drawing::Color::Red;
			this->txp1ley->Location = System::Drawing::Point(175, 235);
			this->txp1ley->Name = L"txp1ley";
			this->txp1ley->Size = System::Drawing::Size(19, 13);
			this->txp1ley->TabIndex = 39;
			this->txp1ley->Text = L"55";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Red;
			this->panel1->Location = System::Drawing::Point(12, 115);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 137);
			this->panel1->TabIndex = 40;
			// 
			// txp2ley
			// 
			this->txp2ley->AutoSize = true;
			this->txp2ley->BackColor = System::Drawing::Color::Green;
			this->txp2ley->Location = System::Drawing::Point(799, 235);
			this->txp2ley->Name = L"txp2ley";
			this->txp2ley->Size = System::Drawing::Size(19, 13);
			this->txp2ley->TabIndex = 75;
			this->txp2ley->Text = L"55";
			// 
			// txp2pasture
			// 
			this->txp2pasture->AutoSize = true;
			this->txp2pasture->BackColor = System::Drawing::Color::Green;
			this->txp2pasture->Location = System::Drawing::Point(799, 222);
			this->txp2pasture->Name = L"txp2pasture";
			this->txp2pasture->Size = System::Drawing::Size(19, 13);
			this->txp2pasture->TabIndex = 74;
			this->txp2pasture->Text = L"55";
			// 
			// txp2hay
			// 
			this->txp2hay->AutoSize = true;
			this->txp2hay->BackColor = System::Drawing::Color::Green;
			this->txp2hay->Location = System::Drawing::Point(799, 209);
			this->txp2hay->Name = L"txp2hay";
			this->txp2hay->Size = System::Drawing::Size(19, 13);
			this->txp2hay->TabIndex = 73;
			this->txp2hay->Text = L"55";
			// 
			// txp2roots
			// 
			this->txp2roots->AutoSize = true;
			this->txp2roots->BackColor = System::Drawing::Color::Green;
			this->txp2roots->Location = System::Drawing::Point(799, 196);
			this->txp2roots->Name = L"txp2roots";
			this->txp2roots->Size = System::Drawing::Size(19, 13);
			this->txp2roots->TabIndex = 72;
			this->txp2roots->Text = L"55";
			// 
			// txp2potatoes
			// 
			this->txp2potatoes->AutoSize = true;
			this->txp2potatoes->BackColor = System::Drawing::Color::Green;
			this->txp2potatoes->Location = System::Drawing::Point(799, 183);
			this->txp2potatoes->Name = L"txp2potatoes";
			this->txp2potatoes->Size = System::Drawing::Size(19, 13);
			this->txp2potatoes->TabIndex = 71;
			this->txp2potatoes->Text = L"55";
			// 
			// txp2oates
			// 
			this->txp2oates->AutoSize = true;
			this->txp2oates->BackColor = System::Drawing::Color::Green;
			this->txp2oates->Location = System::Drawing::Point(799, 170);
			this->txp2oates->Name = L"txp2oates";
			this->txp2oates->Size = System::Drawing::Size(19, 13);
			this->txp2oates->TabIndex = 70;
			this->txp2oates->Text = L"55";
			// 
			// txp2barley
			// 
			this->txp2barley->AutoSize = true;
			this->txp2barley->BackColor = System::Drawing::Color::Green;
			this->txp2barley->Location = System::Drawing::Point(799, 157);
			this->txp2barley->Name = L"txp2barley";
			this->txp2barley->Size = System::Drawing::Size(19, 13);
			this->txp2barley->TabIndex = 69;
			this->txp2barley->Text = L"55";
			// 
			// txp2sp
			// 
			this->txp2sp->AutoSize = true;
			this->txp2sp->BackColor = System::Drawing::Color::Green;
			this->txp2sp->Location = System::Drawing::Point(717, 235);
			this->txp2sp->Name = L"txp2sp";
			this->txp2sp->Size = System::Drawing::Size(19, 13);
			this->txp2sp->TabIndex = 68;
			this->txp2sp->Text = L"55";
			// 
			// txp2lambs
			// 
			this->txp2lambs->AutoSize = true;
			this->txp2lambs->BackColor = System::Drawing::Color::Green;
			this->txp2lambs->Location = System::Drawing::Point(717, 222);
			this->txp2lambs->Name = L"txp2lambs";
			this->txp2lambs->Size = System::Drawing::Size(19, 13);
			this->txp2lambs->TabIndex = 67;
			this->txp2lambs->Text = L"55";
			// 
			// txp2bc
			// 
			this->txp2bc->AutoSize = true;
			this->txp2bc->BackColor = System::Drawing::Color::Green;
			this->txp2bc->Location = System::Drawing::Point(717, 209);
			this->txp2bc->Name = L"txp2bc";
			this->txp2bc->Size = System::Drawing::Size(19, 13);
			this->txp2bc->TabIndex = 66;
			this->txp2bc->Text = L"55";
			// 
			// txp2hc
			// 
			this->txp2hc->AutoSize = true;
			this->txp2hc->BackColor = System::Drawing::Color::Green;
			this->txp2hc->Location = System::Drawing::Point(717, 196);
			this->txp2hc->Name = L"txp2hc";
			this->txp2hc->Size = System::Drawing::Size(19, 13);
			this->txp2hc->TabIndex = 65;
			this->txp2hc->Text = L"55";
			// 
			// txp2horses
			// 
			this->txp2horses->AutoSize = true;
			this->txp2horses->BackColor = System::Drawing::Color::Green;
			this->txp2horses->Location = System::Drawing::Point(717, 183);
			this->txp2horses->Name = L"txp2horses";
			this->txp2horses->Size = System::Drawing::Size(19, 13);
			this->txp2horses->TabIndex = 64;
			this->txp2horses->Text = L"55";
			// 
			// txp2sows
			// 
			this->txp2sows->AutoSize = true;
			this->txp2sows->BackColor = System::Drawing::Color::Green;
			this->txp2sows->Location = System::Drawing::Point(717, 170);
			this->txp2sows->Name = L"txp2sows";
			this->txp2sows->Size = System::Drawing::Size(19, 13);
			this->txp2sows->TabIndex = 63;
			this->txp2sows->Text = L"55";
			// 
			// txp2ewes
			// 
			this->txp2ewes->AutoSize = true;
			this->txp2ewes->BackColor = System::Drawing::Color::Green;
			this->txp2ewes->Location = System::Drawing::Point(717, 157);
			this->txp2ewes->Name = L"txp2ewes";
			this->txp2ewes->Size = System::Drawing::Size(19, 13);
			this->txp2ewes->TabIndex = 62;
			this->txp2ewes->Text = L"55";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Green;
			this->label32->Location = System::Drawing::Point(742, 235);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(27, 13);
			this->label32->TabIndex = 61;
			this->label32->Text = L"Ley:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Green;
			this->label33->Location = System::Drawing::Point(742, 222);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(46, 13);
			this->label33->TabIndex = 60;
			this->label33->Text = L"Pasture:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Green;
			this->label34->Location = System::Drawing::Point(742, 209);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(29, 13);
			this->label34->TabIndex = 59;
			this->label34->Text = L"Hay:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Green;
			this->label35->Location = System::Drawing::Point(742, 196);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(38, 13);
			this->label35->TabIndex = 58;
			this->label35->Text = L"Roots:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Green;
			this->label36->Location = System::Drawing::Point(742, 183);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(52, 13);
			this->label36->TabIndex = 57;
			this->label36->Text = L"Potatoes:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Green;
			this->label37->Location = System::Drawing::Point(742, 170);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(38, 13);
			this->label37->TabIndex = 56;
			this->label37->Text = L"Oates:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Green;
			this->label38->Location = System::Drawing::Point(742, 157);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(39, 13);
			this->label38->TabIndex = 55;
			this->label38->Text = L"Barley:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Green;
			this->label39->Location = System::Drawing::Point(636, 235);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(58, 13);
			this->label39->TabIndex = 54;
			this->label39->Text = L"Store Pigs:";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Green;
			this->label40->Location = System::Drawing::Point(636, 222);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(41, 13);
			this->label40->TabIndex = 53;
			this->label40->Text = L"Lambs:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Green;
			this->label41->Location = System::Drawing::Point(636, 209);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(62, 13);
			this->label41->TabIndex = 52;
			this->label41->Text = L"Bull Calves:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Green;
			this->label42->Location = System::Drawing::Point(636, 196);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(73, 13);
			this->label42->TabIndex = 51;
			this->label42->Text = L"Heifer Calves:";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Green;
			this->label43->Location = System::Drawing::Point(636, 183);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(43, 13);
			this->label43->TabIndex = 50;
			this->label43->Text = L"Horses:";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::Green;
			this->label44->Location = System::Drawing::Point(636, 170);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(36, 13);
			this->label44->TabIndex = 49;
			this->label44->Text = L"Sows:";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::Green;
			this->label45->Location = System::Drawing::Point(636, 157);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(36, 13);
			this->label45->TabIndex = 48;
			this->label45->Text = L"Ewes:";
			// 
			// txp2wheat
			// 
			this->txp2wheat->AutoSize = true;
			this->txp2wheat->BackColor = System::Drawing::Color::Green;
			this->txp2wheat->Location = System::Drawing::Point(799, 144);
			this->txp2wheat->Name = L"txp2wheat";
			this->txp2wheat->Size = System::Drawing::Size(19, 13);
			this->txp2wheat->TabIndex = 47;
			this->txp2wheat->Text = L"55";
			// 
			// txp2m
			// 
			this->txp2m->AutoSize = true;
			this->txp2m->BackColor = System::Drawing::Color::Green;
			this->txp2m->Location = System::Drawing::Point(799, 128);
			this->txp2m->Name = L"txp2m";
			this->txp2m->Size = System::Drawing::Size(37, 13);
			this->txp2m->TabIndex = 46;
			this->txp2m->Text = L"15000";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::Green;
			this->label48->Location = System::Drawing::Point(742, 144);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(42, 13);
			this->label48->TabIndex = 45;
			this->label48->Text = L"Wheat:";
			// 
			// txp2cows
			// 
			this->txp2cows->AutoSize = true;
			this->txp2cows->BackColor = System::Drawing::Color::Green;
			this->txp2cows->Location = System::Drawing::Point(717, 144);
			this->txp2cows->Name = L"txp2cows";
			this->txp2cows->Size = System::Drawing::Size(19, 13);
			this->txp2cows->TabIndex = 44;
			this->txp2cows->Text = L"55";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::Green;
			this->label50->Location = System::Drawing::Point(742, 128);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(51, 13);
			this->label50->TabIndex = 43;
			this->label50->Text = L"Money: £";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::Green;
			this->label51->Location = System::Drawing::Point(636, 144);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(36, 13);
			this->label51->TabIndex = 42;
			this->label51->Text = L"Cows:";
			// 
			// txp2name
			// 
			this->txp2name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txp2name->Location = System::Drawing::Point(636, 115);
			this->txp2name->Name = L"txp2name";
			this->txp2name->Size = System::Drawing::Size(100, 26);
			this->txp2name->TabIndex = 41;
			this->txp2name->Text = L"Player 2";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Green;
			this->panel2->Location = System::Drawing::Point(636, 115);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 137);
			this->panel2->TabIndex = 76;
			// 
			// txp3ley
			// 
			this->txp3ley->AutoSize = true;
			this->txp3ley->BackColor = System::Drawing::Color::Blue;
			this->txp3ley->Location = System::Drawing::Point(175, 378);
			this->txp3ley->Name = L"txp3ley";
			this->txp3ley->Size = System::Drawing::Size(19, 13);
			this->txp3ley->TabIndex = 111;
			this->txp3ley->Text = L"55";
			// 
			// txp3pasture
			// 
			this->txp3pasture->AutoSize = true;
			this->txp3pasture->BackColor = System::Drawing::Color::Blue;
			this->txp3pasture->Location = System::Drawing::Point(175, 365);
			this->txp3pasture->Name = L"txp3pasture";
			this->txp3pasture->Size = System::Drawing::Size(19, 13);
			this->txp3pasture->TabIndex = 110;
			this->txp3pasture->Text = L"55";
			// 
			// txp3hay
			// 
			this->txp3hay->AutoSize = true;
			this->txp3hay->BackColor = System::Drawing::Color::Blue;
			this->txp3hay->Location = System::Drawing::Point(175, 352);
			this->txp3hay->Name = L"txp3hay";
			this->txp3hay->Size = System::Drawing::Size(19, 13);
			this->txp3hay->TabIndex = 109;
			this->txp3hay->Text = L"55";
			// 
			// txp3roots
			// 
			this->txp3roots->AutoSize = true;
			this->txp3roots->BackColor = System::Drawing::Color::Blue;
			this->txp3roots->Location = System::Drawing::Point(175, 339);
			this->txp3roots->Name = L"txp3roots";
			this->txp3roots->Size = System::Drawing::Size(19, 13);
			this->txp3roots->TabIndex = 108;
			this->txp3roots->Text = L"55";
			// 
			// txp3potatoes
			// 
			this->txp3potatoes->AutoSize = true;
			this->txp3potatoes->BackColor = System::Drawing::Color::Blue;
			this->txp3potatoes->Location = System::Drawing::Point(175, 326);
			this->txp3potatoes->Name = L"txp3potatoes";
			this->txp3potatoes->Size = System::Drawing::Size(19, 13);
			this->txp3potatoes->TabIndex = 107;
			this->txp3potatoes->Text = L"55";
			// 
			// txp3oates
			// 
			this->txp3oates->AutoSize = true;
			this->txp3oates->BackColor = System::Drawing::Color::Blue;
			this->txp3oates->Location = System::Drawing::Point(175, 313);
			this->txp3oates->Name = L"txp3oates";
			this->txp3oates->Size = System::Drawing::Size(19, 13);
			this->txp3oates->TabIndex = 106;
			this->txp3oates->Text = L"55";
			// 
			// txp3barley
			// 
			this->txp3barley->AutoSize = true;
			this->txp3barley->BackColor = System::Drawing::Color::Blue;
			this->txp3barley->Location = System::Drawing::Point(175, 300);
			this->txp3barley->Name = L"txp3barley";
			this->txp3barley->Size = System::Drawing::Size(19, 13);
			this->txp3barley->TabIndex = 105;
			this->txp3barley->Text = L"55";
			// 
			// txp3sp
			// 
			this->txp3sp->AutoSize = true;
			this->txp3sp->BackColor = System::Drawing::Color::Blue;
			this->txp3sp->Location = System::Drawing::Point(93, 378);
			this->txp3sp->Name = L"txp3sp";
			this->txp3sp->Size = System::Drawing::Size(19, 13);
			this->txp3sp->TabIndex = 104;
			this->txp3sp->Text = L"55";
			// 
			// txp3lambs
			// 
			this->txp3lambs->AutoSize = true;
			this->txp3lambs->BackColor = System::Drawing::Color::Blue;
			this->txp3lambs->Location = System::Drawing::Point(93, 365);
			this->txp3lambs->Name = L"txp3lambs";
			this->txp3lambs->Size = System::Drawing::Size(19, 13);
			this->txp3lambs->TabIndex = 103;
			this->txp3lambs->Text = L"55";
			// 
			// txp3bc
			// 
			this->txp3bc->AutoSize = true;
			this->txp3bc->BackColor = System::Drawing::Color::Blue;
			this->txp3bc->Location = System::Drawing::Point(93, 352);
			this->txp3bc->Name = L"txp3bc";
			this->txp3bc->Size = System::Drawing::Size(19, 13);
			this->txp3bc->TabIndex = 102;
			this->txp3bc->Text = L"55";
			// 
			// txp3hc
			// 
			this->txp3hc->AutoSize = true;
			this->txp3hc->BackColor = System::Drawing::Color::Blue;
			this->txp3hc->Location = System::Drawing::Point(93, 339);
			this->txp3hc->Name = L"txp3hc";
			this->txp3hc->Size = System::Drawing::Size(19, 13);
			this->txp3hc->TabIndex = 101;
			this->txp3hc->Text = L"55";
			// 
			// txp3horses
			// 
			this->txp3horses->AutoSize = true;
			this->txp3horses->BackColor = System::Drawing::Color::Blue;
			this->txp3horses->Location = System::Drawing::Point(93, 326);
			this->txp3horses->Name = L"txp3horses";
			this->txp3horses->Size = System::Drawing::Size(19, 13);
			this->txp3horses->TabIndex = 100;
			this->txp3horses->Text = L"55";
			// 
			// txp3sows
			// 
			this->txp3sows->AutoSize = true;
			this->txp3sows->BackColor = System::Drawing::Color::Blue;
			this->txp3sows->Location = System::Drawing::Point(93, 313);
			this->txp3sows->Name = L"txp3sows";
			this->txp3sows->Size = System::Drawing::Size(19, 13);
			this->txp3sows->TabIndex = 99;
			this->txp3sows->Text = L"55";
			// 
			// txp3ewes
			// 
			this->txp3ewes->AutoSize = true;
			this->txp3ewes->BackColor = System::Drawing::Color::Blue;
			this->txp3ewes->Location = System::Drawing::Point(93, 300);
			this->txp3ewes->Name = L"txp3ewes";
			this->txp3ewes->Size = System::Drawing::Size(19, 13);
			this->txp3ewes->TabIndex = 98;
			this->txp3ewes->Text = L"55";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::Color::Blue;
			this->label66->Location = System::Drawing::Point(118, 378);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(27, 13);
			this->label66->TabIndex = 97;
			this->label66->Text = L"Ley:";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::Blue;
			this->label67->Location = System::Drawing::Point(118, 365);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(46, 13);
			this->label67->TabIndex = 96;
			this->label67->Text = L"Pasture:";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::Blue;
			this->label68->Location = System::Drawing::Point(118, 352);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(29, 13);
			this->label68->TabIndex = 95;
			this->label68->Text = L"Hay:";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::Blue;
			this->label69->Location = System::Drawing::Point(118, 339);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(38, 13);
			this->label69->TabIndex = 94;
			this->label69->Text = L"Roots:";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->BackColor = System::Drawing::Color::Blue;
			this->label70->Location = System::Drawing::Point(118, 326);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(52, 13);
			this->label70->TabIndex = 93;
			this->label70->Text = L"Potatoes:";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::Blue;
			this->label71->Location = System::Drawing::Point(118, 313);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(38, 13);
			this->label71->TabIndex = 92;
			this->label71->Text = L"Oates:";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->BackColor = System::Drawing::Color::Blue;
			this->label72->Location = System::Drawing::Point(118, 300);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(39, 13);
			this->label72->TabIndex = 91;
			this->label72->Text = L"Barley:";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::Blue;
			this->label73->Location = System::Drawing::Point(12, 378);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(58, 13);
			this->label73->TabIndex = 90;
			this->label73->Text = L"Store Pigs:";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->BackColor = System::Drawing::Color::Blue;
			this->label74->Location = System::Drawing::Point(12, 365);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(41, 13);
			this->label74->TabIndex = 89;
			this->label74->Text = L"Lambs:";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::Blue;
			this->label75->Location = System::Drawing::Point(12, 352);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(62, 13);
			this->label75->TabIndex = 88;
			this->label75->Text = L"Bull Calves:";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->BackColor = System::Drawing::Color::Blue;
			this->label76->Location = System::Drawing::Point(12, 339);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(73, 13);
			this->label76->TabIndex = 87;
			this->label76->Text = L"Heifer Calves:";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->BackColor = System::Drawing::Color::Blue;
			this->label77->Location = System::Drawing::Point(12, 326);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(43, 13);
			this->label77->TabIndex = 86;
			this->label77->Text = L"Horses:";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->BackColor = System::Drawing::Color::Blue;
			this->label78->Location = System::Drawing::Point(12, 313);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(36, 13);
			this->label78->TabIndex = 85;
			this->label78->Text = L"Sows:";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->BackColor = System::Drawing::Color::Blue;
			this->label79->Location = System::Drawing::Point(12, 300);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(36, 13);
			this->label79->TabIndex = 84;
			this->label79->Text = L"Ewes:";
			// 
			// txp3wheat
			// 
			this->txp3wheat->AutoSize = true;
			this->txp3wheat->BackColor = System::Drawing::Color::Blue;
			this->txp3wheat->Location = System::Drawing::Point(175, 287);
			this->txp3wheat->Name = L"txp3wheat";
			this->txp3wheat->Size = System::Drawing::Size(19, 13);
			this->txp3wheat->TabIndex = 83;
			this->txp3wheat->Text = L"55";
			// 
			// txp3m
			// 
			this->txp3m->AutoSize = true;
			this->txp3m->BackColor = System::Drawing::Color::Blue;
			this->txp3m->Location = System::Drawing::Point(175, 271);
			this->txp3m->Name = L"txp3m";
			this->txp3m->Size = System::Drawing::Size(37, 13);
			this->txp3m->TabIndex = 82;
			this->txp3m->Text = L"15000";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->BackColor = System::Drawing::Color::Blue;
			this->label82->Location = System::Drawing::Point(118, 287);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(42, 13);
			this->label82->TabIndex = 81;
			this->label82->Text = L"Wheat:";
			// 
			// txp3cows
			// 
			this->txp3cows->AutoSize = true;
			this->txp3cows->BackColor = System::Drawing::Color::Blue;
			this->txp3cows->Location = System::Drawing::Point(93, 287);
			this->txp3cows->Name = L"txp3cows";
			this->txp3cows->Size = System::Drawing::Size(19, 13);
			this->txp3cows->TabIndex = 80;
			this->txp3cows->Text = L"55";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->BackColor = System::Drawing::Color::Blue;
			this->label84->Location = System::Drawing::Point(118, 271);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(51, 13);
			this->label84->TabIndex = 79;
			this->label84->Text = L"Money: £";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->BackColor = System::Drawing::Color::Blue;
			this->label85->Location = System::Drawing::Point(12, 287);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(36, 13);
			this->label85->TabIndex = 78;
			this->label85->Text = L"Cows:";
			// 
			// txp3name
			// 
			this->txp3name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txp3name->Location = System::Drawing::Point(12, 258);
			this->txp3name->Name = L"txp3name";
			this->txp3name->Size = System::Drawing::Size(100, 26);
			this->txp3name->TabIndex = 77;
			this->txp3name->Text = L"Player 3";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Blue;
			this->panel3->Location = System::Drawing::Point(12, 258);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 137);
			this->panel3->TabIndex = 112;
			// 
			// txp4ley
			// 
			this->txp4ley->AutoSize = true;
			this->txp4ley->BackColor = System::Drawing::Color::Magenta;
			this->txp4ley->Location = System::Drawing::Point(799, 378);
			this->txp4ley->Name = L"txp4ley";
			this->txp4ley->Size = System::Drawing::Size(19, 13);
			this->txp4ley->TabIndex = 147;
			this->txp4ley->Text = L"55";
			// 
			// txp4pasture
			// 
			this->txp4pasture->AutoSize = true;
			this->txp4pasture->BackColor = System::Drawing::Color::Magenta;
			this->txp4pasture->Location = System::Drawing::Point(799, 365);
			this->txp4pasture->Name = L"txp4pasture";
			this->txp4pasture->Size = System::Drawing::Size(19, 13);
			this->txp4pasture->TabIndex = 146;
			this->txp4pasture->Text = L"55";
			// 
			// txp4hay
			// 
			this->txp4hay->AutoSize = true;
			this->txp4hay->BackColor = System::Drawing::Color::Magenta;
			this->txp4hay->Location = System::Drawing::Point(799, 352);
			this->txp4hay->Name = L"txp4hay";
			this->txp4hay->Size = System::Drawing::Size(19, 13);
			this->txp4hay->TabIndex = 145;
			this->txp4hay->Text = L"55";
			// 
			// txp4roots
			// 
			this->txp4roots->AutoSize = true;
			this->txp4roots->BackColor = System::Drawing::Color::Magenta;
			this->txp4roots->Location = System::Drawing::Point(799, 339);
			this->txp4roots->Name = L"txp4roots";
			this->txp4roots->Size = System::Drawing::Size(19, 13);
			this->txp4roots->TabIndex = 144;
			this->txp4roots->Text = L"55";
			// 
			// txp4potatoes
			// 
			this->txp4potatoes->AutoSize = true;
			this->txp4potatoes->BackColor = System::Drawing::Color::Magenta;
			this->txp4potatoes->Location = System::Drawing::Point(799, 326);
			this->txp4potatoes->Name = L"txp4potatoes";
			this->txp4potatoes->Size = System::Drawing::Size(19, 13);
			this->txp4potatoes->TabIndex = 143;
			this->txp4potatoes->Text = L"55";
			// 
			// txp4oates
			// 
			this->txp4oates->AutoSize = true;
			this->txp4oates->BackColor = System::Drawing::Color::Magenta;
			this->txp4oates->Location = System::Drawing::Point(799, 313);
			this->txp4oates->Name = L"txp4oates";
			this->txp4oates->Size = System::Drawing::Size(19, 13);
			this->txp4oates->TabIndex = 142;
			this->txp4oates->Text = L"55";
			// 
			// txp4barley
			// 
			this->txp4barley->AutoSize = true;
			this->txp4barley->BackColor = System::Drawing::Color::Magenta;
			this->txp4barley->Location = System::Drawing::Point(799, 300);
			this->txp4barley->Name = L"txp4barley";
			this->txp4barley->Size = System::Drawing::Size(19, 13);
			this->txp4barley->TabIndex = 141;
			this->txp4barley->Text = L"55";
			// 
			// txp4sp
			// 
			this->txp4sp->AutoSize = true;
			this->txp4sp->BackColor = System::Drawing::Color::Magenta;
			this->txp4sp->Location = System::Drawing::Point(717, 378);
			this->txp4sp->Name = L"txp4sp";
			this->txp4sp->Size = System::Drawing::Size(19, 13);
			this->txp4sp->TabIndex = 140;
			this->txp4sp->Text = L"55";
			// 
			// txp4lambs
			// 
			this->txp4lambs->AutoSize = true;
			this->txp4lambs->BackColor = System::Drawing::Color::Magenta;
			this->txp4lambs->Location = System::Drawing::Point(717, 365);
			this->txp4lambs->Name = L"txp4lambs";
			this->txp4lambs->Size = System::Drawing::Size(19, 13);
			this->txp4lambs->TabIndex = 139;
			this->txp4lambs->Text = L"55";
			// 
			// txp4bc
			// 
			this->txp4bc->AutoSize = true;
			this->txp4bc->BackColor = System::Drawing::Color::Magenta;
			this->txp4bc->Location = System::Drawing::Point(717, 352);
			this->txp4bc->Name = L"txp4bc";
			this->txp4bc->Size = System::Drawing::Size(19, 13);
			this->txp4bc->TabIndex = 138;
			this->txp4bc->Text = L"55";
			// 
			// txp4hc
			// 
			this->txp4hc->AutoSize = true;
			this->txp4hc->BackColor = System::Drawing::Color::Magenta;
			this->txp4hc->Location = System::Drawing::Point(717, 339);
			this->txp4hc->Name = L"txp4hc";
			this->txp4hc->Size = System::Drawing::Size(19, 13);
			this->txp4hc->TabIndex = 137;
			this->txp4hc->Text = L"55";
			// 
			// txp4horses
			// 
			this->txp4horses->AutoSize = true;
			this->txp4horses->BackColor = System::Drawing::Color::Magenta;
			this->txp4horses->Location = System::Drawing::Point(717, 326);
			this->txp4horses->Name = L"txp4horses";
			this->txp4horses->Size = System::Drawing::Size(19, 13);
			this->txp4horses->TabIndex = 136;
			this->txp4horses->Text = L"55";
			// 
			// txp4sows
			// 
			this->txp4sows->AutoSize = true;
			this->txp4sows->BackColor = System::Drawing::Color::Magenta;
			this->txp4sows->Location = System::Drawing::Point(717, 313);
			this->txp4sows->Name = L"txp4sows";
			this->txp4sows->Size = System::Drawing::Size(19, 13);
			this->txp4sows->TabIndex = 135;
			this->txp4sows->Text = L"55";
			// 
			// txp4ewes
			// 
			this->txp4ewes->AutoSize = true;
			this->txp4ewes->BackColor = System::Drawing::Color::Magenta;
			this->txp4ewes->Location = System::Drawing::Point(717, 300);
			this->txp4ewes->Name = L"txp4ewes";
			this->txp4ewes->Size = System::Drawing::Size(19, 13);
			this->txp4ewes->TabIndex = 134;
			this->txp4ewes->Text = L"55";
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->BackColor = System::Drawing::Color::Magenta;
			this->label100->Location = System::Drawing::Point(742, 378);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(27, 13);
			this->label100->TabIndex = 133;
			this->label100->Text = L"Ley:";
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->BackColor = System::Drawing::Color::Magenta;
			this->label101->Location = System::Drawing::Point(742, 365);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(46, 13);
			this->label101->TabIndex = 132;
			this->label101->Text = L"Pasture:";
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->BackColor = System::Drawing::Color::Magenta;
			this->label102->Location = System::Drawing::Point(742, 352);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(29, 13);
			this->label102->TabIndex = 131;
			this->label102->Text = L"Hay:";
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->BackColor = System::Drawing::Color::Magenta;
			this->label103->Location = System::Drawing::Point(742, 339);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(38, 13);
			this->label103->TabIndex = 130;
			this->label103->Text = L"Roots:";
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->BackColor = System::Drawing::Color::Magenta;
			this->label104->Location = System::Drawing::Point(742, 326);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(52, 13);
			this->label104->TabIndex = 129;
			this->label104->Text = L"Potatoes:";
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->BackColor = System::Drawing::Color::Magenta;
			this->label105->Location = System::Drawing::Point(742, 313);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(38, 13);
			this->label105->TabIndex = 128;
			this->label105->Text = L"Oates:";
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->BackColor = System::Drawing::Color::Magenta;
			this->label106->Location = System::Drawing::Point(742, 300);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(39, 13);
			this->label106->TabIndex = 127;
			this->label106->Text = L"Barley:";
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->BackColor = System::Drawing::Color::Magenta;
			this->label107->Location = System::Drawing::Point(636, 378);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(58, 13);
			this->label107->TabIndex = 126;
			this->label107->Text = L"Store Pigs:";
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->BackColor = System::Drawing::Color::Magenta;
			this->label108->Location = System::Drawing::Point(636, 365);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(41, 13);
			this->label108->TabIndex = 125;
			this->label108->Text = L"Lambs:";
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->BackColor = System::Drawing::Color::Magenta;
			this->label109->Location = System::Drawing::Point(636, 352);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(62, 13);
			this->label109->TabIndex = 124;
			this->label109->Text = L"Bull Calves:";
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->BackColor = System::Drawing::Color::Magenta;
			this->label110->Location = System::Drawing::Point(636, 339);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(73, 13);
			this->label110->TabIndex = 123;
			this->label110->Text = L"Heifer Calves:";
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->BackColor = System::Drawing::Color::Magenta;
			this->label111->Location = System::Drawing::Point(636, 326);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(43, 13);
			this->label111->TabIndex = 122;
			this->label111->Text = L"Horses:";
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->BackColor = System::Drawing::Color::Magenta;
			this->label112->Location = System::Drawing::Point(636, 313);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(36, 13);
			this->label112->TabIndex = 121;
			this->label112->Text = L"Sows:";
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->BackColor = System::Drawing::Color::Magenta;
			this->label113->Location = System::Drawing::Point(636, 300);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(36, 13);
			this->label113->TabIndex = 120;
			this->label113->Text = L"Ewes:";
			// 
			// txp4wheat
			// 
			this->txp4wheat->AutoSize = true;
			this->txp4wheat->BackColor = System::Drawing::Color::Magenta;
			this->txp4wheat->Location = System::Drawing::Point(799, 287);
			this->txp4wheat->Name = L"txp4wheat";
			this->txp4wheat->Size = System::Drawing::Size(19, 13);
			this->txp4wheat->TabIndex = 119;
			this->txp4wheat->Text = L"55";
			// 
			// txp4m
			// 
			this->txp4m->AutoSize = true;
			this->txp4m->BackColor = System::Drawing::Color::Magenta;
			this->txp4m->Location = System::Drawing::Point(799, 271);
			this->txp4m->Name = L"txp4m";
			this->txp4m->Size = System::Drawing::Size(37, 13);
			this->txp4m->TabIndex = 118;
			this->txp4m->Text = L"15000";
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->BackColor = System::Drawing::Color::Magenta;
			this->label116->Location = System::Drawing::Point(742, 287);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(42, 13);
			this->label116->TabIndex = 117;
			this->label116->Text = L"Wheat:";
			// 
			// txp4cows
			// 
			this->txp4cows->AutoSize = true;
			this->txp4cows->BackColor = System::Drawing::Color::Magenta;
			this->txp4cows->Location = System::Drawing::Point(717, 287);
			this->txp4cows->Name = L"txp4cows";
			this->txp4cows->Size = System::Drawing::Size(19, 13);
			this->txp4cows->TabIndex = 116;
			this->txp4cows->Text = L"55";
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->BackColor = System::Drawing::Color::Magenta;
			this->label118->Location = System::Drawing::Point(742, 271);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(51, 13);
			this->label118->TabIndex = 115;
			this->label118->Text = L"Money: £";
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->BackColor = System::Drawing::Color::Magenta;
			this->label119->Location = System::Drawing::Point(636, 287);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(36, 13);
			this->label119->TabIndex = 114;
			this->label119->Text = L"Cows:";
			// 
			// txp4name
			// 
			this->txp4name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txp4name->Location = System::Drawing::Point(636, 258);
			this->txp4name->Name = L"txp4name";
			this->txp4name->Size = System::Drawing::Size(100, 26);
			this->txp4name->TabIndex = 113;
			this->txp4name->Text = L"Player 4";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Magenta;
			this->panel4->Location = System::Drawing::Point(636, 258);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 137);
			this->panel4->TabIndex = 148;
			// 
			// txp5ley
			// 
			this->txp5ley->AutoSize = true;
			this->txp5ley->BackColor = System::Drawing::Color::Cyan;
			this->txp5ley->Location = System::Drawing::Point(175, 521);
			this->txp5ley->Name = L"txp5ley";
			this->txp5ley->Size = System::Drawing::Size(19, 13);
			this->txp5ley->TabIndex = 183;
			this->txp5ley->Text = L"55";
			// 
			// txp5pasture
			// 
			this->txp5pasture->AutoSize = true;
			this->txp5pasture->BackColor = System::Drawing::Color::Cyan;
			this->txp5pasture->Location = System::Drawing::Point(175, 508);
			this->txp5pasture->Name = L"txp5pasture";
			this->txp5pasture->Size = System::Drawing::Size(19, 13);
			this->txp5pasture->TabIndex = 182;
			this->txp5pasture->Text = L"55";
			// 
			// txp5hay
			// 
			this->txp5hay->AutoSize = true;
			this->txp5hay->BackColor = System::Drawing::Color::Cyan;
			this->txp5hay->Location = System::Drawing::Point(175, 495);
			this->txp5hay->Name = L"txp5hay";
			this->txp5hay->Size = System::Drawing::Size(19, 13);
			this->txp5hay->TabIndex = 181;
			this->txp5hay->Text = L"55";
			// 
			// txp5roots
			// 
			this->txp5roots->AutoSize = true;
			this->txp5roots->BackColor = System::Drawing::Color::Cyan;
			this->txp5roots->Location = System::Drawing::Point(175, 482);
			this->txp5roots->Name = L"txp5roots";
			this->txp5roots->Size = System::Drawing::Size(19, 13);
			this->txp5roots->TabIndex = 180;
			this->txp5roots->Text = L"55";
			// 
			// txp5potatoes
			// 
			this->txp5potatoes->AutoSize = true;
			this->txp5potatoes->BackColor = System::Drawing::Color::Cyan;
			this->txp5potatoes->Location = System::Drawing::Point(175, 469);
			this->txp5potatoes->Name = L"txp5potatoes";
			this->txp5potatoes->Size = System::Drawing::Size(19, 13);
			this->txp5potatoes->TabIndex = 179;
			this->txp5potatoes->Text = L"55";
			// 
			// txp5oates
			// 
			this->txp5oates->AutoSize = true;
			this->txp5oates->BackColor = System::Drawing::Color::Cyan;
			this->txp5oates->Location = System::Drawing::Point(175, 456);
			this->txp5oates->Name = L"txp5oates";
			this->txp5oates->Size = System::Drawing::Size(19, 13);
			this->txp5oates->TabIndex = 178;
			this->txp5oates->Text = L"55";
			// 
			// txp5barley
			// 
			this->txp5barley->AutoSize = true;
			this->txp5barley->BackColor = System::Drawing::Color::Cyan;
			this->txp5barley->Location = System::Drawing::Point(175, 443);
			this->txp5barley->Name = L"txp5barley";
			this->txp5barley->Size = System::Drawing::Size(19, 13);
			this->txp5barley->TabIndex = 177;
			this->txp5barley->Text = L"55";
			// 
			// txp5sp
			// 
			this->txp5sp->AutoSize = true;
			this->txp5sp->BackColor = System::Drawing::Color::Cyan;
			this->txp5sp->Location = System::Drawing::Point(93, 521);
			this->txp5sp->Name = L"txp5sp";
			this->txp5sp->Size = System::Drawing::Size(19, 13);
			this->txp5sp->TabIndex = 176;
			this->txp5sp->Text = L"55";
			// 
			// txp5lambs
			// 
			this->txp5lambs->AutoSize = true;
			this->txp5lambs->BackColor = System::Drawing::Color::Cyan;
			this->txp5lambs->Location = System::Drawing::Point(93, 508);
			this->txp5lambs->Name = L"txp5lambs";
			this->txp5lambs->Size = System::Drawing::Size(19, 13);
			this->txp5lambs->TabIndex = 175;
			this->txp5lambs->Text = L"55";
			// 
			// txp5bc
			// 
			this->txp5bc->AutoSize = true;
			this->txp5bc->BackColor = System::Drawing::Color::Cyan;
			this->txp5bc->Location = System::Drawing::Point(93, 495);
			this->txp5bc->Name = L"txp5bc";
			this->txp5bc->Size = System::Drawing::Size(19, 13);
			this->txp5bc->TabIndex = 174;
			this->txp5bc->Text = L"55";
			// 
			// txp5hc
			// 
			this->txp5hc->AutoSize = true;
			this->txp5hc->BackColor = System::Drawing::Color::Cyan;
			this->txp5hc->Location = System::Drawing::Point(93, 482);
			this->txp5hc->Name = L"txp5hc";
			this->txp5hc->Size = System::Drawing::Size(19, 13);
			this->txp5hc->TabIndex = 173;
			this->txp5hc->Text = L"55";
			// 
			// txp5horses
			// 
			this->txp5horses->AutoSize = true;
			this->txp5horses->BackColor = System::Drawing::Color::Cyan;
			this->txp5horses->Location = System::Drawing::Point(93, 469);
			this->txp5horses->Name = L"txp5horses";
			this->txp5horses->Size = System::Drawing::Size(19, 13);
			this->txp5horses->TabIndex = 172;
			this->txp5horses->Text = L"55";
			// 
			// txp5sows
			// 
			this->txp5sows->AutoSize = true;
			this->txp5sows->BackColor = System::Drawing::Color::Cyan;
			this->txp5sows->Location = System::Drawing::Point(93, 456);
			this->txp5sows->Name = L"txp5sows";
			this->txp5sows->Size = System::Drawing::Size(19, 13);
			this->txp5sows->TabIndex = 171;
			this->txp5sows->Text = L"55";
			// 
			// txp5ewes
			// 
			this->txp5ewes->AutoSize = true;
			this->txp5ewes->BackColor = System::Drawing::Color::Cyan;
			this->txp5ewes->Location = System::Drawing::Point(93, 443);
			this->txp5ewes->Name = L"txp5ewes";
			this->txp5ewes->Size = System::Drawing::Size(19, 13);
			this->txp5ewes->TabIndex = 170;
			this->txp5ewes->Text = L"55";
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->BackColor = System::Drawing::Color::Cyan;
			this->label134->Location = System::Drawing::Point(118, 521);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(27, 13);
			this->label134->TabIndex = 169;
			this->label134->Text = L"Ley:";
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->BackColor = System::Drawing::Color::Cyan;
			this->label135->Location = System::Drawing::Point(118, 508);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(46, 13);
			this->label135->TabIndex = 168;
			this->label135->Text = L"Pasture:";
			// 
			// label136
			// 
			this->label136->AutoSize = true;
			this->label136->BackColor = System::Drawing::Color::Cyan;
			this->label136->Location = System::Drawing::Point(118, 495);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(29, 13);
			this->label136->TabIndex = 167;
			this->label136->Text = L"Hay:";
			// 
			// label137
			// 
			this->label137->AutoSize = true;
			this->label137->BackColor = System::Drawing::Color::Cyan;
			this->label137->Location = System::Drawing::Point(118, 482);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(38, 13);
			this->label137->TabIndex = 166;
			this->label137->Text = L"Roots:";
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->BackColor = System::Drawing::Color::Cyan;
			this->label138->Location = System::Drawing::Point(118, 469);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(52, 13);
			this->label138->TabIndex = 165;
			this->label138->Text = L"Potatoes:";
			// 
			// label139
			// 
			this->label139->AutoSize = true;
			this->label139->BackColor = System::Drawing::Color::Cyan;
			this->label139->Location = System::Drawing::Point(118, 456);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(38, 13);
			this->label139->TabIndex = 164;
			this->label139->Text = L"Oates:";
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->BackColor = System::Drawing::Color::Cyan;
			this->label140->Location = System::Drawing::Point(118, 443);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(39, 13);
			this->label140->TabIndex = 163;
			this->label140->Text = L"Barley:";
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->BackColor = System::Drawing::Color::Cyan;
			this->label141->Location = System::Drawing::Point(12, 521);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(58, 13);
			this->label141->TabIndex = 162;
			this->label141->Text = L"Store Pigs:";
			// 
			// label142
			// 
			this->label142->AutoSize = true;
			this->label142->BackColor = System::Drawing::Color::Cyan;
			this->label142->Location = System::Drawing::Point(12, 508);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(41, 13);
			this->label142->TabIndex = 161;
			this->label142->Text = L"Lambs:";
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->BackColor = System::Drawing::Color::Cyan;
			this->label143->Location = System::Drawing::Point(12, 495);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(62, 13);
			this->label143->TabIndex = 160;
			this->label143->Text = L"Bull Calves:";
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->BackColor = System::Drawing::Color::Cyan;
			this->label144->Location = System::Drawing::Point(12, 482);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(73, 13);
			this->label144->TabIndex = 159;
			this->label144->Text = L"Heifer Calves:";
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->BackColor = System::Drawing::Color::Cyan;
			this->label145->Location = System::Drawing::Point(12, 469);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(43, 13);
			this->label145->TabIndex = 158;
			this->label145->Text = L"Horses:";
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->BackColor = System::Drawing::Color::Cyan;
			this->label146->Location = System::Drawing::Point(12, 456);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(36, 13);
			this->label146->TabIndex = 157;
			this->label146->Text = L"Sows:";
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->BackColor = System::Drawing::Color::Cyan;
			this->label147->Location = System::Drawing::Point(12, 443);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(36, 13);
			this->label147->TabIndex = 156;
			this->label147->Text = L"Ewes:";
			// 
			// txp5wheat
			// 
			this->txp5wheat->AutoSize = true;
			this->txp5wheat->BackColor = System::Drawing::Color::Cyan;
			this->txp5wheat->Location = System::Drawing::Point(175, 430);
			this->txp5wheat->Name = L"txp5wheat";
			this->txp5wheat->Size = System::Drawing::Size(19, 13);
			this->txp5wheat->TabIndex = 155;
			this->txp5wheat->Text = L"55";
			// 
			// txp5m
			// 
			this->txp5m->AutoSize = true;
			this->txp5m->BackColor = System::Drawing::Color::Cyan;
			this->txp5m->Location = System::Drawing::Point(175, 414);
			this->txp5m->Name = L"txp5m";
			this->txp5m->Size = System::Drawing::Size(37, 13);
			this->txp5m->TabIndex = 154;
			this->txp5m->Text = L"15000";
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->BackColor = System::Drawing::Color::Cyan;
			this->label150->Location = System::Drawing::Point(118, 430);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(42, 13);
			this->label150->TabIndex = 153;
			this->label150->Text = L"Wheat:";
			// 
			// txp5cows
			// 
			this->txp5cows->AutoSize = true;
			this->txp5cows->BackColor = System::Drawing::Color::Cyan;
			this->txp5cows->Location = System::Drawing::Point(93, 430);
			this->txp5cows->Name = L"txp5cows";
			this->txp5cows->Size = System::Drawing::Size(19, 13);
			this->txp5cows->TabIndex = 152;
			this->txp5cows->Text = L"55";
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->BackColor = System::Drawing::Color::Cyan;
			this->label152->Location = System::Drawing::Point(118, 414);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(51, 13);
			this->label152->TabIndex = 151;
			this->label152->Text = L"Money: £";
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->BackColor = System::Drawing::Color::Cyan;
			this->label153->Location = System::Drawing::Point(12, 430);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(36, 13);
			this->label153->TabIndex = 150;
			this->label153->Text = L"Cows:";
			// 
			// txp5name
			// 
			this->txp5name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txp5name->Location = System::Drawing::Point(12, 401);
			this->txp5name->Name = L"txp5name";
			this->txp5name->Size = System::Drawing::Size(100, 26);
			this->txp5name->TabIndex = 149;
			this->txp5name->Text = L"Player 5";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Cyan;
			this->panel5->Location = System::Drawing::Point(12, 401);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 137);
			this->panel5->TabIndex = 184;
			// 
			// txnum
			// 
			this->txnum->AutoSize = true;
			this->txnum->Location = System::Drawing::Point(215, 112);
			this->txnum->Name = L"txnum";
			this->txnum->Size = System::Drawing::Size(21, 13);
			this->txnum->TabIndex = 185;
			this->txnum->Text = L"##";
			// 
			// txf
			// 
			this->txf->AutoSize = true;
			this->txf->Location = System::Drawing::Point(574, 112);
			this->txf->Name = L"txf";
			this->txf->Size = System::Drawing::Size(56, 13);
			this->txf->TabIndex = 186;
			this->txf->Text = L"FARMING";
			// 
			// txtitle
			// 
			this->txtitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtitle->Location = System::Drawing::Point(218, 131);
			this->txtitle->Name = L"txtitle";
			this->txtitle->ReadOnly = true;
			this->txtitle->Size = System::Drawing::Size(412, 26);
			this->txtitle->TabIndex = 187;
			this->txtitle->Text = L"TITLE";
			this->txtitle->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txmain
			// 
			this->txmain->Location = System::Drawing::Point(218, 163);
			this->txmain->Name = L"txmain";
			this->txmain->ReadOnly = true;
			this->txmain->Size = System::Drawing::Size(412, 172);
			this->txmain->TabIndex = 188;
			this->txmain->Text = L"Main";
			// 
			// txoutput
			// 
			this->txoutput->Location = System::Drawing::Point(218, 341);
			this->txoutput->Name = L"txoutput";
			this->txoutput->ReadOnly = true;
			this->txoutput->Size = System::Drawing::Size(412, 102);
			this->txoutput->TabIndex = 189;
			this->txoutput->Text = L"Output";
			// 
			// op1txvalue
			// 
			this->op1txvalue->Location = System::Drawing::Point(218, 465);
			this->op1txvalue->Name = L"op1txvalue";
			this->op1txvalue->Size = System::Drawing::Size(40, 20);
			this->op1txvalue->TabIndex = 190;
			// 
			// op1cb
			// 
			this->op1cb->AutoSize = true;
			this->op1cb->Location = System::Drawing::Point(264, 468);
			this->op1cb->Name = L"op1cb";
			this->op1cb->Size = System::Drawing::Size(80, 17);
			this->op1cb->TabIndex = 191;
			this->op1cb->Text = L"checkBox1";
			this->op1cb->UseVisualStyleBackColor = true;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(218, 449);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(78, 13);
			this->label49->TabIndex = 192;
			this->label49->Text = L"Player Options:";
			// 
			// op2cb
			// 
			this->op2cb->AutoSize = true;
			this->op2cb->Location = System::Drawing::Point(264, 494);
			this->op2cb->Name = L"op2cb";
			this->op2cb->Size = System::Drawing::Size(80, 17);
			this->op2cb->TabIndex = 194;
			this->op2cb->Text = L"checkBox2";
			this->op2cb->UseVisualStyleBackColor = true;
			// 
			// op2txvalue
			// 
			this->op2txvalue->Location = System::Drawing::Point(218, 491);
			this->op2txvalue->Name = L"op2txvalue";
			this->op2txvalue->Size = System::Drawing::Size(40, 20);
			this->op2txvalue->TabIndex = 193;
			// 
			// op3cb
			// 
			this->op3cb->AutoSize = true;
			this->op3cb->Location = System::Drawing::Point(264, 520);
			this->op3cb->Name = L"op3cb";
			this->op3cb->Size = System::Drawing::Size(80, 17);
			this->op3cb->TabIndex = 196;
			this->op3cb->Text = L"checkBox3";
			this->op3cb->UseVisualStyleBackColor = true;
			// 
			// op3txvalue
			// 
			this->op3txvalue->Location = System::Drawing::Point(218, 517);
			this->op3txvalue->Name = L"op3txvalue";
			this->op3txvalue->Size = System::Drawing::Size(40, 20);
			this->op3txvalue->TabIndex = 195;
			// 
			// Btnpnum
			// 
			this->Btnpnum->Location = System::Drawing::Point(21, 52);
			this->Btnpnum->Name = L"Btnpnum";
			this->Btnpnum->Size = System::Drawing::Size(75, 23);
			this->Btnpnum->TabIndex = 197;
			this->Btnpnum->Text = L"Select";
			this->Btnpnum->UseVisualStyleBackColor = true;
			this->Btnpnum->Click += gcnew System::EventHandler(this, &MyForm::Btnpnum_Click);
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label154->Location = System::Drawing::Point(716, 398);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(49, 20);
			this->label154->TabIndex = 198;
			this->label154->Text = L"Dice:";
			// 
			// Btnnext
			// 
			this->Btnnext->Location = System::Drawing::Point(599, 514);
			this->Btnnext->Name = L"Btnnext";
			this->Btnnext->Size = System::Drawing::Size(75, 23);
			this->Btnnext->TabIndex = 199;
			this->Btnnext->Text = L"Next Card";
			this->Btnnext->UseVisualStyleBackColor = true;
			this->Btnnext->Click += gcnew System::EventHandler(this, &MyForm::Btnnext_Click);
			// 
			// Btnadv
			// 
			this->Btnadv->Location = System::Drawing::Point(680, 514);
			this->Btnadv->Name = L"Btnadv";
			this->Btnadv->Size = System::Drawing::Size(75, 23);
			this->Btnadv->TabIndex = 200;
			this->Btnadv->Text = L"Advance";
			this->Btnadv->UseVisualStyleBackColor = true;
			this->Btnadv->Click += gcnew System::EventHandler(this, &MyForm::Btnadv_Click);
			// 
			// Btnreset
			// 
			this->Btnreset->Location = System::Drawing::Point(761, 514);
			this->Btnreset->Name = L"Btnreset";
			this->Btnreset->Size = System::Drawing::Size(75, 23);
			this->Btnreset->TabIndex = 201;
			this->Btnreset->Text = L"Reset";
			this->Btnreset->UseVisualStyleBackColor = true;
			this->Btnreset->Click += gcnew System::EventHandler(this, &MyForm::Btnreset_Click);
			// 
			// Btndroll
			// 
			this->Btndroll->Location = System::Drawing::Point(680, 421);
			this->Btndroll->Name = L"Btndroll";
			this->Btndroll->Size = System::Drawing::Size(75, 23);
			this->Btndroll->TabIndex = 202;
			this->Btndroll->Text = L"Roll Dice";
			this->Btndroll->UseVisualStyleBackColor = true;
			// 
			// txdroll
			// 
			this->txdroll->AutoSize = true;
			this->txdroll->Location = System::Drawing::Point(768, 426);
			this->txdroll->Name = L"txdroll";
			this->txdroll->Size = System::Drawing::Size(13, 13);
			this->txdroll->TabIndex = 203;
			this->txdroll->Text = L"0";
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->Location = System::Drawing::Point(650, 453);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(53, 13);
			this->label156->TabIndex = 204;
			this->label156->Text = L"Dice Roll:";
			// 
			// Dbox
			// 
			this->Dbox->FormattingEnabled = true;
			this->Dbox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"1", L"2", L"3", L"4", L"5", L"6" });
			this->Dbox->Location = System::Drawing::Point(709, 450);
			this->Dbox->Name = L"Dbox";
			this->Dbox->Size = System::Drawing::Size(46, 21);
			this->Dbox->TabIndex = 205;
			this->Dbox->Text = L"1";
			// 
			// Btndselect
			// 
			this->Btndselect->Location = System::Drawing::Point(761, 448);
			this->Btndselect->Name = L"Btndselect";
			this->Btndselect->Size = System::Drawing::Size(75, 23);
			this->Btndselect->TabIndex = 206;
			this->Btndselect->Text = L"Select";
			this->Btndselect->UseVisualStyleBackColor = true;
			// 
			// op4cb
			// 
			this->op4cb->AutoSize = true;
			this->op4cb->Location = System::Drawing::Point(462, 468);
			this->op4cb->Name = L"op4cb";
			this->op4cb->Size = System::Drawing::Size(80, 17);
			this->op4cb->TabIndex = 212;
			this->op4cb->Text = L"checkBox4";
			this->op4cb->UseVisualStyleBackColor = true;
			// 
			// op6txvalue
			// 
			this->op6txvalue->Location = System::Drawing::Point(416, 517);
			this->op6txvalue->Name = L"op6txvalue";
			this->op6txvalue->Size = System::Drawing::Size(40, 20);
			this->op6txvalue->TabIndex = 211;
			// 
			// op5cb
			// 
			this->op5cb->AutoSize = true;
			this->op5cb->Location = System::Drawing::Point(462, 492);
			this->op5cb->Name = L"op5cb";
			this->op5cb->Size = System::Drawing::Size(80, 17);
			this->op5cb->TabIndex = 210;
			this->op5cb->Text = L"checkBox5";
			this->op5cb->UseVisualStyleBackColor = true;
			// 
			// op5txvalue
			// 
			this->op5txvalue->Location = System::Drawing::Point(416, 491);
			this->op5txvalue->Name = L"op5txvalue";
			this->op5txvalue->Size = System::Drawing::Size(40, 20);
			this->op5txvalue->TabIndex = 209;
			// 
			// op6cb
			// 
			this->op6cb->AutoSize = true;
			this->op6cb->Location = System::Drawing::Point(462, 518);
			this->op6cb->Name = L"op6cb";
			this->op6cb->Size = System::Drawing::Size(80, 17);
			this->op6cb->TabIndex = 208;
			this->op6cb->Text = L"checkBox6";
			this->op6cb->UseVisualStyleBackColor = true;
			// 
			// op4txvalue
			// 
			this->op4txvalue->Location = System::Drawing::Point(416, 465);
			this->op4txvalue->Name = L"op4txvalue";
			this->op4txvalue->Size = System::Drawing::Size(40, 20);
			this->op4txvalue->TabIndex = 207;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 549);
			this->Controls->Add(this->op4cb);
			this->Controls->Add(this->op6txvalue);
			this->Controls->Add(this->op5cb);
			this->Controls->Add(this->op5txvalue);
			this->Controls->Add(this->op6cb);
			this->Controls->Add(this->op4txvalue);
			this->Controls->Add(this->Btndselect);
			this->Controls->Add(this->Dbox);
			this->Controls->Add(this->label156);
			this->Controls->Add(this->txdroll);
			this->Controls->Add(this->Btndroll);
			this->Controls->Add(this->Btnreset);
			this->Controls->Add(this->Btnadv);
			this->Controls->Add(this->Btnnext);
			this->Controls->Add(this->label154);
			this->Controls->Add(this->Btnpnum);
			this->Controls->Add(this->op3cb);
			this->Controls->Add(this->op3txvalue);
			this->Controls->Add(this->op2cb);
			this->Controls->Add(this->op2txvalue);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->op1cb);
			this->Controls->Add(this->op1txvalue);
			this->Controls->Add(this->txoutput);
			this->Controls->Add(this->txmain);
			this->Controls->Add(this->txtitle);
			this->Controls->Add(this->txf);
			this->Controls->Add(this->txnum);
			this->Controls->Add(this->txp5ley);
			this->Controls->Add(this->txp5pasture);
			this->Controls->Add(this->txp5hay);
			this->Controls->Add(this->txp5roots);
			this->Controls->Add(this->txp5potatoes);
			this->Controls->Add(this->txp5oates);
			this->Controls->Add(this->txp5barley);
			this->Controls->Add(this->txp5sp);
			this->Controls->Add(this->txp5lambs);
			this->Controls->Add(this->txp5bc);
			this->Controls->Add(this->txp5hc);
			this->Controls->Add(this->txp5horses);
			this->Controls->Add(this->txp5sows);
			this->Controls->Add(this->txp5ewes);
			this->Controls->Add(this->label134);
			this->Controls->Add(this->label135);
			this->Controls->Add(this->label136);
			this->Controls->Add(this->label137);
			this->Controls->Add(this->label138);
			this->Controls->Add(this->label139);
			this->Controls->Add(this->label140);
			this->Controls->Add(this->label141);
			this->Controls->Add(this->label142);
			this->Controls->Add(this->label143);
			this->Controls->Add(this->label144);
			this->Controls->Add(this->label145);
			this->Controls->Add(this->label146);
			this->Controls->Add(this->label147);
			this->Controls->Add(this->txp5wheat);
			this->Controls->Add(this->txp5m);
			this->Controls->Add(this->label150);
			this->Controls->Add(this->txp5cows);
			this->Controls->Add(this->label152);
			this->Controls->Add(this->label153);
			this->Controls->Add(this->txp5name);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->txp4ley);
			this->Controls->Add(this->txp4pasture);
			this->Controls->Add(this->txp4hay);
			this->Controls->Add(this->txp4roots);
			this->Controls->Add(this->txp4potatoes);
			this->Controls->Add(this->txp4oates);
			this->Controls->Add(this->txp4barley);
			this->Controls->Add(this->txp4sp);
			this->Controls->Add(this->txp4lambs);
			this->Controls->Add(this->txp4bc);
			this->Controls->Add(this->txp4hc);
			this->Controls->Add(this->txp4horses);
			this->Controls->Add(this->txp4sows);
			this->Controls->Add(this->txp4ewes);
			this->Controls->Add(this->label100);
			this->Controls->Add(this->label101);
			this->Controls->Add(this->label102);
			this->Controls->Add(this->label103);
			this->Controls->Add(this->label104);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->label107);
			this->Controls->Add(this->label108);
			this->Controls->Add(this->label109);
			this->Controls->Add(this->label110);
			this->Controls->Add(this->label111);
			this->Controls->Add(this->label112);
			this->Controls->Add(this->label113);
			this->Controls->Add(this->txp4wheat);
			this->Controls->Add(this->txp4m);
			this->Controls->Add(this->label116);
			this->Controls->Add(this->txp4cows);
			this->Controls->Add(this->label118);
			this->Controls->Add(this->label119);
			this->Controls->Add(this->txp4name);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->txp3ley);
			this->Controls->Add(this->txp3pasture);
			this->Controls->Add(this->txp3hay);
			this->Controls->Add(this->txp3roots);
			this->Controls->Add(this->txp3potatoes);
			this->Controls->Add(this->txp3oates);
			this->Controls->Add(this->txp3barley);
			this->Controls->Add(this->txp3sp);
			this->Controls->Add(this->txp3lambs);
			this->Controls->Add(this->txp3bc);
			this->Controls->Add(this->txp3hc);
			this->Controls->Add(this->txp3horses);
			this->Controls->Add(this->txp3sows);
			this->Controls->Add(this->txp3ewes);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label73);
			this->Controls->Add(this->label74);
			this->Controls->Add(this->label75);
			this->Controls->Add(this->label76);
			this->Controls->Add(this->label77);
			this->Controls->Add(this->label78);
			this->Controls->Add(this->label79);
			this->Controls->Add(this->txp3wheat);
			this->Controls->Add(this->txp3m);
			this->Controls->Add(this->label82);
			this->Controls->Add(this->txp3cows);
			this->Controls->Add(this->label84);
			this->Controls->Add(this->label85);
			this->Controls->Add(this->txp3name);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->txp2ley);
			this->Controls->Add(this->txp2pasture);
			this->Controls->Add(this->txp2hay);
			this->Controls->Add(this->txp2roots);
			this->Controls->Add(this->txp2potatoes);
			this->Controls->Add(this->txp2oates);
			this->Controls->Add(this->txp2barley);
			this->Controls->Add(this->txp2sp);
			this->Controls->Add(this->txp2lambs);
			this->Controls->Add(this->txp2bc);
			this->Controls->Add(this->txp2hc);
			this->Controls->Add(this->txp2horses);
			this->Controls->Add(this->txp2sows);
			this->Controls->Add(this->txp2ewes);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->txp2wheat);
			this->Controls->Add(this->txp2m);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->txp2cows);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->txp2name);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->txp1ley);
			this->Controls->Add(this->txp1pasture);
			this->Controls->Add(this->txp1hay);
			this->Controls->Add(this->txp1roots);
			this->Controls->Add(this->txp1potatoes);
			this->Controls->Add(this->txp1oates);
			this->Controls->Add(this->txp1barley);
			this->Controls->Add(this->txp1sp);
			this->Controls->Add(this->txp1lambs);
			this->Controls->Add(this->txp1bc);
			this->Controls->Add(this->txp1hc);
			this->Controls->Add(this->txp1horses);
			this->Controls->Add(this->txp1sows);
			this->Controls->Add(this->txp1ewes);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txp1wheat);
			this->Controls->Add(this->txp1m);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txp1cows);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txp1name);
			this->Controls->Add(this->txpbar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Pnum);
			this->Controls->Add(this->pbar);
			this->Controls->Add(this->txpnum);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op1txvalue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op2txvalue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op3txvalue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op6txvalue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op5txvalue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op4txvalue))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}

private: System::Void Btnreset_Click(System::Object^  sender, System::EventArgs^  e) {
	//button for reset
	Reset();
}

private: System::Void Btnpnum_Click(System::Object^  sender, System::EventArgs^  e) {
	//button takes value from combobox and converts it to integer and displays player choice
	vars.pno = 0;
	this->txpnum->Text = Convert::ToString(this->Pnum->Text) + " players selected";
	vars.pnum = Convert::ToInt16(this->Pnum->Text);
	vars.pselect = 1;
	//disables combobox and button and runs card0
	this->Btnpnum->Enabled = 0;
	this->Pnum->Enabled = 0;
	this->Btnadv->Enabled = 1;
	Card0();
}

private: System::Void Btnadv_Click(System::Object^  sender, System::EventArgs^  e) {
	//increases click value by 1, runs game fn
	vars.click += 1;
	Game();
}

private: System::Void Btnnext_Click(System::Object^  sender, System::EventArgs^  e) {
	//increases card value by 1, sets clicks to 0 and resert pno, runs game fn
	vars.card += 1;
	vars.click = 0;
	vars.pno = 0;
	this->Btnnext->Enabled = 0;
	this->Btnadv->Enabled = 1;
	Game();
}

private: System::Void Reset() {
	//default setting and text for all labels and buttons etc on game start
	this->txtitle->Text = "WELCOME";
	this->txmain->Text = "Welcome to Farming. For this game you need at least 2 players, 1 dice and a calculator (or human equivalent).\nBasic rules: each card will be resolved as a whole action, not serval actions. Players may therefore not be in debt after any card, but may during a card. When resolving a card if an action cannot be done, it will be completed as well as possible. All players are subjected to stock limits of: 75 cows, 60 ewes, 20 sow and 4 horses to keep within ECC regulation. If any player goes above this limit they will be notified and stock reversed to the limit.";
	this->txoutput->Text = "Select the number of players in the drop down box in the top left corner and click the adjacent Select button.";
	this->txnum->Text = "##";
	this->txpnum->Text = "Number of Players";
	this->Pnum->Enabled = 1;
	this->Btnpnum->Enabled = 1;
	this->Btnnext->Enabled = 0;
	this->Btnreset->Enabled = 0;
	this->Btnadv->Enabled = 0;
	this->Btndroll->Enabled = 0;
	this->Btndselect->Enabled = 0;
	this->Dbox->Enabled = 0;
	this->op1cb->Enabled = 0;
	this->op2cb->Enabled = 0;
	this->op3cb->Enabled = 0;
	this->op4cb->Enabled = 0;
	this->op5cb->Enabled = 0;
	this->op6cb->Enabled = 0;
	this->op1txvalue->Enabled = 0;
	this->op2txvalue->Enabled = 0;
	this->op3txvalue->Enabled = 0;
	this->op4txvalue->Enabled = 0;
	this->op5txvalue->Enabled = 0;
	this->op6txvalue->Enabled = 0;
	this->txp1name->Enabled = 0;
	this->txp2name->Enabled = 0;
	this->txp3name->Enabled = 0;
	this->txp4name->Enabled = 0;
	this->txp5name->Enabled = 0;
	vars.pselect = 0;
	vars.pnum = 0;
	vars.card = 0;
	vars.click = 0;
	//players resets are done later
	//check python version for more
}

private: System::String^ str_sstr(string a){
	String^ b = gcnew String(a.c_str());
	return b;
}

private: System::String^ int_sstr(int a)
{
	String^ b = a.ToString();
	return b;
}

private: std::wstring int_wstr(int a)
{
	wstring b;
	wstringstream s;
	s >> a;
	s << b;
	//s.str("");
	s.clear();
	return b;
}

private: string int_str(int a)
{
	string b;
	stringstream s;
	s >> a;
	s << b;
	s.str("");
	s.clear();
	return b;
}

private: System::Void setvaluesz()
{
	System::Windows::Forms::Label^ a1, ^ b1, ^ c1, ^ d1, ^ e1, ^ f1, ^ g1, ^ h1, ^ i1, ^ j1, ^ k1, ^ l1, ^ m1, ^ n1, ^ o1, ^ p1, ^ q1;
	{
		int i = 0;
		while (i < 5)
		{
			switch (i)
			{
			case 0: a1 = this->txp1cows, b1 = this->txp1ewes, c1 = this->txp1sows, d1 = this->txp1horses, e1 = this->txp1hc, f1 = this->txp1bc, g1 = this->txp1lambs, h1 = this->txp1sp, i1 = this->txp1m, j1 = this->txp1wheat, k1 = this->txp1barley, l1 = this->txp1oates, m1 = this->txp1potatoes, n1 = this->txp1roots, o1 = this->txp1hay, p1 = this->txp1pasture, q1 = this->txp1ley; break;
			case 1: a1 = this->txp2cows, b1 = this->txp2ewes, c1 = this->txp2sows, d1 = this->txp2horses, e1 = this->txp2hc, f1 = this->txp2bc, g1 = this->txp2lambs, h1 = this->txp2sp, i1 = this->txp2m, j1 = this->txp2wheat, k1 = this->txp2barley, l1 = this->txp2oates, m1 = this->txp2potatoes, n1 = this->txp2roots, o1 = this->txp2hay, p1 = this->txp2pasture, q1 = this->txp2ley; break;
			case 2: a1 = this->txp3cows, b1 = this->txp3ewes, c1 = this->txp3sows, d1 = this->txp3horses, e1 = this->txp3hc, f1 = this->txp3bc, g1 = this->txp3lambs, h1 = this->txp3sp, i1 = this->txp3m, j1 = this->txp3wheat, k1 = this->txp3barley, l1 = this->txp3oates, m1 = this->txp3potatoes, n1 = this->txp3roots, o1 = this->txp1hay, p1 = this->txp3pasture, q1 = this->txp3ley; break;
			case 3: a1 = this->txp4cows, b1 = this->txp4ewes, c1 = this->txp4sows, d1 = this->txp4horses, e1 = this->txp4hc, f1 = this->txp4bc, g1 = this->txp4lambs, h1 = this->txp4sp, i1 = this->txp4m, j1 = this->txp4wheat, k1 = this->txp4barley, l1 = this->txp4oates, m1 = this->txp4potatoes, n1 = this->txp4roots, o1 = this->txp4hay, p1 = this->txp4pasture, q1 = this->txp4ley; break;
			case 4: a1 = this->txp5cows, b1 = this->txp5ewes, c1 = this->txp5sows, d1 = this->txp5horses, e1 = this->txp5hc, f1 = this->txp5bc, g1 = this->txp5lambs, h1 = this->txp5sp, i1 = this->txp5m, j1 = this->txp5wheat, k1 = this->txp5barley, l1 = this->txp5oates, m1 = this->txp5potatoes, n1 = this->txp5roots, o1 = this->txp5hay, p1 = this->txp5pasture, q1 = this->txp5ley; break;
			}
			System::Windows::Forms::Label^* pa1 = &a1, ^* pb1 = &b1, ^* pc1 = &c1, ^* pd1 = &d1, ^* pe1 = &e1, ^* pf1 = &f1, ^* pg1 = &g1, ^* ph1 = &h1, ^* pi1 = &i1, ^* pj1 = &j1, ^* pk1 = &k1, ^* pl1 = &l1, ^* pm1 = &m1, ^* pn1 = &n1, ^* po1 = &o1, ^* pp1 = &p1, ^* pq1 = &q1;
			System::Windows::Forms::Label^* fpset[17] = { pa1,pb1,pc1,pd1,pe1,pf1,pg1,ph1,pi1,pj1,pk1,pl1,pm1,pn1,po1,pp1,pq1 };
			int j = 0;
			while (j < 17)
			{
				int o = 0;
				auto p = *fpset[j];
				p->Text = o.ToString();
				j++;
			}
			i++;
		}
	}
	
	//vector <System::Windows::Forms::Label^> fpset2{ this->txp2cows,this->txp2ewes,this->txp2sows,this->txp2horses,this->txp2hc,this->txp2bc,this->txp2lambs,this->txp2sp,this->txp2m,this->txp2wheat,this->txp2barley,this->txp2oates,this->txp2potatoes,this->txp2roots,this->txp2hay,this->txp2pasture,this->txp2ley };
	//vector <System::Windows::Forms::Label^> fpset3{ this->txp3cows,this->txp3ewes,this->txp3sows,this->txp3horses,this->txp3hc,this->txp3bc,this->txp3lambs,this->txp3sp,this->txp3m,this->txp3wheat,this->txp3barley,this->txp3oates,this->txp3potatoes,this->txp3roots,this->txp3hay,this->txp3pasture,this->txp3ley };
	//vector <System::Windows::Forms::Label^> fpset4{ this->txp4cows,this->txp4ewes,this->txp4sows,this->txp4horses,this->txp4hc,this->txp4bc,this->txp4lambs,this->txp4sp,this->txp4m,this->txp4wheat,this->txp4barley,this->txp4oates,this->txp4potatoes,this->txp4roots,this->txp4hay,this->txp4pasture,this->txp4ley };
	//vector <System::Windows::Forms::Label^> fpset5{ this->txp5cows,this->txp5ewes,this->txp5sows,this->txp5horses,this->txp5hc,this->txp5bc,this->txp5lambs,this->txp5sp,this->txp5m,this->txp5wheat,this->txp5barley,this->txp5oates,this->txp5potatoes,this->txp5roots,this->txp5hay,this->txp5pasture,this->txp5ley };
	//vector <vector <System::Windows::Forms::Label^> > fpset{ fpset1,fpset2,fpset3,fpset3,fpset4,fpset5 };
}

private: System::Void setvaluesd()
{
	System::Windows::Forms::Label^ a1, ^ b1, ^ c1, ^ d1, ^ i1, ^ n1, ^ o1, ^ p1;
	{
		int i = 0;
		while (i < vars.pnum)
		{
			switch (i)
			{
			case 0: a1 = this->txp1cows, b1 = this->txp1ewes, c1 = this->txp1sows, d1 = this->txp1horses, i1 = this->txp1m, n1 = this->txp1roots, o1 = this->txp1hay, p1 = this->txp1pasture; break;
			case 1: a1 = this->txp2cows, b1 = this->txp2ewes, c1 = this->txp2sows, d1 = this->txp2horses, i1 = this->txp2m, n1 = this->txp2roots, o1 = this->txp2hay, p1 = this->txp2pasture; break;
			case 2: a1 = this->txp3cows, b1 = this->txp3ewes, c1 = this->txp3sows, d1 = this->txp3horses, i1 = this->txp3m, n1 = this->txp3roots, o1 = this->txp1hay, p1 = this->txp3pasture; break;
			case 3: a1 = this->txp4cows, b1 = this->txp4ewes, c1 = this->txp4sows, d1 = this->txp4horses, i1 = this->txp4m, n1 = this->txp4roots, o1 = this->txp4hay, p1 = this->txp4pasture; break;
			case 4: a1 = this->txp5cows, b1 = this->txp5ewes, c1 = this->txp5sows, d1 = this->txp5horses, i1 = this->txp5m, n1 = this->txp5roots, o1 = this->txp5hay, p1 = this->txp5pasture; break;
			}
			System::Windows::Forms::Label^* pa1 = &a1, ^* pb1 = &b1, ^* pc1 = &c1, ^* pd1 = &d1, ^* pi1 = &i1, ^* pn1 = &n1, ^* po1 = &o1, ^* pp1 = &p1;
			System::Windows::Forms::Label^* fpset[17] = { pa1,pb1,pc1,pd1,pi1,pn1,po1,pp1 };
			int j;
			int o[8] = { 60,50,16,2,1500,1,4,5 };
			for (j = 0; j < 8; j++)
			{
				int p = o[j];
				auto q = *fpset[j];
				q->Text = p.ToString();
			}
			i++;
		}
	}
}

private: System::Void setcard()
{
	this->txnum->Text = cset.at(vars.card).getnum().ToString();
	this->txtitle->Text = str_sstr(cset.at(vars.card).gettitle());
	this->txmain->Text = str_sstr(cset.at(vars.card).getmain());
	this->txoutput->Text = str_sstr(cset.at(vars.card).getout());
}

private: System::Void op_enable(int a, int b)
{
	int i = 0;
	while (i < a)
	{
		switch (i)
		{
		case 0: this->op1cb->Enabled = 1; if (b == 1) { this->op1txvalue->Enabled = 1; }; break;
		case 1: this->op2cb->Enabled = 1; if (b == 1) { this->op2txvalue->Enabled = 1; }; break;
		case 2:	this->op3cb->Enabled = 1; if (b == 1) { this->op3txvalue->Enabled = 1; }; break;
		case 3: this->op4cb->Enabled = 1; if (b == 1) { this->op4txvalue->Enabled = 1; }; break;
		case 4: this->op5cb->Enabled = 1; if (b == 1) { this->op5txvalue->Enabled = 1; }; break;
		case 5: this->op6cb->Enabled = 1; if (b == 1) { this->op6txvalue->Enabled = 1; }; break;
		}
		i++;
	}
}

private: System::Void op_disable(int a)
{
	int i = 0;
		while (i < a)
		{
			switch (i)
			{
			case 0: this->op1cb->Enabled = 0; this->op1txvalue->Enabled = 0; break;
			case 1: this->op2cb->Enabled = 0; this->op2txvalue->Enabled = 0; break;
			case 2:	this->op3cb->Enabled = 0; this->op3txvalue->Enabled = 0; break;
			case 3: this->op4cb->Enabled = 0; this->op4txvalue->Enabled = 0; break;
			case 4: this->op5cb->Enabled = 0; this->op5txvalue->Enabled = 0; break;
			case 5: this->op6cb->Enabled = 0; this->op6txvalue->Enabled = 0; break;
			}
			i++;
		}
}

private: System::Void op_text(int a)
{
	int i = 0;
	while (i < a)
	{
		switch (i)
		{
		case 0: this->op1cb->Text = str_sstr(txcard.getop(vars.opvalue)); break;
		case 1: this->op2cb->Text = str_sstr(txcard.getop(vars.opvalue)); break;
		case 2: this->op3cb->Text = str_sstr(txcard.getop(vars.opvalue)); break;
		case 3: this->op4cb->Text = str_sstr(txcard.getop(vars.opvalue)); break;
		case 4: this->op5cb->Text = str_sstr(txcard.getop(vars.opvalue)); break;
		case 5: this->op6cb->Text = str_sstr(txcard.getop(vars.opvalue)); break;
		}
		i++;
		vars.opvalue += 1;
	}
}

private: int op_get(int a)
{
	a -= 1;
	int b;
	switch (a)
	{
	case 0: b = (int)this->op1txvalue->Value; break;
	case 1: b = (int)this->op2txvalue->Value; break;
	case 2: b = (int)this->op3txvalue->Value; break;
	case 3: b = (int)this->op4txvalue->Value; break;
	case 4: b = (int)this->op5txvalue->Value; break;
	case 5: b = (int)this->op6txvalue->Value; break;
	}
	return b;
}

private: System::Void btn_switch()
{
	this->Btnnext->Enabled = 1;
	this->Btnadv->Enabled = 0;
}

private: System::Void values(int p, string a, int b)
{
	//p -= 1;
	System::Windows::Forms::Label^ c;
	int d;
	string e[17] = { "cows","ewes","sows","horses","hc","bc","lambs","sp","wheat","barley","oates","potatoes","roots","hay","pasture","ley" };
	if (a == e[0]) { d = 0; }
	else if (a == e[1]) { d = 1; }
	else if (a == e[2]) { d = 2; }
	else if (a == e[3]) { d = 3; }
	else if (a == e[4]) { d = 4; }
	else if (a == e[5]) { d = 5; }
	else if (a == e[6]) { d = 6; }
	else if (a == e[7]) { d = 7; }
	else if (a == e[8]) { d = 8; }
	else if (a == e[9]) { d = 9; }
	else if (a == e[10]) { d = 10; }
	else if (a == e[11]) { d = 11; }
	else if (a == e[12]) { d = 12; }
	else if (a == e[13]) { d = 13; }
	else if (a == e[14]) { d = 14; }
	else if (a == e[15]) { d = 15; }
	else { d = 16; }
	switch (p)
	{
		case 0: switch (d)
		{
			case 0: c = this->txp1cows; break;
			case 1: c = this->txp1ewes; break;
			case 2: c = this->txp1sows; break;
			case 3: c = this->txp1horses; break;
			case 4: c = this->txp1hc; break;
			case 5: c = this->txp1bc; break;
			case 6: c = this->txp1lambs; break;
			case 7: c = this->txp1sp; break;
			case 8: c = this->txp1wheat; break;
			case 9: c = this->txp1barley; break;
			case 10: c = this->txp1oates; break;
			case 11: c = this->txp1potatoes; break;
			case 12: c = this->txp1roots; break;
			case 13: c = this->txp1hay; break;
			case 14: c = this->txp1pasture; break;
			case 15: c = this->txp1ley; break;
			case 16: c = this->txp1m; break;
		}; break;
		case 1: switch (d)
		{
			case 0: c = this->txp2cows; break;
			case 1: c = this->txp2ewes; break;
			case 2: c = this->txp2sows; break;
			case 3: c = this->txp2horses; break;
			case 4: c = this->txp2hc; break;
			case 5: c = this->txp2bc; break;
			case 6: c = this->txp2lambs; break;
			case 7: c = this->txp2sp; break;
			case 8: c = this->txp2wheat; break;
			case 9: c = this->txp2barley; break;
			case 10: c = this->txp2oates; break;
			case 11: c = this->txp2potatoes; break;
			case 12: c = this->txp2roots; break;
			case 13: c = this->txp2hay; break;
			case 14: c = this->txp2pasture; break;
			case 15: c = this->txp2ley; break;
			case 16: c = this->txp2m; break;
		}; break;
		case 2: switch (d)
		{
			case 0: c = this->txp3cows; break;
			case 1: c = this->txp3ewes; break;
			case 2: c = this->txp3sows; break;
			case 3: c = this->txp3horses; break;
			case 4: c = this->txp3hc; break;
			case 5: c = this->txp3bc; break;
			case 6: c = this->txp3lambs; break;
			case 7: c = this->txp3sp; break;
			case 8: c = this->txp3wheat; break;
			case 9: c = this->txp3barley; break;
			case 10: c = this->txp3oates; break;
			case 11: c = this->txp3potatoes; break;
			case 12: c = this->txp3roots; break;
			case 13: c = this->txp3hay; break;
			case 14: c = this->txp3pasture; break;
			case 15: c = this->txp3ley; break;
			case 16: c = this->txp3m; break;
		}; break;
		case 3: switch (d)
		{
			case 0: c = this->txp4cows; break;
			case 1: c = this->txp4ewes; break;
			case 2: c = this->txp4sows; break;
			case 3: c = this->txp4horses; break;
			case 4: c = this->txp4hc; break;
			case 5: c = this->txp4bc; break;
			case 6: c = this->txp4lambs; break;
			case 7: c = this->txp4sp; break;
			case 8: c = this->txp4wheat; break;
			case 9: c = this->txp4barley; break;
			case 10: c = this->txp4oates; break;
			case 11: c = this->txp4potatoes; break;
			case 12: c = this->txp4roots; break;
			case 13: c = this->txp4hay; break;
			case 14: c = this->txp4pasture; break;
			case 15: c = this->txp4ley; break;
			case 16: c = this->txp4m; break;
		}; break;
		case 4: switch (d)
		{
			case 0: c = this->txp5cows; break;
			case 1: c = this->txp5ewes; break;
			case 2: c = this->txp5sows; break;
			case 3: c = this->txp5horses; break;
			case 4: c = this->txp5hc; break;
			case 5: c = this->txp5bc; break;
			case 6: c = this->txp5lambs; break;
			case 7: c = this->txp5sp; break;
			case 8: c = this->txp5wheat; break;
			case 9: c = this->txp5barley; break;
			case 10: c = this->txp5oates; break;
			case 11: c = this->txp5potatoes; break;
			case 12: c = this->txp5roots; break;
			case 13: c = this->txp5hay; break;
			case 14: c = this->txp5pasture; break;
			case 15: c = this->txp5ley; break;
			case 16: c = this->txp5m; break;
		}; break;
	}
	c->Text = b.ToString();
}
		 
private: System::Void Card0() {
	//make sure number of players selected
	if (vars.pselect == 1)
	{
		if (vars.click == 0)
		{
			//enables player entry
			this->txp1name->Enabled = 1;
			this->txp2name->Enabled = 1;
			this->txp3name->Enabled = 1;
			this->txp4name->Enabled = 1;
			this->txp5name->Enabled = 1;
			this->txoutput->Text = str_sstr(cset.at(0).getout());
		}
		else
			if (vars.click == 1)
			{
				//disables player entry
				this->txp1name->Enabled = 0;
				this->txp2name->Enabled = 0;
				this->txp3name->Enabled = 0;
				this->txp4name->Enabled = 0;
				this->txp5name->Enabled = 0;
				//dice set up: text, enable checkbox options, reset clicks, enable next button, diables advance button
				op_enable(2, 0);
				op_text(2);
				this->txoutput->Text = str_sstr(cset.at(0).getout1());
				//instances for players
				while (vars.pno < vars.pnum)
				{
					//create p1 instances and name transfer
					if (vars.pno == 0) {
						string name = msclr::interop::marshal_as<string>(this->txp1name->Text);
						Players p1(name);
						vars.nset[0] = name;
						iset.push_back(name);
					}
					//p2 and so on
					else
					if (vars.pno == 1) {
						string name = msclr::interop::marshal_as<string>(this->txp2name->Text);
						Players p2(name);
						vars.nset[1] = name;
						iset.push_back(name);
					}
					else
					if (vars.pno == 1) {
						string name = msclr::interop::marshal_as<string>(this->txp3name->Text);
						Players p3(name);
						vars.nset[2] = name;
						iset.push_back(name);
					}
					else
					if (vars.pno == 1) {
						string name = msclr::interop::marshal_as<string>(this->txp4name->Text);
						Players p4(name);
						vars.nset[3] = name;
						iset.push_back(name);
					}
					else
					if (vars.pno == 1) {
						string name = msclr::interop::marshal_as<string>(this->txp5name->Text);
						Players p5(name);
						vars.nset[4] = name;
						iset.push_back(name);
					}
					vars.pno++;
				}//while
			}//click
			else
			{
				//take dice options, disable option, change button states, output choice
				bool opv1 = this->op1cb->Checked;
				bool opv2 = this->op2cb->Checked;
				string tx;
				if (opv1 == true && opv2 == false) {
					vars.duse = 1;
					tx = cset.at(0).getout2();//"Players have selected to use the computer dice.";
				}
				else
				if ((opv1 == false && opv2 == false) || (opv1 == true && opv2 == true) || (opv1 == false && opv2 == true))
				{
					vars.duse = 0;
					tx = cset.at(0).getout3();//"Players have selected to use their own dice.";
				}
				else { tx = "Error Card0"; }
				this->txoutput->Text = gcnew String(tx.c_str());
				op_disable(2);
				btn_switch();
			}//click else
	}//pselect
	else {
		this->txoutput->Text = "ERROR Card0"; //card0 error for pselect !=0
	}//else pselect
}

private: System::Void Card01() {
	//define values
	string tx;
	String^ tx2;
	//player values reset and picking crops
	if (vars.click == 0)
	{
		//card 1- text set up for card number, title, main and output text
		setcard();
		//loop to set default amounts for players in game
		setvaluesz();
		setvaluesd();
		vars.pno = 0;
		vars.er = 0;
	}
	//take values from options and trasnfer them to text and internal values
	if (vars.click > 1)
	{
		//auto y = iset.at(vars.pno);
		int a = op_get(1);
		int b = op_get(2);
		int c = op_get(3);
		int d = op_get(4);
		int e = op_get(5);
		iset.at(vars.pno).setwheat(a);
		iset.at(vars.pno).setbarley(b);
		iset.at(vars.pno).setoates(c);
		iset.at(vars.pno).setpotatoes(d);
		int f = 10 - a - b - c - d;
		if (f < e) { e = e; }
		else { e = f; }
		iset.at(vars.pno).setley(e);
		values(vars.pno, "wheat", a);
		values(vars.pno, "barley", b);
		values(vars.pno, "oates", c);
		values(vars.pno, "potatoes", d);
		values(vars.pno, "ley", e);
		if ((a+b+c+d+e) > 10){ vars.er = 1; }
		else { vars.er = 0; vars.pno += 1; }
	}
	//crop picking- check correct click and to cap at pnum
	if ((vars.click > 0) & (vars.pno < vars.pnum))
	{
		if (vars.click == 1)
		{
			//enable options and set text
			op_enable(5, 1);
			op_text(5);
		}
		//text for players to pick crops
		if (vars.er == 1) { tx = "Player " + vars.nset[vars.pno] + cset.at(vars.card).getout2(); }
		else { tx = "Player " + vars.nset[vars.pno] + cset.at(vars.card).getout1(); }
		this->txoutput->Text = str_sstr(tx);
	}
	if ((vars.click > 0) & (vars.pno >= vars.pnum))
	{
		//change button states, disable options
		op_disable(5);
		btn_switch();
		//set text for what players have chossen
		tx2 = str_sstr(cset.at(vars.card).getout3());
		int x;
		for (x = 0; x < vars.pnum; x++)
		{
			tx2 = tx2 + "\nPlayer " + str_sstr(vars.nset[x]) + " has picked " + iset.at(x).getwheat().ToString() + "x10 acres of wheat, " + iset.at(x).getbarley().ToString() + "x10 acres of barley, "+ iset.at(x).getoates().ToString() + "x10 acres of oates, "+ iset.at(x).getpotatoes().ToString() + "x10 acres of potatoes and "+ iset.at(x).getley().ToString() + "x10 acres of ley.";
		}
		this->txoutput->Text = tx2;
	}
}

private: System::Void Card02() {
	//define values
	String^ tx;
	if (vars.click == 0)
	{
		//card 2- set text
		setcard();
	}
	if (vars.click == 1)
	{
		tx = str_sstr(cset.at(vars.card).getout());
		int x;
		for (x = 0; x < vars.pnum; x++)
		{
			//get values needed to work out money to pay
			int a = iset.at(x).getley();
			int b = iset.at(x).getpotatoes();
			int c = iset.at(x).getroots();
			//money calculation
			int m1 = ceil((100 / 3.0) * a + 15 * 10 * b);
			//int m1 = static_cast<int>(m11);
			int m2 = 10 * (b + c) * 10;
			//take money for internal
			iset.at(x).setmoney(iset.at(x).getmoney() - m1 - m2);
			//set money external
			values(x, "money", iset.at(vars.pno).getmoney());
			//set text
			tx = tx + "\nPlayer " + str_sstr(vars.nset[x]) + " has paid £" + m1.ToString() + " for seeds and £" + m2.ToString() + " for FYM, totalling £" + (m1 + m2).ToString() + ".";
			vars.pno += 1;
		}
		//output text, change button states
		this->txoutput->Text = tx;
		btn_switch();
	}
}

private: System::Void Game() {
	switch (vars.card)
	{
	case 0: Card0(); break;
	case 1: Card01(); break;
	case 2: Card02(); break;
	}
}
};
}
//wstring b = int_wstr(i);
//OutputDebugString(b.c_str());