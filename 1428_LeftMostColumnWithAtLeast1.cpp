/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int n = binaryMatrix.dimensions()[0];
        int m = binaryMatrix.dimensions()[1];
        int i = 0;
        int j = m-1;
        int ans = -1;
        while(i<n && j>=0) {
            if(binaryMatrix.get(i,j) == 1) {
                ans = j;
                j--;
            }
            else
                i++;
        }
        
        return ans;
    }
};