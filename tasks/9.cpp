//search insert position
class Task {
public:
    int searchInsert(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size();

        while (l < r) {
            const int m = l + (r - l) / 2
            if (numbers[m] == target)
                return m;
            if (numbers[m] < target)
                l = m + 1;
            else
                r = m;
        }

        return l;
    }
};