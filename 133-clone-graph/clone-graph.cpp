/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
vector<Node*> r;
 
void dfs(Node* a,Node* cl){
 

    for(auto n:a->neighbors){
if(r[n->val]==NULL){
    Node* t=new Node(n->val);
    t->neighbors.push_back(cl);
    r[n->val]=t;
    dfs(n,t);
}
else {
  r[n->val]->neighbors.push_back(cl);
}


    }
}
    Node* cloneGraph(Node* node) {
        if(node==NULL) return node;
       Node* clone=new Node(node->val);
       r.resize(110,NULL);
       r[node->val]=clone;
       dfs(node,clone);
       return clone; 
    }
};