//{ Driver Code Starts
// https://practice.geeksforgeeks.org/problems/construct-bst-from-post-order/1
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");
}
	return 0;
}

// } Driver Code Ends


/*struct Node
{
	int data;
	Node *left, *right;
};*/

    Node* solve(int pre[],int size, int min,int max,int &i){
        
        if(i<0) return NULL;
        if(pre[i] < min || pre[i] > max) return NULL;
        
        Node* root=new Node(pre[i--]);
        root->right=solve(pre,size,root->data,max,i);
        root->left=solve(pre,size,min,root->data,i);
        
        return root;
    }
    
Node *constructTree (int post[], int size)
{
        int mini= INT_MIN;
        int maxi= INT_MAX;
        int i=size-1;
        
        // cout<<post[0];
        
        return solve(post,size,mini,maxi,i);
}