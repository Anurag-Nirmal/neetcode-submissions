class Solution {
public:
    int getSum(int a, int b) {
     int sum = a^b;
     int carry = a&b;

        while(carry != 0){
            carry = carry << 1;
            int newCarry = sum & carry;
            sum = sum ^ carry;
            carry = newCarry;
        }  
     return sum;  
    }
};
