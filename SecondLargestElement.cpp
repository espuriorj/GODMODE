class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int largest = arr[0];
        int sLargest = INT_MIN;
        for(int i = 1;i<arr.size();i++){
            if(arr[i] > largest){
                sLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > sLargest && arr[i] < largest){
                sLargest = arr[i];
            }
        }
        return sLargest == INT_MIN ? -1 : sLargest;
    }
};