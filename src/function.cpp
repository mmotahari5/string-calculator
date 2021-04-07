#include "memberFunction.hpp"
#include "function.hpp"

using namespace std;

void inputCalc(vector<string> &history,const array<string,3> &input){
	ui lenFirstOp = input[0].length();
	ui lenSecondOp = input[2].length();
	string firstOp = input[0];
	string secondOp = input[2];
	string operand = input[1];
	
	try{
		if(lenFirstOp == 1){
			oneCh firstObj(firstOp);
			doCalc(history,operand,secondOp,firstObj);
		}
		if(lenFirstOp == 2){
			twoCh firstObj(firstOp);
			doCalc(history,operand,secondOp,firstObj);
		}
		if(lenFirstOp == 3){
			threeCh firstObj(firstOp);
			doCalc(history,operand,secondOp,firstObj);
		}
		if(lenFirstOp == 4){
			fourCh firstObj(firstOp);
			doCalc(history,operand,secondOp,firstObj);
		}
		if(lenFirstOp == 5){
			fiveCh firstObj(firstOp);
			doCalc(history,operand,secondOp,firstObj);
		}
		if(lenFirstOp == 6){
			sixCh firstObj(firstOp);
			doCalc(history,operand,secondOp,firstObj);
		}
		if(lenFirstOp == 7){
			sevenCh firstObj(firstOp);
			doCalc(history,operand,secondOp,firstObj);
		}
		if(lenFirstOp == 8){
			eightCh firstObj(firstOp);
			doCalc(history,operand,secondOp,firstObj);
		}
		if(lenFirstOp == 9){
			nineCh firstObj(firstOp);
			doCalc(history,operand,secondOp,firstObj);
		}
		if(lenFirstOp == 10){
			tenCh firstObj(firstOp);
			doCalc(history,operand,secondOp,firstObj);
		}
	}
	catch (int errorCode){
		errorFix(errorCode);
	}
}

void errorFix(int errorCode){
	switch (errorCode){
		case 100:
			cout << "Second operator is no one character\t Please try again.." << endl;
			break;
		case 200:
			cout << "Two operator's length is equal!!\t Please try again.." << endl;
			break;
		case 300:
			cout << "Your charachter not found in first operator\t please try again.." << endl;
			break;
		case 400:
			cout << "Second operator's length is longer than first operator's length.\t please try again.." << endl;
			break;
	}
}

template <typename obj>
void doCalc(vector<string> &history,string operand,string secondOp,obj firstObj){
	int len = secondOp.length();
	if(len == 1){
		oneCh secondObj(secondOp);
		doCalc2(history,operand,firstObj,secondObj);
	}
	if(len == 2){
		twoCh secondObj(secondOp);
		doCalc2(history,operand,firstObj,secondObj);
	}
	if(len == 3){
		threeCh secondObj(secondOp);
		doCalc2(history,operand,firstObj,secondObj);
	}
	if(len == 4){
		fourCh secondObj(secondOp);
		doCalc2(history,operand,firstObj,secondObj);
	}
	if(len == 5){
		fiveCh secondObj(secondOp);
		doCalc2(history,operand,firstObj,secondObj);
	}
	if(len == 6){
		sixCh secondObj(secondOp);
		doCalc2(history,operand,firstObj,secondObj);
	}
	if(len == 7){
		sevenCh secondObj(secondOp);
		doCalc2(history,operand,firstObj,secondObj);
	}
	if(len == 8){
		eightCh secondObj(secondOp);
		doCalc2(history,operand,firstObj,secondObj);
	}
	if(len == 9){
		nineCh secondObj(secondOp);
		doCalc2(history,operand,firstObj,secondObj);
	}
	if(len == 10){
		tenCh secondObj(secondOp);
		doCalc2(history,operand,firstObj,secondObj);
	}
}

