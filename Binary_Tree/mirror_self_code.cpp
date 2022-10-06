// int solve(Node* a, Node* b,int &ans){
//         if(a==NULL && b==NULL) return ans;
//         if((a!=NULL && b==NULL) || (a->data!= b->data)) { return  0;}
//         if((a==NULL && b!=NULL) || (a->data!= b->data))  { return 0;}
//        if(a->data != b->data) return 0;
//         // int lans = solve(a->left,b->right,ans);
//         // int rans = solve(a->right,b->left,ans);
//         ans = solve(a->left,b->right,ans);
//         ans = solve(a->right,b->left,ans);
//         if(a->data == b->data) ans=ans && 1;
//         if(a->data != b->data) ans=ans && 0;
//         return ans;
//     }
    
//     // int solve(Node* a, Node* b,int &ans){
//     //     // pair<int,int> cur=make_pair(0,0);
//     //     if(a==NULL || b==NULL) return ans;
//     //     if((a!=NULL && b==NULL)|| (a->data != b->data)) { return ans && 0;}
//     //     if((a==NULL && b!=NULL) || (a->data != b->data))  { return ans && 0;}
//     //     if(a->data!=b->data) { return ans && 0;}
//     //      if(a->data==b->data) { return ans && 1;}
//     //     solve(a->left,b->right,ans);
//     //     solve(a->right,b->left,ans);
//     //     return ans;
//     // }
//     int areMirror(Node* a, Node* b) {
//         int ans=1;
//      return solve(a,b,ans);
//     }