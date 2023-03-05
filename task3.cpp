#include <iostream>
#include <queue>


int main()
{
    int N = 10;
    std::queue<int> first, second;

    for (int i = 0, x; i < N / 2; ++i)
    {
        std::cin >> x;
        first.push(x);
    }
    for (int i = 0, x; i < N / 2; ++i) {
        std::cin >> x;
        second.push(x);
    }
    int steps = 0;

    for (steps; !first.empty() && !second.empty() && steps <= 200000; ++steps)
    {
        int firstcard = first.front();
        int secondcard = second.front();

        first.pop(); 
        second.pop();

        std::queue<int>* winwin;

        if (firstcard == 0 && secondcard == N - 1)
        {
            winwin = &first;
        }
        else if (secondcard == 0 && firstcard == N - 1)
        {
            winwin = &second;
        }
        else if (firstcard > secondcard)
        {
            winwin = &first;
        }
        else 
        { 
            winwin = &second;
        }

        winwin->push(firstcard);
        winwin->push(secondcard);
    }

    if (first.empty()) 
    {
        std::cout << "second " << steps << std::endl;
    }
    else if (second.empty())
    {
        std::cout << "first " << steps << std::endl;
    }
    else 
    {
        std::cout << "botva";
    }
}