#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> q;
    stack<int> s;

    q.push(37);
    q.push(27);
    q.push(24);
    q.push(31);

    // store original queue
    queue<int> original = q;

    // Queue → Stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Stack → Queue (reversed)
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Compare
    bool isPalindrome = true;

    while (!q.empty()) {
        if (q.front() != original.front()) {
            isPalindrome = false;
            break;
        }
        q.pop();
        original.pop();
    }

    if (isPalindrome)
        cout << "yes palindrome";
    else
        cout << "no palindrome";
}