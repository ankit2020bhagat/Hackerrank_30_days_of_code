#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Solution
{
public:
    stack<char> stack;
    queue<char> queue;
    void pushCharacter(char c)
    {
        stack.push(c);
    }
    void enqueueCharacter(char c)
    {
        queue.push(c);
    }
    char popCharacter()
    {
        char c;
        if (!stack.empty())
        {
            c = stack.top();
            stack.pop();
        }
        return c;
    }
    char dequeueCharacter()
    {
        char c;
        if (!queue.empty())
        {
            c = queue.front();
            queue.pop();
        }
        return c;
    }
};

int main()
{

    string s;
    getline(cin, s);

    Solution obj;

    for (int i = 0; i < s.length(); i++)
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    for (int i = 0; i < s.length() / 2; i++)
    {
        if (obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;

            break;
        }
    }

    if (isPalindrome)
    {
        cout << "The word, " << s << ", is a palindrome.";
    }
    else
    {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}