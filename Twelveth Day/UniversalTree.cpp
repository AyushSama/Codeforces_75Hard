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
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void helper(Node* root , int& res ,int& count){
    if(!root)   
        return;
    if((root->left && root->data != root->left->data) || (root->right && root->data != root->right->data))
        res++;
    count+=1;
    helper(root->left,res,count);
    helper(root->right,res,count);
}

void solve(){
    Node* root	 = new Node(5);
	root->left	 = new Node(4);
	root->right	 = new Node(5);
	root->left->left = new Node(4);
	root->left->right = new Node(4);
	root->right->right = new Node(5);
    int res = 0;
    int count = 0;
    helper(root,res,count);
    cout << res << " " << count << " " << count-res;
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}