// reversing a queue elements (using stack as reverse don't work for queue)
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    stack <int> s;
    queue <int> q;

    q.push(317);
    q.push(2704);
    q.push(31);
    q.push(27);

    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}