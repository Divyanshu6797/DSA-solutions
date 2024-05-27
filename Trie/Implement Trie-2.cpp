#include <bits/stdc++.h> 

struct Node {
    Node* links[26];
    int cw=0;
    int cp=0;
};
class Trie{
    Node *root;

    public:

    Trie(){
        root = new Node();
        // Write your code here.
    }

    void insert(string &word){
        Node* node  = root;

        for(int i=0;i<word.size();i++) {
            if(node->links[word[i]-'a'] == NULL) {
                node->links[word[i]-'a'] = new Node();
                node = node->links[word[i]-'a'];
            } else {
                node = node->links[word[i]-'a'];

            }
            node->cp++;

        }
        node->cw++;
    }

    int countWordsEqualTo(string &word){

        Node* node = root;

        for(int i=0;i<word.size();i++) {
            if(node->links[word[i]-'a'] != NULL) {
                node = node->links[word[i]-'a'];

            } else  {
                return 0;
            }

        }
        return node->cw;
    }

    int countWordsStartingWith(string &word){
        Node *node = root;

        for(int i=0;i<word.size();i++) {
            if(node->links[word[i]-'a'] != NULL) {
                node = node->links[word[i]-'a'];

            } else  {
                return 0;
            }
            


        }
        return node->cp;
    }

    void erase(string &word){
         Node *node = root;

        for(int i=0;i<word.size();i++) {
            node = node->links[word[i]-'a'];
            node->cp--;


        }
        node->cw--;
       
    }
};
