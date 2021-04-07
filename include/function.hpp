#ifndef FUNC
#define FUNC
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include "memberFunction.hpp"

typedef unsigned int ui;

void inputCalc(std::vector<std::string>&,const std::array<std::string,3>&);

template <typename obj>
void doCalc(std::vector<std::string>&,std::string,std::string,obj);

template <typename obj1,typename obj2>
void doCalc2(std::vector<std::string>&,std::string,obj1,obj2);

template <typename obj1,typename obj2>
void plusOp(std::vector<std::string>&,obj1,obj2);

template <typename obj1,typename obj2>
void crosOp(std::vector<std::string>&,obj1,obj2);

template <typename obj1,typename obj2>
void divOp(std::vector<std::string>&,obj1,obj2);

template<typename obj1,typename obj2>
void smalOp(std::vector<std::string>&,obj1,obj2);

template <typename obj1,typename obj2>
void minesOP(std::vector<std::string>&,obj1,obj2);

template <typename obj1,typename obj2>
void andOp(std::vector<std::string>&,obj1,obj2);

template <typename obj1,typename obj2>
void orOp(std::vector<std::string>&,obj1,obj2);

template <typename obj1,typename obj2>
void exEqOp(std::vector<std::string>&,obj1,obj2);

template <typename obj1,typename obj2>
void plusEqOp(std::vector<std::string>&,obj1,obj2);

template <typename obj1,typename obj2>
void minesEqOp(std::vector<std::string>&,obj1,obj2);

bool foundNumberInArray(ui,ui[],ui);

void errorFix(int);

#endif
