class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      for(int i = 0 ;i < numbers.size() ;i++){
         int req = target - numbers[i];
         int start = i+1;
         int end = numbers.size()-1;
         while(start <= end){
            int mid = start + (end-start)/2;
            if(numbers[mid] > req){
                end = mid-1;
            }
            else if (numbers[mid] < req){
                start = mid +1;
            }
            else{
               return {i + 1, mid + 1};
            }
         }
      }  
      return {};
    }
};
