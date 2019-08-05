//classes file
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

//class that contains functions that interact with the interfacee 
class Vars
{
	//varibles used by interface and internally that aren't player specific
public:
	int pnum = 0;
	int card = 0;
	int click = 0;
	int pselect = 0;
	int pno = 0;
	int duse = 0;

	//player instances sets - contains player instances starts and names
	string nset[5];
	//int isett[5] = { 0,0,0,0,0 };
	int er = 0;
	int txvalue = 0;
	int opvalue = 0;
};

//player class contain plays stats
class Players
{
	//players class giving stock, crops, money and ingame
private:
	int cows = 60; int ewes = 50; int sows = 16; int horses = 2;
	int hc = 0; int bc = 0; int lambs = 0; int sp = 0;
	int wheat = 0; int barley = 0; int oates = 0; int potatoes = 0;
	int roots = 1; int hay = 4; int pasture = 5; int ley = 0;
	int money = 1500;
	int ingame = 1;
	string name;
public:
	Players::Players(string name)
	{
		this->name = name;
	}
	Players::~Players() {}
	int getcows() { return cows; }
	void setcows(int cows2) { cows = cows2; }
	int getewes() { return ewes; }
	void setewes(int ewes2) { ewes = ewes2; }
	int getsows() { return sows; }
	void setsows(int sows2) { sows = sows2; }
	int gethorses() { return horses; }
	void sethorses(int horses2) { horses = horses2; }
	int gethc() { return hc; }
	void sethc(int hc2) { hc = hc2; }
	int getbc() { return bc; }
	void setbc(int bc2) { bc = bc2; }
	int getlambs() { return lambs; }
	void setlambs(int lambs2) { cows = lambs2; }
	int getsp() { return sp; }
	void setsp(int sp2) { sp = sp2; }
	int getwheat() { return wheat; }
	void setwheat(int wheat2) { wheat = wheat2; }
	int getbarley() { return barley; }
	void setbarley(int barley2) { barley = barley2; }
	int getoates() { return oates; }
	void setoates(int oates2) { oates = oates2; }
	int getpotatoes() { return potatoes; }
	void setpotatoes(int potatoes2) { potatoes = potatoes2; }
	int getley() { return ley; }
	void setley(int ley2) { ley = ley2; }
	int getroots() { return roots; }
	int gethay() { return hay; }
	int getpasture() { return pasture; }
	int getmoney() { return money; }
	void setmoney(int money2) { money = money2; }
	int getingame() { return ingame; }
	void outgame(int ingame2) { ingame = ingame2; }
	string getname() { return name; }
};
//class P1 : public Players
//{
//	//derviated from Players and changes ingame to 1 and gives player an id; for player 1; instance initilisation and passes player name
//private:
//	int ingame = 1;
//	const int id = 1;
//	string name = "";
//public:
//	void setname(string name2) { name = name2; }
//	void outgame(int game) { ingame = game; }
//};
//class P2 : public Players
//{
//private:
//	int ingame = 1;
//	const int id = 2;
//	string name = "";
//public:
//	void setname(string name2) { name = name2; }
//	void outgame(int game) { ingame = game; }
//};
//class P3 : public Players
//{
//private:
//	int ingame = 1;
//	const int id = 3;
//	string name = "";
//public:
//	void setname(string name2) { name = name2; }
//	void outgame(int game) { ingame = game; }
//};
//class P4 : public Players
//{
//private:
//	int ingame = 1;
//	const int id = 4;
//	string name = "";
//public:
//	void setname(string name2) { name = name2; }
//	void outgame(int game) { ingame = game; }
//};
//class P5 : public Players
//{
//private:
//	int ingame = 1;
//	const int id = 5;
//	string name = "";
//public:
//	void setname(string name2) { name = name2; }
//	void outgame(int game) { ingame = game; }
//};

class Cards
{
private:
	string cardm;
	float cardnum;
	string cardt;
	string cardo;
	string cardo1;
	string cardo2;
	string cardo3;
	public:
		float getnum() { return cardnum; }
		string gettitle() { return cardt; }
		string getmain() { return cardm; }
		string getout() { return cardo; }
		string getout1() { return cardo1; }
		string getout2() { return cardo2; }
		string getout3() { return cardo3; }

