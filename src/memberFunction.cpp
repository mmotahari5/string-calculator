#include "function.hpp"
#include "memberFunction.hpp"
using namespace std;

string oneCh::get_str(){
	return str;
}
void oneCh::set_str(string str){
	if(str.length() == 1){
		this->str = str;
	}
	else{
		cerr << "input is bigger than 1 char" << endl;
	}
}

string twoCh::get_str(){
	return str;
}
void twoCh::set_str(string str){
	if(str.length() == 2){
		this->str = str;
	}
	else{
		cerr << "input is bigger than 2 char" << endl;
	}
}


string threeCh::get_str(){
	return str;
}
void threeCh::set_str(string str){
	if(str.length() == 3){
		this->str = str;
	}
	else{
		cerr << "input is bigger than 3 char" << endl;
	}
}


string fourCh::get_str(){
	return str;
}
void fourCh::set_str(string str){
	if(str.length() == 4){
		this->str = str;
	}
	else{
		cerr << "input is bigger than 4 char" << endl;
	}
}


string fiveCh::get_str(){
	return str;
}
void fiveCh::set_str(string str){
	if(str.length() == 5){
		this->str = str;
	}
	else{
		cerr << "input is bigger than 5 char" << endl;
	}
}

string sixCh::get_str(){
	return str;
}
void sixCh::set_str(string str){
	if(str.length() == 6){
		this->str = str;
	}
	else{
		cerr << "input is bigger than 6 char" << endl;
	}
}

string sevenCh::get_str(){
	return str;
}
void sevenCh::set_str(string str){
	if(str.length() == 7){
		this->str = str;
	}
	else{
		cerr << "input is bigger than 7 char" << endl;
	}
}

string eightCh::get_str(){
	return str;
}
void eightCh::set_str(string str){
	if(str.length() == 8){
		this->str = str;
	}
	else{
		cerr << "input is bigger than 8 char" << endl;
	}
}

string nineCh::get_str(){
	return str;
}
void nineCh::set_str(string str){
	if(str.length() == 9){
		this->str = str;
	}
	else{
		cerr << "input is bigger than 9 char" << endl;
	}
}

string tenCh::get_str(){
	return str;
}
void tenCh::set_str(string str){
	if(str.length() == 10){
		this->str = str;
	}
	else{
		cerr << "input is bigger than 10 char" << endl;
	}
}


