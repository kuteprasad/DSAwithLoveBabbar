// lets try tri .. :)
#include <iostream>
using namespace std;

class Trienode
{
public:
    char data;
    Trienode *children[26];
    bool isTerminal;

    Trienode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    Trienode *root;

    void insertRoot(char ch)
    {
        root = new Trienode('\0');
        // root->isTerminal = true;
    }

    void insertUtil(string word, Trienode *root)
    {
        // recursive function:

        // base case:
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'A';

        // if absent
        if (root->children[index] == NULL)
        {
            root->children[index] = new Trienode(word[0]);
        }

        root = root->children[index];
        insertUtil(word.substr(1), root);
    }

    void insertWord(string word)
    {
        insertUtil(word, root);
    }

    bool searchUtil(string word, Trienode *root)
    {
        // let's try trie... :)

        // base case:
        if (word.length() == 0)
            return root->isTerminal;

        int index = word[0] - 'A';

        if (root->children[index] != NULL)
        {
            return searchUtil(word.substr(1), root->children[index]);
        }
        else
        {
            return false;
        }
    }

    bool searchWord(string word)
    {
        return searchUtil(word, root);
    }

    void deleteUtil(string word, Trienode *root, bool &toCheckForDelete)
    {
        // assumption: the word is present
        if (word.length() == 0)
        {
            cout << "Deleting the given word" << endl;
            root->isTerminal = false;
            return;
        }

        deleteUtil(word.substr(1), root->children[word[0] - 'A'], toCheckForDelete);

        if (toCheckForDelete)
        {
            for (int i = 0; i < 26; i++)
            {

                if (root->children[i] != NULL)
                {
                    toCheckForDelete = false;
                    return;
                }
            }

            if (toCheckForDelete)
            {
                delete root;

                // Set parent's reference to nullptr
                root = nullptr;
                // This line is the adjustment to handle dangling pointers
            }
        }
    }
    void deleteWord(string word)
    {
        bool toCheckForDelete = true;
        deleteUtil(word, root, toCheckForDelete);
    }

    bool starts(string word, Trienode *root)
    {
        // base case:
        if (word.length() == 0)
            return true;

        int index = word[0] - 'A';

        if (root->children[index] != NULL)
        {
            return starts(word.substr(1), root->children[index]);
        }
        else
        {
            return false;
        }
    }

    bool startsWith(string prefix) { return starts(prefix, root); }
};

int main()
{
    cout << "hello welcome to the world of programming!" << endl;

    // creating a trie
    Trie *obj = new Trie();
    obj->insertRoot('\0');
    obj->insertWord("ABCD");
    obj->insertWord("ABC");
    obj->insertWord("APPLE");

    // cout << "The ABCD is found or not: " << obj->searchWord("ABCD") << endl;
    // cout << "The ABC is found or not: " << obj->searchWord("ABC") << endl;

    // obj->deleteWord("ABC");

    cout << "The ABCD is found or not: " << obj->searchWord("ABCD") << endl;
    cout << "The ABC is found or not: " << obj->searchWord("ABC") << endl;
    cout << "The APPLE is found or not: " << obj->searchWord("APPLE") << endl;
    cout << "The APP is prefix found or not: " << obj->startsWith("APP") << endl;

    return 0;
}
