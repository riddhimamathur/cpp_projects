#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;
    q.push(5);
    q.push(23);
    q.push(27);
    q.push(30);
    q.push(31);
     cout << "Elements in the queue are: ";
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}