#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int>& a, int x) {
    if (a.empty()) {
        a.push(x);
        return;
    }

    int temp = a.top();
    a.pop();

    insertBottom(a, x);

    a.push(temp);
}

int main() {
    stack<int> a;
    a.push(10);
    a.push(20);
    a.push(30);

    insertBottom(a, 5);

    while (!a.empty()) {
        cout << a.top() << " ";
        a.pop();
    }
}
