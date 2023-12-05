#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

class Tree{
    class Node{
        public:
            friend class Tree;
            Node() {data = -1; left = NULL; right = NULL;}
            Node(const int x, Node* left, Node* right) : data(x), left(left), right(right) {}

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
        // Insert your code her
        return check(mRoot , t.mRoot);
    }
    
    bool check(Node*& e , Node*& f) {
        if ( (e->right) == NULL && (e->left) == NULL &&  (f->right) == NULL && (f->left) == NULL ) {
            return true;
        }
        if ( (e->data == f->data  ) ) { 
            if(e->left != NULL &&  f->left != NULL && e->right != NULL &&  f->right != NULL){
                return check(e->right,f->right) && check(e->left,f->left);
            }
            else if ( e->left != NULL &&  f->left != NULL) {
                return check(e->left,f->left);
            }
            else if ( e->right != NULL &&  f->right != NULL) {
                return check(e->right,f->right);
            }
        }
        else {
            return false;
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
