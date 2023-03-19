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