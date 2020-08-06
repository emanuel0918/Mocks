#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
 int val;
 struct TreeNode* left;
 struct TreeNode* right;
}; 
typedef struct TreeNode TreeNode;
void insert(TreeNode **A,int d);
void inorden(TreeNode *A);
void preorden(TreeNode *A);
void postorden(TreeNode *A);
int main(){
 TreeNode * A;
 int n;
 int d;
 int i;
 A=NULL;
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&d);
  insert(&A,d);
 } 
 //inorden(A);
 //preorden(A);
 postorden(A);
 printf("\n");
 return 0;
}

void inorden(TreeNode *A){
 if(A==NULL){
  return;
 }
 printf("%d ",A->val);
 inorden(A->left);
 inorden(A->right);
 return ;
}
void preorden(TreeNode *A){
 if(A==NULL){
  return;
 }
 preorden(A->left);
 preorden(A->right);
 printf("%d ",A->val);
 return;
}
void postorden(TreeNode *A){
 if(A==NULL){
  return;
 }
 postorden(A->right);
 postorden(A->left);
 printf("%d ",A->val);
 return;
}
void insert(TreeNode **A,int d){
 if(*A==NULL){
  *A= (TreeNode *)malloc(sizeof(TreeNode));
  (*A)->left=NULL;
  (*A)->right=NULL;
  (*A)->val=d;
  return;
 }
 if((*A)->val<d){
  insert(&((*A)->right),d);
 }else{
  insert(&((*A)->left),d);
 }
 
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
