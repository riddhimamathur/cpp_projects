#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector <int> arr = {1,2,3,4,2,3,4,4,4,5,5};
    unordered_map <int,int> freq;
    for (int e : arr)
    {
        freq[e]++;
    }

    cout << "element -> frequency" << endl;
    for (auto& pair : freq)
    {
        if (pair.second>1)
        {
            cout << pair.first << " appears  "<< pair.second << " TIMES"<<endl;
        }
    }
    return 0;
}