template <typename obj1,typename obj2>
void doCalc2(vector<string> &history,string operand,obj1 firstObj,obj2 secondObj){

	if(operand == "+"){
		plusOp(history,firstObj,secondObj);
	}
	if(operand == "-"){
		minesOp(history,firstObj,secondObj);
	}
	if(operand == "*"){
		crosOp(history,firstObj,secondObj);
	}
	if(operand == "/"){
		divOp(history,firstObj,secondObj);
	}
	if(operand == "<"){
		smalOp(history,firstObj,secondObj);
	}
	if(operand == "&&"){
		andOp(history,firstObj,secondObj);
	}
	if(operand == "||"){
		orOp(history,firstObj,secondObj);
	}
	if(operand == "!="){
		exEqOp(history,firstObj,secondObj);
	}
	if(operand == "+="){
		plusEqOp(history,firstObj,secondObj);
	}
	if(operand == "-="){
		minesEqOp(history,firstObj,secondObj);
	}
}

template <typename obj1,typename obj2>
void minesEqOp(vector<string>&history,obj1 firstObj,obj2 secondObj){
	string first = firstObj.get_str();
	string second = secondObj.get_str();
	ui lenFirst = first.length() , lenSecond = second.length();
	lenSecond > lenFirst ? throw 400 : NULL;
	ui arrayPos[lenFirst] , countArray = 0;
	for(ui i = 0,k=0;i < lenFirst;i++){
		for(ui j = 0;j < lenSecond;j++){
			if(first[i] == second[j]){
				arrayPos[k] = i;
				k++;
				countArray++;
				break;
			}
		}
	}
	string result = "";
	for(ui i = 0;i < lenFirst;i++){
		if(!foundNumberInArray(i,arrayPos,countArray)){
			result += first[i];
		}
	}
	if(countArray == lenFirst){
		result = "null";
	}
	cout << result << endl;
	history.push_back(result);
}
bool foundNumberInArray(ui number,ui array[],ui lenArr){
	for(ui i = 0;i < lenArr;i++){
		if(array[i] == number){
			return true;
		}
	}
	return false;
}

template <typename obj1,typename obj2>
void plusEqOp(vector<string>&history,obj1 firstObj,obj2 secondObj){
	if((secondObj.get_str()).length() != 1){
		throw 100;//throw: Second operator is no one character
	}
	string first = firstObj.get_str();
	ui lenFirst = first.length();
	char charSecond = (secondObj.get_str())[0];
	string result = first + first;
	for(ui i = 0,j=0;i < 2*lenFirst ;i+=2,j++){
		result[i] = first[j];
	}
	for(ui i = 1;i < 2*lenFirst ;i+=2){
		result[i] = charSecond;
	}
	cout << result << endl;
	history.push_back(result);
}

template <typename obj1,typename obj2>
void exEqOp(vector<string>&history,obj1 firstObj,obj2 secondObj){
	string temp = firstObj.get_str();
	(secondObj.get_str()).length() > 1 ? throw 100 : NULL;
	char mirror = (secondObj.get_str())[0];
	ui lenFirst = temp.length();
	ui posMirror;
	for(posMirror = 0;posMirror < lenFirst;posMirror++){
		if(temp[posMirror] == mirror){
			break;
		}
	}
	temp[posMirror] != mirror ? throw 300 : NULL ;
	string result = temp;
	ui j = 0;
	for(ui i = posMirror+1;i < lenFirst;i++,j++){
		result[j] = temp[i];
	}
	result[j] = temp[posMirror];
	j++;
	for(ui i = 0;i < posMirror;i++,j++){
		result[j] = temp[i];
	}
	cout << result << endl;
	history.push_back(result);
}

template <typename obj1,typename obj2>
void orOp(vector<string>&history,obj1 firstObj,obj2 secondObj){
	ui lenSecond = (secondObj.get_str()).length();
	ui lenFirst = (firstObj.get_str()).length();
	bool foundFirst = false;
	bool foundSecond = false;
	for(ui i=0;i < lenFirst;i++){
		char temp = (firstObj.get_str())[i];
		if((temp == 'a')||(temp == 'e')||(temp == 'i')||(temp == 'u')||(temp == 'o')||(temp == 'A')||(temp == 'E')||(temp == 'I')||(temp == 'U')||(temp == 'O')){
			foundFirst = true;
			break;
		}
	}
	for(ui i=0;i < lenSecond;i++){
		char temp = (secondObj.get_str())[i];
		if((temp == 'a')||(temp == 'e')||(temp == 'i')||(temp == 'u')||(temp == 'o')||(temp == 'A')||(temp == 'E')||(temp == 'I')||(temp == 'U')||(temp == 'O')){
			foundSecond = true;
			break;
		}
	}
	string result = ((foundFirst || foundSecond) ? "true" : "false" );
	cout << result << endl;
	history.push_back(result);
}

