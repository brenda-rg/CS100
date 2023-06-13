#include <vector>
#include <string>
#include <stdexcept>

#include "../header/KooalaText.h"

using namespace std;

KooalaText::KooalaText(){
	this->text="";
	this->prepend="";
}

KooalaText::KooalaText(string text) {
	this->text=move(text);
	this->prepend="";
}

void KooalaText::setText(string new_val){
	this->text = move(new_val);
}

void KooalaText::setPrepend(string new_val){
	if (new_val.size()<=5) {
		this->prepend = move(new_val);
	}
	else {
		throw invalid_argument("KooalaText Prepend size cannot be larger than 5");
	}
}

string KooalaText::getText(){
	return this->text;
}

string KooalaText::getString(){
	return this->prepend + this->text;
}

string KooalaText::getTrunc(int width_limit) {
	string txt = this->prepend + this->text;
	if (txt.size() > width_limit) {
		return txt.substr(0, txt.size() - 3) + "...";
	}
	else {
		return txt;
	}
}

/*
vector<string> KooalaText::getCont(int width_limit){
	txt = this->prepend + this->text;
	if ((txt.size())>width_limit)
	int txt_limit = width_limit - (this->prepend.size());
	string first_line = this->text.substr(0, txt_limit-1) + "-";
	vector<string> cont;
	cont.push_back(first_line);
	string tmp = "";
	for (int i=0;i<this->prepend.size();++i){
		tmp+=" ";
	}
	for(int i=)
}
 */
