#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

        int max(int a, int b) {
            return (a > b)? a: b;
        }

		int getHeight(Node* root) {
            if (root -> left == NULL && root -> right == NULL) return 0;
            if (root -> left != NULL && root -> right == NULL) return getHeight(root -> left) + 1;
            if (root -> right != NULL && root -> left == NULL) return getHeight(root -> right) + 1;
            return max(getHeight(root -> left), getHeight(root -> right)) + 1;
        }

}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}
    
       
            
        