template <typename obj1,typename obj2>
void andOp(vector<string>&history,obj1 firstObj,obj2 secondObj){
	ui lenSecond = (secondObj.get_str()).length();
	ui lenFirst = (firstObj.get_str()).length();
	bool found = false;
	for(ui i=0;i < lenFirst;i++){
		char temp = (firstObj.get_str())[i];
		if((temp == 'a')||(temp == 'e')||(temp == 'i')||(temp == 'u')||(temp == 'o')||(temp == 'A')||(temp == 'E')||(temp == 'I')||(temp == 'U')||(temp == 'O')){
			for(ui j = 0;j < lenSecond;j++){
				char tempS = (secondObj.get_str())[i];
				if((tempS == 'a')||(tempS == 'e')||(tempS == 'i')||(tempS == 'u')||(tempS == 'o')||(tempS == 'A')||(tempS == 'E')||(tempS == 'I')||(tempS == 'U')||(tempS == 'O')){
					found = true;
					break;
				}
			}
			if(found == true){
				break;
			}
		}
	}
	string result = (found ? "true" : "false");
	cout << result << endl;
	history.push_back(result);
}

template <typename obj1,typename obj2>
void minesOp(vector<string>&history,obj1 firstObj,obj2 secondObj){
	string first = firstObj.get_str();
	string second = secondObj.get_str();
	ui lenFirst = first.length();
	ui lenSecond = second.length();
	lenFirst == lenSecond ? throw 200 : NULL ;
	int defLen = lenFirst - lenSecond;
	string result = "";
	if(defLen > 0){
		for(ui i = 0;i <= defLen;i++){
			result += first[i];
		}
	}
	else{
		for(ui i = 0;i <= (defLen*(-1));i++){
			result += second[i];
		}
	}
	cout << result << endl;
	history.push_back(result);	
}

template <typename obj1,typename obj2>
void smalOp(vector<string>&history,obj1 firstObj,obj2 secondObj){
	string firstStr = firstObj.get_str();
	string secondStr = secondObj.get_str();
	ui firstLen = firstStr.length();
	secondStr.length() > 1 ? throw 100 : NULL ;
	int array[firstLen];
	ui j = 0;
	for(ui i = 0;i < firstLen;i++){
		if(firstStr[i] < secondStr[0]){
			array[j] = i;
			j++;
		}
	}
//	char result[j] = {'\0'};
	string result = "";
	for(ui i = 0;i < j;i++){
		result += firstStr[array[i]];
	}
	if(j == 0){
		result = "null";
	}
	cout << result << endl;
	history.push_back(result);
}

template <typename obj1,typename obj2>
void crosOp(vector<string>&history,obj1 firstObj,obj2 secondObj){
	ui firstLen = (firstObj.get_str()).length();
	ui secondLen = (secondObj.get_str()).length();
	firstLen == secondLen ? throw 200 : NULL;
	string result;
	if(firstLen < secondLen){
		for(size_t i = 0;i < secondLen;i++){
			result += firstObj.get_str();
		}
	}
	else if(firstLen > secondLen){
		for(ui i = 0;i < firstLen;i++){
			result += secondObj.get_str();
		}
	}
	cout << result << endl;
	history.push_back(result);
}

template <typename obj1,typename obj2>
void plusOp(vector<string> &history,obj1 firstObj,obj2 secondObj){
	string result = firstObj.get_str() + secondObj.get_str();
	sort(result.begin(),result.end());
	cout << result << endl;
	history.push_back(result);
}

template <typename obj1,typename obj2>
void divOp(vector<string>&history, obj1 firstObj,obj2 secondObj){
	string first = firstObj.get_str();
	string second = secondObj.get_str();
	for(ui i = 0;i < second.length() ;i++){
		if((second[i] >= 97)&&(second[i] <= 122)){
			second[i] -= 32;
		}
		for(ui j = 0;j < first.length() ;j++){
			if(first[j] == second[i]){
				first[j] += 32;
			}
		}
	}
	cout << first << endl;
	history.push_back(first);
}
