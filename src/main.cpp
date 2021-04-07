#include <iostream>
#include <string>
#include <vector>
#include <array>
#include "memberFunction.hpp"
#include "function.hpp"

using namespace std;

int main(){
	array<string ,3> input;
	vector<string> history(0);
	
	do{
		for(ui i=0;i < 3;i++){
			cin >> input[i];
			if(input[0]=="history"){
				for(auto const item:history){
					cout << item << endl;
				}
				break;
			}
			else if( input[0] == "exit"){
				break;
			}
		}
		inputCalc(history,input);
		cout << "============" << endl;
//		cout << "test history: \"" << history.back() <<'\"'<< endl;
	}while(input[0]!="exit");
	

	return 0;
}
