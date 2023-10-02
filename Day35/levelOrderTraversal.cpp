vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    if(root == NULL){
        return vector<int>();
    }
    queue<BinaryTreeNode<int> *>q;
    q.push(root);
    
    vector<int>ans;
    
    while(!q.empty()){
        BinaryTreeNode<int> *temp = q.front();
        q.pop();
        
        ans.push_back(temp->val);

        if(temp->left != NULL){
            q.push(temp->left);
        }if(temp->right != NULL){
            q.push(temp->right);
        }
       
    }
        
    return ans;
}