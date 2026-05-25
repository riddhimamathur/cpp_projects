#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;
    {
        if (q.empty())
    {
        cout << "empty queue";
    }
}
q.push(10);
q.push(20);
{
    if (q.empty())
    {
        cout << "empty queue";
    }
    else 
    {
        cout << "\nnon empty queue";
    }
}
}