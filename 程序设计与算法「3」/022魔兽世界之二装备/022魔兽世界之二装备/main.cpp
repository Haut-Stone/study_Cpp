//
//  main.cpp
//  022魔兽世界之二装备
//
//  Created by Jack Lee on 16/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
//#define OUT freopen("/Users/li/Desktop/out.txt", "w", stdout);

using namespace std;

class Camp
{
public:
	static int timeNow;
	int getLifeElement();
	void reduceLE(int n);
	int getAllWarriorNumber();
	int getWarriorConsume(string type);
	int getWarriorNumber(string type);
	int getNextPos();
	void setLifeElement(int n);
	void setWarriorNumber(string type);
	void setNextPos(int n);
	void setWarriorConsume(int DC, int NC, int IC, int LC, int WC);
	Camp(int LE=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0)
	:lifeElement(LE),allWarriorNumber(0),dragonNumber(0),ninjaNumber(0),iceManNumber(0),loinNumber(0),wolfNumber(0),nextPos(0)
	{};
	~Camp(){};
private:
	int nextPos;
	int lifeElement;
	int allWarriorNumber;
	int dragonNumber;
	int ninjaNumber;
	int iceManNumber;
	int loinNumber;
	int wolfNumber;
	int dragonConsume;
	int ninjaConsume;
	int iceManConsume;
	int loinConsume;
	int wolfConsume;
};

class RedCamp:public Camp
{
public:
	void makeWarrior();
	void print(string type);
	RedCamp(int LE):Camp(LE){
		sequence[0] = "iceman";
		sequence[1] = "lion";
		sequence[2] = "wolf";
		sequence[3] = "ninja";
		sequence[4] = "dragon";
	};
	~RedCamp(){};
private:
	string sequence[5];
};

class BlueCamp:public Camp
{
public:
	void makeWarrior();
	void print(string type);
	BlueCamp(int LE):Camp(LE){
		sequence[0] = "lion";
		sequence[1] = "dragon";
		sequence[2] = "ninja";
		sequence[3] = "iceman";
		sequence[4] = "wolf";
	};
	~BlueCamp(){};
private:
	string sequence[5];
};


int Camp::timeNow = 0;

int Camp::getLifeElement()
{
	return lifeElement;
}

int Camp::getAllWarriorNumber()
{
	return allWarriorNumber;
}

void Camp::setLifeElement(int n)
{
	lifeElement = n;
}

void Camp::setWarriorConsume(int DC, int NC, int IC, int LC, int WC)
{
	dragonConsume = DC;
	ninjaConsume = NC;
	iceManConsume = IC;
	loinConsume = LC;
	wolfConsume = WC;
}

void Camp::reduceLE(int n)
{
	lifeElement -= n;
}

void Camp::setNextPos(int n)
{
	nextPos = n;
}

int Camp::getNextPos()
{
	return nextPos;
}

void RedCamp::print(string type)
{
	cout.setf(ios::right);
	cout.fill('0');
	cout.width(3);
	cout<<timeNow<<" red "<<type<<" "<<getAllWarriorNumber()<<" born with strength "<< getWarriorConsume(type)<<","<<getWarriorNumber(type)<<" "<<type<<" in red headquarter"<<endl;
}

void BlueCamp::print(string type)
{
	cout.setf(ios::right);
	cout.fill('0');
	cout.width(3);
	cout<<timeNow<<" blue "<<type<<" "<<getAllWarriorNumber()<<" born with strength "<< getWarriorConsume(type)<<","<<getWarriorNumber(type)<<" "<<type<<" in blue headquarter"<<endl;
}

int Camp::getWarriorConsume(string type)
{
	if(type == "lion") return loinConsume;
	if(type == "dragon") return dragonConsume;
	if(type == "iceman") return iceManConsume;
	if(type == "ninja") return ninjaConsume;
	if(type == "wolf") return wolfConsume;
	return 0;
}

int Camp::getWarriorNumber(string type)
{
	if(type == "lion") return loinNumber;
	if(type == "dragon") return dragonNumber;
	if(type == "iceman") return iceManNumber;
	if(type == "ninja") return ninjaNumber;
	if(type == "wolf") return wolfNumber;
	return 0;
}

void Camp::setWarriorNumber(string type)
{
	if(type == "lion") loinNumber++;
	if(type == "dragon") dragonNumber++;
	if(type == "iceman") iceManNumber++;
	if(type == "ninja") ninjaNumber++;
	if(type == "wolf") wolfNumber++;
	allWarriorNumber++;
}

void RedCamp::makeWarrior()
{
	int LENow = getLifeElement();
	int cnt = 0;
	for(int i=getNextPos();i<5;i++){
		if(LENow >= getWarriorConsume(sequence[i])){
			setWarriorNumber(sequence[i]);
			reduceLE(getWarriorConsume(sequence[i]));
			print(sequence[i]);
			setNextPos((i+1)%5);
			break;
		}
		cnt++;
		if(cnt < 5 && i == 4) i = -1;
		if(cnt >= 5){
			setLifeElement(-1);
			cout.setf(ios::right);
			cout.fill('0');
			cout.width(3);
			cout<<timeNow<<" red headquarter stops making warriors"<<endl;
			break;
		}
	}
}

void BlueCamp::makeWarrior()
{
	int LENow = getLifeElement();
	int cnt = 0;
	for(int i=getNextPos();i<5;i++){
		if(LENow >= getWarriorConsume(sequence[i])){
			setWarriorNumber(sequence[i]);
			reduceLE(getWarriorConsume(sequence[i]));
			print(sequence[i]);
			setNextPos((i+1)%5);
			break;
		}
		cnt++;
		if(cnt < 5 && i == 4) i = -1;
		if(cnt >= 5){
			setLifeElement(-1);
			cout.setf(ios::right);
			cout.fill('0');
			cout.width(3);
			cout<<timeNow<<" blue headquarter stops making warriors"<<endl;
			break;
		}
	}
}

int main(void) {
	//	OUT;
	int T;
	cin>>T;
	for(int cas=1;cas<=T;cas++){
		int lifeElementNumber;
		int DC, NC, IC, LC, WC;
		cin>>lifeElementNumber;
		cin>>DC>>NC>>IC>>LC>>WC;
		RedCamp red(lifeElementNumber);
		BlueCamp blue(lifeElementNumber);
		red.setWarriorConsume(DC, NC, IC, LC, WC);
		blue.setWarriorConsume(DC, NC, IC, LC, WC);
		cout<<"Case:"<<cas<<endl;
		Camp::timeNow = 0;
		while(red.getLifeElement() >= 0 && blue.getLifeElement() >= 0){
			red.makeWarrior();
			blue.makeWarrior();
			Camp::timeNow++;
		}
		if(red.getLifeElement() < 0){
			while(blue.getLifeElement() > 0){
				blue.makeWarrior();
				Camp::timeNow++;
			}
		}
		if(blue.getLifeElement() < 0){
			while(red.getLifeElement() > 0){
				red.makeWarrior();
				Camp::timeNow++;
			}
		}
	}
	return 0;
}

