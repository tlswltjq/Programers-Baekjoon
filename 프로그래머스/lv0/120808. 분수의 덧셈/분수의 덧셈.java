class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        GCD gd = new GCD();
        int[] answer = {numer1*denom2+numer2*denom1,denom1*denom2};
        int gcd =gd.GCD(answer[0], answer[1]);
        for(int i =0;i< answer.length;i++){
            answer[i]/=gcd;
        }
        return answer;
    }
    public class GCD {
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

}