class Solution {
public:
    int tribonacci(int n) {
        vector<int>v(38,0);
        v[0] = 0;
        v[1] = 1;
        v[2] = 1;
        if( n <= 2){
            return v[n];
        }
        for(int i = 3; i<=37;i++){
            v[i] = v[i-1] + v[i-2] + v[i-3];
            cout << v[i]<<endl;
        }
        return v[n];
    }
};