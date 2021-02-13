void find(Node*root, int l,int h,int &count)
{
    if(root==NULL)
    {
        return;
    }
    
        find(root->left,l,h,count);
        if(root->data>=l&&root->data<=h)
        {
            count++;
        }
        find(root->right,l,h,count);
    
}




int getCount(Node *root, int l, int h)
{
  int count=0;
  find(root,l,h,count);
  return count;
}
