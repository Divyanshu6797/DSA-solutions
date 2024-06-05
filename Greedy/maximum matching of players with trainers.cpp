class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n1 = trainers.size();
        int n2 = players.size();
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        int i = 0;
        int j = 0;

        int count = 0;
        while(i<n1 && j<n2) {
            if(trainers[i] < players[j]) {
                i++;
            }
            else if(players[j] <= trainers[i]) {
                i++;
                j++;
                count++;
            }

        }
        return count;
        
    }
};
