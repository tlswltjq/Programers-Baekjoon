class Solution {
    public int solution(int n) {
            int answer = 0;
            for(int i = 1 ; i<=n/2;i++){
                if (n%i ==0){
                    answer++;
                }
            }
            if (answer%2 ==1){
                answer = 2;
            }else{
                answer = 1;
            }
            return answer;
        }
}