// Pre-Exam.cpp

#include <iostream>
#include <string>

std::string input{ "" };
std::string tempS{ "" };
double totalNum{ 0 };
char lastOp{ ' ' };

void lastOperator() {
	switch (lastOp)
	{
	case '*':
		totalNum *= std::stod(tempS);
		break;
	case '/':
		totalNum /= std::stod(tempS);
		break;
	case '+':
		totalNum += std::stod(tempS);
		break;
	case '-':
		totalNum -= std::stod(tempS);
		break;
	case ' ':
		totalNum = std::stod(tempS);
	}
}

int main()
{
    std::cout << "Please enter an equation: ";
    std::getline(std::cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] != '*' && input[i] != '+' && input[i] != '-' && input[i] != '/')
		{
			tempS += input[i];
		}
		else 
		{
			lastOperator();
			tempS = "";
			lastOp = input[i];
		}
	}
	lastOperator();
	std::cout << "\n\nSUM: " << totalNum;
}