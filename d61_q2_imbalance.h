// Your code here
#include <cstdlib>


void process(std::pair<int,KeyT> &p,node *n){
    if(n==NULL){
        return ;
    }

    int bal=abs(getHeight(n->left)-getHeight(n->right));
    if(bal>p.first || (bal==p.first && (n->data).first<p.second)){
        p={bal,(n->data).first};
    }
    process(p,n->left);
    process(p,n->right);
}

int getHeight(node *n){
    if(n==NULL){
        return -1;
    }
    return 1+std::max(getHeight(n->left),getHeight(n->right));
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    std::pair<int,KeyT> result={abs(getHeight(mRoot->left)-getHeight(mRoot->right)),(mRoot->data).first};
    process(result,mRoot);
    return result.second;

}
