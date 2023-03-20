/*
  Day 70: 19/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/design-add-and-search-words-data-structure/

class WordDictionary {
public:
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        words[word.size()].push_back(word);
    }
    
    bool search(string word) {
        for(auto s:words[word.size()])
            if(isEqual(s,word))
                return true;

            return false;    
    }

    private:
        unordered_map<int,vector<string>>words;

    bool isEqual(string str1, string str2){
        for(int i = 0; i<str1.size();i++){
            if(str2[i]=='.')
                continue;

            if(str2[i]!=str1[i])
                return false;    
        }
        return true;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */

//  This solution give TLE 

/*
    Analysis:
    Time Complexity : O(nm)
    Space Complexity : O(n)
*/



class WordDictionary {
public:
    struct Trie{
        Trie* child[26];
        bool isEnd = false;
    };
    
    Trie *root;
    WordDictionary() {
        root = new Trie();
    }
    
    void addWord(string word) {
        Trie *cur = root;
        for(auto &ch : word){
            int pos = ch-'a';
            if(cur->child[pos]==NULL) cur->child[pos] = new Trie();
            cur=cur->child[pos];
        }
        cur->isEnd=true;
    }
    
    bool search(string word) {
        Trie *cur = root;
        return find(word,0,cur);
    }
    
    bool find(string &word, int idx, Trie* cur){
        if(idx == word.size()) return cur->isEnd;
		
        if(word[idx]=='.'){
            for(int i=0; i<26; ++i){
                if(cur->child[i] && find(word, idx+1, cur->child[i])) return true;
            }
        }else{
            int i = word[idx]-'a';
            if(cur->child[i] && find(word, idx+1, cur->child[i])) return true;
        }
        return false;
    }
};
