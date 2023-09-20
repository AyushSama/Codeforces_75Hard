#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int size = 26;

class Node{
    public:
        Node* links[26];
        bool isEnd;

        Node(){
            // for(int i = 0 ; i <26 ; i++)
            //     links[i] = NULL;
            this->links[26] = {NULL};
            this->isEnd = false;
        }

        void set(char ch, Node* node){
            links[ch-'a'] = node;
        }

        bool containsKey(char ch){
            return (links[ch-'a']!=NULL);
        }

        Node* get(char ch){
            return links[ch-'a'];
        }

        void setEnd(){
            this->isEnd = true;
        }

        bool getEnd(){
            return this->isEnd;
        }
};

void insertWord(Node* &head ,string s ){
    for(int i = 0 ; i < s.length() ; i++){
        if(!head->containsKey(s[i])){
            head->set(s[i],new Node());
        }
        head = head->get(s[i]);
    }
    head->setEnd();
}

bool isPresent(Node* head, string s){
    for(int i =0 ; i < s.length() ; i++){
        if(!head->containsKey(s[i]))
            return false;
        head = head->get(s[i]);
    }
    return head->getEnd();
}

void solve(){
    Node* head = new Node();
    insertWord(head,"apple");
    cout << isPresent(head,"apple");
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