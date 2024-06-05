class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int i = 0;
        int j = people.size() - 1;

        int count = 0;
        while(i<=j) {
            if(people[i] + people[j] <= limit) {
                i++;
                
            }
           count++;
           j--;

        }

        return count;
        
    }
};

















//  1.Try sorting the array.
// 2.Initialize one pointer to start and one to end and traverse untill both passes each other.
// Now Try to think for conditions of 2 pointers..
