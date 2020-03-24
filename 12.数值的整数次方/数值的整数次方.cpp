class Solution {
public:
    double Power(double base, int exponent) {
        double res = 1;
        double curr = base;
        int exp;
        if(exponent>0){
            exp = exponent;
        }else if(exponent<0){
            if(base==0){
                cout<<"分母不能为0"<<endl;
                return 0;
            }
            exp = -exponent;
        }else{
            return 1;
        }
        while(exp!=0){
            if((1&exp)==1){
                res*=curr;
            }
            curr*=curr;
            exp>>=1;
        }
        return exponent>0?res:1/res;
    }
};