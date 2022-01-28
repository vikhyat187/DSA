class Trie {
public:
    Trie() {
        
    }
    
    void insert(string word) {
        Trie *node = this;
        for (char c:word){
            c-='a';
            if(node->next[c]==nullptr){
                node->next[c] = new Trie();
            }
            node = node->next[c];
            
        }
        node->isword = true;
    }
    
    bool search(string word) {
        Trie *node = this;
        for (char c:word){
            c-='a';
            if(node->next[c] == nullptr)return false;
            node = node->next[c];
        }
        return node->isword;
    }
    
    bool startsWith(string prefix) {
        Trie * node = this;
        for (char c:prefix){
            c-='a';
            if(node->next[c] == nullptr)return false;
            node = node->next[c];
        }
        return true;
    }
    
    private:
    Trie* next[26]={};
    bool isword=false;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */