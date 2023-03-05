#include <iostream>
#include <stack>

int main()
{
    std::stack<int> stack;
    std:: string line;
    std::cin >> line;

    for (unsigned int i=0; i < line.size(); i++)
    {
        if (line[i] == '(' || line[i] == '{') {
            stack.push(line[i]);
        }
        else
        {
            if (line[i] == ')' && !stack.empty() && stack.top() == '(')
            {
                stack.pop();
            }
            else if (line[i] == '}' && !stack.empty() && stack.top() == '{') {
                stack.pop();
            }
            else if ((line[i] == '}' || line[i] == ')') && stack.empty()) {
                stack.push(i);
                break;
            }
        }
    }
    
    if (stack.empty()) 
    {
        std::cout << "yes"<<std::endl;
    }
    else 
    {
        std::cout << "no"<<std::endl;
    }
	return 0;
}
