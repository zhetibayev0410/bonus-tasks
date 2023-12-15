//twoSum
vector <int> twoSum(vector<int>& numbers, int target) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (numbers[i] + numbers[j] == target) {
                return {i, j};
            }
        }
    }
    return {}; // return an empy vector if no solution 
}
