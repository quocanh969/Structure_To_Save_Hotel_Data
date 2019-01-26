#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>

using namespace std;

class cNgay {
private:
	int d, m, y;
public:
	friend istream& operator >> (istream&in, cNgay &a);
	friend ostream& operator << (ostream&out, cNgay &a);
	cNgay();
	~cNgay();
};