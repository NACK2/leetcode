class MyHashMap {
public:
    vector<pair<int, int>> map;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        int exists = false;
        
        for (int i=0; i<map.size(); ++i) {
            if (map[i].first == key) {
                map[i].second = value;
                exists = true;
                break;
            }
        }
        
        if (!exists)
            map.push_back({key, value});
    }
    
    int get(int key) {
        int exists = false;
        
        if (map.empty()) 
            return -1;
        
        for (int i=0; i<map.size(); ++i) {
            if (map[i].first == key) {
                return map[i].second;
            }
        }
        
        return -1;
    }
    
    void remove(int key) {
        for (int i=0; i<map.size(); ++i) {
            if (map[i].first == key) {
                map.erase(map.begin()+i);
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */