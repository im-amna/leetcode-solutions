
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result;

        // First: elements smaller than pivot
        for (int num : nums) {
            if (num < pivot) {
                result.push_back(num);
            }
        }

        // Second: elements equal to pivot
        for (int num : nums) {
            if (num == pivot) {
                result.push_back(num);
            }
        }

        // Third: elements greater than pivot
        for (int num : nums) {
            if (num > pivot) {
                result.push_back(num);
            }
        }

        return result;
    }
};
