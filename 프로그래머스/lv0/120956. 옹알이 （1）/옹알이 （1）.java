class Solution {
    public int solution(String[] babbling) {
        int answer = 0;
        String pattern = "^(aya|ye|woo|ma){1,}$";
        for(int i = 0 ; i<babbling.length;i++){
            if(babbling[i].matches(pattern)){
                answer++;
            }
        }
        return answer;
    }
}