#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

class Node{
    public:
        int data;
        Node* xnode;

        Node(int val){
            this->data = val;
            this->xnode = 0;
        }
};

Node* Xor(Node* next , Node* last){
    return reinterpret_cast<Node*>(reinterpret_cast<uintptr_t>(next),reinterpret_cast<uintptr_t>(last));
}

void insertNode(Node*& head,int val){
    Node* temp = new Node(val);
    temp->xnode = head;
    Node* get = head->xnode;
    head->xnode = Xor(temp,get);
    head = temp;
}

void printList(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* next;
 
    cout << "The nodes of Linked List are: \n";
 
    // Till condition holds true
    while (curr != NULL) {
        cout << curr -> data << " ";
        next = Xor(prev, curr -> xnode);
        prev = curr;
        curr = next;
    }
}


void solve(){
    Node* head = new Node(1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,6);
    printList(head);
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}