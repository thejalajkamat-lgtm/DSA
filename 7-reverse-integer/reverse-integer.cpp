class Solution {
public:
    int reverse(int x) {
        long int ans = 0;
        long int min = pow(-2, 31);
        long int max = pow(2, 31) - 1;
        while(x != 0){
            int digit = x%10;
            if((ans>max/10) || (ans<min/10)){
                return 0;
            }
            ans = ans*10 + digit;
            x = x/10;
        }
        return ans;
    } 
};