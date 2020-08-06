#include<iostream>
struct TreeNode{
 int val;
 TreeNode* left;
 TreeNode* right;
};
int main(){
 TreeNode * A;
 return 0;
}
/*

 TreeNode* tail;
 
 void preOrder(TreeNode *A){
     if(A==NULL)return;
     if(tail!=NULL)tail->left = A;
     tail=A;
     preOrder(A->left);
     preOrder(A->right);
 }
TreeNode* Solution::flatten(TreeNode* A) {
    tail = NULL;
    auto head = A;
    preOrder(A);
    //
    while(1){
        if(A->left == NULL)break;
        A->right = A->left;
        A->left = NULL;
        A = A->right;
    }
    return head;
}
*/
