#pragma once
#include<string>
#include"ArrayStack.h"
class Solution {
private:
	ArrayStack<char> *stack = new ArrayStack<char>();
public:
	bool isVaild(const std::string &s)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '[' || s[i] == '{' || s[i] == '(')
			{
				stack->push(s[i]);
			}
			else
			{
				if (!stack->isEmpty())
				{
					char ret=stack->pop();
					if (s[i] == '[' && ret != ']')
						return false;
					if (s[i] == '{' && ret != '}')
						return false;
					if (s[i] == '(' && ret != ')')
						return false;
				}
			}
		}
		return stack->isEmpty();
	}
};