		Cards::Cards(float cnum, string ctxt, string ctxm, string ctxo, string ctxo1, string ctxo2, string ctxo3)
		{
			this->cardm = ctxm;
			this->cardnum = cnum;
			this->cardt = ctxt;
			this->cardo = ctxo;
			this->cardo1 = ctxo1;
			this->cardo2 = ctxo2;
			this->cardo3 = ctxo3;
		}
		/*Cards::Cards(float cnum, string ctxt, string ctxm, string ctxo, string ctxo1, string ctxo2)
		{
			this->cardm = ctxm;
			this->cardnum = cnum;
			this->cardt = ctxt;
			this->cardo = ctxo;
			this->cardo1 = ctxo1;
			this->cardo2 = ctxo2;
		}*/
		Cards::Cards(float cnum, string ctxt, string ctxm, string ctxo, string ctxo1)
		{
			this->cardm = ctxm;
			this->cardnum = cnum;
			this->cardt = ctxt;
			this->cardo = ctxo;
			this->cardo1 = ctxo1;
		}
		Cards::~Cards() {}
};

class Cardn :public Cards
{
private:
	string cardfrontcol = "bk";
};

class Cardh :public Cards
{
private:
	string cardfontcol = "r";
	int dvalue = 0;
};

class Cardss :public Cards
{
private:
	int v = 0;
};

class Txcards
{
private:
	vector <float> cnums{};

	//card0
	string txt0 = " ";
	string txm0 = " ";
	string txo0[4] = { "Players, please enter your names in the corresponding players boxes and then click Advance.","Do players want to use a dice or to use the random dice on the computer? If you want to use the computer dice select \'yes\' below, if you want to use your own dice select \'no\', if no option or both options are selected it is assumed you are using your own dice. After selecting an option click the Advance button.","Players have selected to use the computer dice.\nClick the Next Card button to start the game.","Players have selected to use their own dice. \nClick the Next Card button to start the game." };

	//card1
	string txt1 = "STARTING STOCK AND CASH AND CROPPING RETURN";
	string txm1 = "Each farmer receives 60 cows, 50 ewes, 16 sows and 2 horses, and £1,500 in money, and the remainder of stock and cash is put in the auction and the bank.\nEach farmer receives a card representing 100 acres of roots, hay and pasture, and in turn chooses their crops for the remaining 10 fields of 10 acres each that they are farming, and obtains cards for them from the Auction Ring.";
	string txo1[4] = { "Click the Advance button to begin picking your crops."," please pick the amount of Wheat, Barley, Oates, Potatoes and Ley you want for the year and then click Advance."," has selected more than 10x10 acres. Please re-enter your values.","Players have picked their crops." };

	//card 2
	string txt2 = "SEED AND FARMYARD MANURE";
	string txm2 = "Seed. Purchase seeds for your clover leys on 30 acres for £100, which you pay to the bank. Purchase your seed potatoes at a cost of £15 for each acres which you are planting, and pay the money to the bank.\nFarmyard Manure. You require £10 worth of \"F.Y.M.\" for each acre of root and potatoes that you are growing this year. Purchase this from the outgoing farmer, and pay the money to the bank.";
	string txo2[2] = { "Click the Advance button to pay your seed and farmyard manure costs.","Players have paid their seed and farmyard manure costs and they paid:" };

	vector <string> tarray = { txt0,txt1,txt2 };
	vector <string> marray = { txm0,txm1,txm2 };
	string txop[7] = { "Yes","No","Wheat (10 acres)","Barley (10 acres)","Oates (10 acres)","Pototes (10 acres)","Ley (10 acres)" };

public:
	 Txcards::Txcards(int a)
	{
		int b = a;
		float i = 0.0;
		while (i < 53)
		{
			cnums.push_back(i);
			i++;
		}
		cnums.insert(cnums.begin() + 49, 48.5);
		cnums.insert(cnums.begin() + 42, 41.5);
		cnums.insert(cnums.begin() + 41, 40.5);
		cnums.insert(cnums.begin() + 32, 31.5);
		cnums.insert(cnums.begin() + 31, 30.5);
		cnums.insert(cnums.begin() + 10, 9.3);
		cnums.insert(cnums.begin() + 11, 9.6);
		cnums.insert(cnums.begin() + 7, 6.5);
	}
	 Txcards::~Txcards() {}
	float getcnum(int a)
	{
		float b = cnums[a];
		return b;
	}
	string gettarray(int a)
	{
		string b = tarray[a];
		return b;
	}
	string getmarray(int a)
	{
		string b = marray[a];
		return b;
	}
	string getop(int a) { return txop[a]; }
	string gettxo0(int a) { return txo0[a]; }
	string gettxo1(int a) { return txo1[a]; }
	string gettxo2(int a) { return txo2[a]; }
};

