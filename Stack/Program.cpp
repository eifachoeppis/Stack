// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AdtStack.cpp"
using namespace std;

int main()
{
    AdtStack<string> stringStack = AdtStack<string>();
    stringStack.push("test");
    std::cout << stringStack.top() << endl;

    AdtStack<int> stack = AdtStack<int>();
    std::cout << stack.isEmpty() << endl;
    stack.push(4);
    stack.push(10);
    stack.pop();
    std::cout << stack.top() << endl;
    std::cout << stack.getSize() << endl;
    std::cout << stack.isEmpty() << endl;

    /*int numbers[3] = { 1, 2, 3 };
    for (int i = 0; i < 4; i++)
    {
        std::cout << numbers[i] << endl;
    }*/

    // 1
    // 2
    // 3
    // - 858993460
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
