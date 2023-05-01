class Solution {
public:
    double average(vector<int>& salary) {
        double res;
        int n=salary.size(),sum=0;
        sort(salary.begin(),salary.end());
        for(int i=0;i<salary.size();i++)
        {
            sum+=salary[i];
        }
        res = sum - (salary[0] + salary[n-1]);
        res/=(n-2);
        return res;
    }
};
