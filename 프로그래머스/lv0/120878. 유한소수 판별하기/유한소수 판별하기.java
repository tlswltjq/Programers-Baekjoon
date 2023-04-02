class Solution {
    public int solution(int a, int b) {
        int answer = 1;
        int gcd = GCD(a, b);
        b = b/gcd;

        while(b!=1){
            if (b%2!=0&&b%5!=0){
                answer = 2;
                break;
            }else{
                if (b%2==0){
                    b/=2;
                }
                if (b%5==0){
                    b/=5;
                }
            }
        }

        return answer;
    }
    public int GCD(int a, int b){
        while(a !=0){
            if (a<b){
                int tmp =a;
                a = b;
                b = tmp;
            }
            a%=b;
        }
        return b;
    }

}