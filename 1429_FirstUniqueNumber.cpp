class FirstUnique {
private:
    queue<int> q;
    unordered_map<int, int> count;
public:
    FirstUnique(vector<int>& nums) {
        for(int num: nums){
            count[num]++;
            q.push(num);
        }
    }
    
    int showFirstUnique() {
        while(!q.empty() && count[q.front()] > 1){
            q.pop();
        }
        if(q.empty()){
            return -1;
        }
        else{
            return q.front();
        }
    }
    
    void add(int value) {
        if(++count[value] == 1){
            q.push(value);
        }
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */