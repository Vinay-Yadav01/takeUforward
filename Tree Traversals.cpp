/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void inorder(TreeNode* root, vector<int> &ans){
    if(root==NULL) return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

void preorder(TreeNode* root, vector<int> &ans){
    if(root==NULL) return;
    ans.push_back(root->data);
    preorder(root->left, ans);
    preorder(root->right, ans);
}

void postorder(TreeNode* root, vector<int> &ans){
    if(root==NULL) return;
    postorder(root->left, ans);
    postorder(root->right, ans);
    ans.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> ans;
    
    vector<int> inTraversal;
    inorder(root,inTraversal);
    ans.push_back(inTraversal);

    vector<int> pre;
    preorder(root,pre);
    ans.push_back(pre);

    vector<int> post;
    postorder(root,post);
    ans.push_back(post);
    return ans;
}
