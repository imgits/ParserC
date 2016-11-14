//main.cpp  
#include <iostream>  
#include <fstream>  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <iomanip>  
#include "LexAnalysis.h"  
#include "SynAnalysis.h"  
 

//C++写的一个简单的语法分析器（分析C语言） 
//http://blog.csdn.net/niuox/article/details/8216186

int main()
{
	//词法分析部分  
	initKeyMapping();
	initOperMapping();
	initLimitMapping();
	initNode();
	scanner();
	BraMappingError();
	printNodeLink();

	printErrorLink();
	printIdentLink();

	//语法分析部分  
	initGrammer();
	First();
	Follow();
	Select();
	MTable();
	Analysis();
	close();
	getchar();
	return 0;
}