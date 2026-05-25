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
    cout << q.size() << " ";
    return 0;
}