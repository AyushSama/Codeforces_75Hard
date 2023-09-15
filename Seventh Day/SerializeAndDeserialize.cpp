//Just the code for deserialize as serialization is just converting the preorder and inorder into a string and then convert that string again into the tree (i.e Deserialize)

#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            this->data=val;
            this->left=NULL;
            this->right=NULL;
        }
};

void preOrderTrav(Node* root){
    if(!root)
        return;
    cout << root->data << " ";
    preOrderTrav(root->left);
    preOrderTrav(root->right);
}

Node* Build(vector<int>preOrder,int preStart,int preEnd,vector<int>inOrder,int inStart,int inEnd,map<int,int>mp){
    if(preStart >preEnd || inStart>inEnd)   
        return NULL;
    Node* root = new Node(preOrder[preStart]);
    int inRoot = mp[root->data];
    int numLeft =  inRoot-inStart;
    root->left = Build(preOrder,preStart+1,preStart+numLeft,inOrder,inStart,inRoot-1,mp);
    root->right = Build(preOrder,preStart+numLeft+1,preEnd,inOrder,inRoot+1,inEnd,mp);
    return root;
}

void solve(){
    int n;
    cin >> n;
    vector<int>preOrder(n);
    vector<int>inOrder(n);
    for(int i = 0 ; i < n; i++)
        cin >> preOrder[i];
    map<int,int>mp;
    for(int i = 0 ; i < n; i++){
        cin >> inOrder[i];
        mp[inOrder[i]] = i;
    }
    Node* root = Build(preOrder,0,n-1,inOrder,0,n-1,mp);
    preOrderTrav(root);
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}