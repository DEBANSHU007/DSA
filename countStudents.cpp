class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
    deque<int> my(students.begin(), students.end());
    deque<int> my2(sandwiches.begin(), sandwiches.end());
    
    int initial_size = my.size();
    int i = 0;
    while (i < initial_size&& !my.empty() && !my2.empty()) {
        if (my.front() == my2.front()) {
            my.pop_front();
            my2.pop_front();
            i = 0;  
        } else {
            int k = my.front();
            my.pop_front();
            my.push_back(k);
            i++;
        }
        if (i == initial_size)
            break;
    }
    
    return my.size();
    }
};