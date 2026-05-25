#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_LEVEL = 4;

// ================= NODE CLASS =================

class Node
{
public:

    int data;

    Node* forward[MAX_LEVEL + 1];

    Node(int value)
    {
        data = value;

        for(int i = 0; i <= MAX_LEVEL; i++)
        {
            forward[i] = NULL;
        }
    }
};

// ================= SKIP LIST CLASS =================

class SkipList
{
private:

    int level;

    Node* header;

public:

    // Constructor
    SkipList()
    {
        level = 0;

        header = new Node(-1);
    }

    // Random Level Generator
    int randomLevel()
    {
        int lvl = 0;

        while((rand() % 2) && lvl < MAX_LEVEL)
        {
            lvl++;
        }

        return lvl;
    }

    // ================= INSERT =================

    void insert(int value)
    {
        Node* update[MAX_LEVEL + 1];

        Node* current = header;

        // Find position
        for(int i = level; i >= 0; i--)
        {
            while(current->forward[i] != NULL &&
                  current->forward[i]->data < value)
            {
                current = current->forward[i];
            }

            update[i] = current;
        }

        current = current->forward[0];

        // If value not present
        if(current == NULL || current->data != value)
        {
            int random_level = randomLevel();

            // Increase level
            if(random_level > level)
            {
                for(int i = level + 1; i <= random_level; i++)
                {
                    update[i] = header;
                }

                level = random_level;
            }

            Node* newNode = new Node(value);

            // Insert node
            for(int i = 0; i <= random_level; i++)
            {
                newNode->forward[i] = update[i]->forward[i];

                update[i]->forward[i] = newNode;
            }

            cout << value << " Inserted\n";
        }
    }

    // ================= SEARCH =================

    void search(int value)
    {
        Node* current = header;

        for(int i = level; i >= 0; i--)
        {
            while(current->forward[i] &&
                  current->forward[i]->data < value)
            {
                current = current->forward[i];
            }
        }

        current = current->forward[0];

        if(current && current->data == value)
        {
            cout << value << " Found\n";
        }
        else
        {
            cout << value << " Not Found\n";
        }
    }

    // ================= DELETE =================

    void deleteNode(int value)
    {
        Node* update[MAX_LEVEL + 1];

        Node* current = header;

        // Find node
        for(int i = level; i >= 0; i--)
        {
            while(current->forward[i] &&
                  current->forward[i]->data < value)
            {
                current = current->forward[i];
            }

            update[i] = current;
        }

        current = current->forward[0];

        // If found
        if(current != NULL && current->data == value)
        {
            for(int i = 0; i <= level; i++)
            {
                if(update[i]->forward[i] != current)
                {
                    break;
                }

                update[i]->forward[i] = current->forward[i];
            }

            delete current;

            // Reduce level
            while(level > 0 &&
                  header->forward[level] == NULL)
            {
                level--;
            }

            cout << value << " Deleted\n";
        }
        else
        {
            cout << value << " Not Found\n";
        }
    }

    // ================= DISPLAY =================

    void display()
    {
        cout << "\n===== Skip List =====\n";

        for(int i = level; i >= 0; i--)
        {
            Node* node = header->forward[i];

            cout << "Level " << i << ": ";

            while(node != NULL)
            {
                cout << node->data << " ";

                node = node->forward[i];
            }

            cout << endl;
        }
    }
};

// ================= MAIN FUNCTION =================

int main()
{
    srand(time(0));

    SkipList s;

    // Insert
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(25);

    // Display
    s.display();

    // Search
    s.search(20);
    s.search(99);

    // Delete
    s.deleteNode(20);

    // Display again
    s.display();

    return 0;
}