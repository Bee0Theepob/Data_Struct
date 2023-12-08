#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

class Tree{
    class Node{
        public:
            friend class Tree;
            Node() {data = -1; left = NULL; right = NULL;}
            Node(const int x, Node* left, Node* right) : data(x), left(left), right(right) {}
            bool isleaf(){
                return this->left==NULL && this->right==NULL;
            }

        protected:
            int data;
            Node* left;
            Node* right;
    };
public:

    Tree() {
        mRoot = NULL;
        mSize = 0;
    }

    ~Tree() {
        clear(mRoot);
    }

    void clear(Node*& r) {
        if (!r) return;
        clear(r->left);
        clear(r->right);
        delete r;
    }

    void insert(int x) {
        insertAt(mRoot, x);
    }
    
    bool isSameBinaryTree(Tree& t) {
        // Insert your code here
        if(mSize!=t.mSize){
            return false;
        }
        return isSameSubTree(mRoot,t.mRoot);
    }
    bool isSameSubTree(Node * n,Node * m){
        if(n==NULL && m==NULL){
            return true;
        }
        else if((n==NULL && m!=NULL) || (m==NULL && n!=NULL)){
            return false;
        }
        
        if(n->isleaf() && m->isleaf()){
            return n->data==m->data;
        }
        else if((n->isleaf() && !(m->isleaf())) || (m->isleaf() && !(n->isleaf()))){
            return false;
        }
        else{
            return isSameSubTree(n->left,m->left) && isSameSubTree(n->right,m->right);
        }
    }
    // You can also put your code here

protected:
    void insertAt(Node*& r, int x) {
        if (!r) {
           r = new Node(x, NULL, NULL);
           mSize++;
           return;
        }
        if (r->data == x) return; // Do nothing
        if (x < r->data) insertAt(r->left, x); else
        insertAt(r->right, x);
    }
    Node* mRoot;
    int mSize;

};

#endif // TREE_H_INCLUDED
