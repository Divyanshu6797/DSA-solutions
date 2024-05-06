class Node {
    private :
    Node* links[26];
    bool flag = false;

    public :
    bool containsKey(char ch) {
        return links[ch-'a'] != NULL;
    }

    void add(char ch, Node* node) {
        links[ch-'a'] = node;
    }
    Node* get(char ch) {
        return links[ch-'a'];
    }
    void setEnd() {
        flag = true;
    }
    bool isEnd() {
        return flag;
    }
};

class Trie {
    public :
    Node* root;

    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node* node = root;

        for(int i=0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                node->add(word[i], new Node());

            }
            node = node->get(word[i]);
        }
        node->setEnd();

    }

    bool isAns(string word) {
        Node* node = root;
        for(auto it: word) {
            if(!node->containsKey(it) || !node->get(it)->isEnd()) {
                return false;
            }
            node = node->get(it);
        }
        return true;
    }
    
};

class Solution {
public:
    string longestWord(vector<string>& words) {

        Trie trie;
        for(auto it:words)
            trie.insert(it);
        
        string ans = "";
        for(auto word: words) {
            if(trie.isAns(word)) {
                if(word.size() > ans.size()) {
                    ans = word;
                }
                else if(word.size() == ans.size()) {
                    ans = min(ans,word);
                } 
            }
        }

        return ans;
        
    }
};
