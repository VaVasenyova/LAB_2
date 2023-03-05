#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::string line;
    std::getline(std::cin, line);

    std::stack<int> stack;

    for (int i = 0; i < line.length(); i++)
    {
        if (isdigit(line[i]))
        {
            stack.push(atoi(&(line[i])));
        }
        else if (line[i] == '+')
        {
            int a, b;
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(b + a);
        }
        else if (line[i] == '-')
        {
            int a, b;
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(b - a);
        }
        else if (line[i] == '*')
        {
            int a, b;
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            stack.push(b * a);
        }

    }
    std::cout << stack.top();
	return 0;
}