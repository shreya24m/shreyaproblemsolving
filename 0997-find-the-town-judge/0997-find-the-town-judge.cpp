class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<int> inDegree(n + 1, 0);
        vector<int> outDegree(n + 1, 0);

        for(auto t : trust) {

            int person = t[0];
            int judge = t[1];

            outDegree[person]++;
            inDegree[judge]++;
        }

        for(int person = 1; person <= n; person++) {

            if(inDegree[person] == n - 1 &&
               outDegree[person] == 0) {
                return person;
            }
        }

        return -1;
    }
};