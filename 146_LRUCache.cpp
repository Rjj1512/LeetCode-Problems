class LRUCache {
private:
    int size=0;
    unordered_map<int, int> lru;
    //unordered_map<int,int> hash
    list<int> cache;
public:
    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        
        if(lru.count(key) == 0)
            return -1;
        cache.remove(key);
        cache.push_front(key);
        return lru[key];
    }
    
    void put(int key, int value) {
        
        if(lru.size() == size && lru.count(key) == 0) {
            lru.erase(cache.back());
            cache.pop_back();
        }
        cache.remove(key);
        cache.push_front(key);
        lru[key] = value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */