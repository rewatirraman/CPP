#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
public:    
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode(){
        value = 0;
        left = NULL;
        right = NULL;
    }

    TreeNode(int val){
        value = val;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    TreeNode *root;

    BST()
    {
        root = NULL;
    }

    // To check if the tree is empty.
    bool isEmpty()
    {
        if (root == NULL) {return true;}
        else {return false;}
    }

    void insertVal(int val)
    {
        TreeNode *newNode = new TreeNode(val);

        if (root == NULL)
        {
            cout << "Tree was empty, inserted new node as root node." << endl;
            root = newNode;
            return;
        } else {
            TreeNode *tempRoot = root;
            while (tempRoot)
            {
                if( newNode->value == tempRoot->value )
                {
                    cout << "Duplicates are not allowed." << endl;
                    return;
                } else if (newNode->value < tempRoot->value)
                {
                    if (tempRoot->left) {tempRoot = tempRoot->left;}
                    else {
                        cout << "Inserted new node in the left." << endl;
                        tempRoot->left = newNode;
                        return;
                    }
                } else if ( newNode->value > tempRoot->value )
                {
                    if (tempRoot->right) {tempRoot = tempRoot->right;}
                    else {
                        cout << "Inserted new node in the right." << endl;
                        tempRoot->right = newNode;
                        return;
                    }
                }
            }            
        }
    }
};


int main()
{
    BST tree;
    int option;
    do
    {
        cout << "Choose the operation to be perform : " << endl;
        cout << "0. Exit from program" << endl;
        cout << "1. Clear screen" << endl;
        cout << "2. Insert Node" << endl;
        cout << "3. Search Node" << endl;
        cout << "4. Delete Node" << endl;
        cout << "5. Print BST values" << endl;
        cout << "6. Check if tree is empty" << endl;

        cin >> option;
        switch (option)
        {
            case 0:
                break;
            case 1:
                // clear screen.
                system("clear");
                break;          
            case 2:
                // Insert operation
                int val;
                cout << "Enter value to insert : ";
                cin>>val;
                tree.insertVal(val);
                break;
            case 3:
                // Search Operation
            case 4:
                // Delete Operation
            case 5:
                // Print BST Values
            case 6:
                // Check if the tree is empty  
                bool r;
                r = tree.isEmpty();
                if (r) { cout << "Tree is empty!" << endl; }
                else { cout << "Tree is not empty!" << endl; }
                break;
            default:
                cout << "Please enter a valid entry" << endl;
                break;
        }

    } while(option != 0);


    return 0;
}