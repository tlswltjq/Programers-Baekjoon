class Solution {
    public int[] solution(int n, int m) {
        int[] answer = {GCD(n, m), n*m/GCD(n, m)};
        return answer;
    }
    public int GCD(int a, int b){
        while(b!=0){
            int r =a%b;
            a = b;
            b= r;
        }
        return a;
    }
}