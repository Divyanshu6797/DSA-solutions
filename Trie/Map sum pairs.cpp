struct Node {
    Node* links[26];
    int sum = 0;
};
class MapSum {
public:
    Node * root;
    MapSum() {
        root = new Node();
        
    }
    unordered_map<string, int> m;
    
    void insert(string key, int val) {
        Node *node = root;
        int diff = val - m[key];

        for(char c : key) {
            if(node->links[c-'a'] == NULL) {
                node->links[c-'a'] = new Node();
            }
            node = node->links[c-'a'];
            node->sum += diff;
        }
        m[key] = val;

        
    }
    
    int sum(string prefix) {
        Node* node = root;

        for(char c : prefix) {
            if(node->links[c-'a']!=NULL) {
            node = node->links[c-'a'];
            }
            else {
                return 0;
            }
        }
        return node->sum;
        
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
