//main.cpp  
#include <iostream>  
#include <fstream>  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <iomanip>  
#include "LexAnalysis.h"  
#include "SynAnalysis.h"  
 

//C++д��һ���򵥵��﷨������������C���ԣ� 
//http://blog.csdn.net/niuox/article/details/8216186

int main()
{
	//�ʷ���������  
	initKeyMapping();
	initOperMapping();
	initLimitMapping();
	initNode();
	scanner();
	BraMappingError();
	printNodeLink();

	printErrorLink();
	printIdentLink();

	//�﷨��������  
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