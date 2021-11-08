#pragma once
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

class StackByArray
{
public:
	StackByArray() = delete;
	StackByArray(int n)
		:items(nullptr)
		,nCount(n)
		,nLength(0)
	{
		items = new string[nCount];
	}
	~StackByArray()
	{

	}
public:
	// ��ջ
	bool pop() {
		if (nCount < 1)
		{
			return false;
		}
		items[nCount - 1] = "";
		nCount--;
		return true;
	}
	// ��ջ
	bool push(const string&item) {
		if (nCount >= nLength)
		{
			return false;
		}
		items[nCount] = item;
		nCount++;
		return true;
	}
	void clear()
	{

	}


private: 
	string* items;
	int nCount;		// ջ������
	int nLength;	// ջ���

};

