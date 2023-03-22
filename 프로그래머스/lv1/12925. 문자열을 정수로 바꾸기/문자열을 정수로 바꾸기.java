class Solution {
    public int solution(String s) {
        int answer = 0;
        int i = s.charAt(0)=='-' ||s.charAt(0)=='+' ? 1:0;
        for(; i<s.length();i++){
            answer*=10;
            answer += s.charAt(i)-48;
        }

        answer = s.charAt(0)=='-' ?  -answer : answer;
        return answer;
    }
}