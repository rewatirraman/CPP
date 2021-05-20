#include<bits/stdc++.h>
using namespace std;
#define SPACE 10

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
    void PreOrderUtil(TreeNode *rootNode) {
        if (rootNode == NULL) { return; }
        else {
            cout << rootNode->value << ", ";
            PreOrderUtil(rootNode->left);
            PreOrderUtil(rootNode->right); 
        }
    }

    void InOrderUtil(TreeNode *rootNode) {
        if (rootNode == NULL) { return; }
        else {
            InOrderUtil(rootNode->left);
            cout << rootNode->value << ", ";            
            InOrderUtil(rootNode->right);
        }        
    }

    void PostOrderUtil(TreeNode *rootNode) {
        if (rootNode == NULL) { return; }
        else {
            PostOrderUtil(rootNode->left);
            PostOrderUtil(rootNode->right); 
            cout << rootNode->value << ", ";
        }        
    }

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

    void print2D_Util(TreeNode * r, int space) {
        if (r == NULL) // Base case  1
        return;
        space += SPACE; // Increase distance between levels   2
        print2D_Util(r -> right, space); // Process right child first 3 
        cout << endl;
        for (int i = SPACE; i < space; i++) // 5 
        cout << " "; // 5.1  
        cout << r -> value << "\n"; // 6
        print2D_Util(r -> left, space); // Process left child  7
    }

    void print2D() {
        print2D_Util(root, 0);
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

    void PreOrder() {
        if (root == NULL) { cout << "Tree is empty" << endl; return; }
        PreOrderUtil(root);
        cout << endl;
    }

    void InOrder() {
        if (root == NULL) { cout << "Tree is empty" << endl; return; }
        InOrderUtil(root);
        cout << endl;
    }

    void PostOrder() {
        if (root == NULL) { cout << "Tree is empty" << endl; return; }
        PostOrderUtil(root);
        cout << endl;
    }    

    // void LevelOrder() {
    //     if (root == NULL) { cout << "Tree is empty" << endl; return; }
        
    // }

    void LevelOrderUsingQueue() {
        queue<TreeNode *> myQ;
        TreeNode *rootNode = root;
        myQ.push(rootNode);
        while (!myQ.empty())
        {
            TreeNode *temp = myQ.front();
            myQ.pop();
            cout << temp->value << " ";
            if (temp->left) { myQ.push(temp->left); }
            if (temp->right) { myQ.push(temp->right); }
        } cout << endl;
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
        cout << "7. Print 2-D tree" << endl;
        cout << "8. Print PreOrder traversal of the tree" << endl;
        cout << "9. Print InOrder traversal of the tree" << endl;
        cout << "10. Print PostOrder traversal of the tree" << endl;
        cout << "11. Print LevelOrder traversal using Queue DS" << endl;
        cout << "12. Print LevelOrder traversal using current level printing" << endl;

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
            case 7:
                tree.print2D();
                break;
            case 8:
                tree.PreOrder();
                break;
            case 9:
                tree.InOrder();
                break;
            case 10:
                tree.PostOrder();
                break;
            case 11:
                tree.LevelOrderUsingQueue();
                break;
            case 12:
                //tree.PostOrder();
                break;                                
            default:
                cout << "Please enter a valid entry" << endl;
                break;
        }

    } while(option != 0);


    return 0;
}