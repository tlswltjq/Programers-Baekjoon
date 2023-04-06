public class Solution {
    boolean solution(String s) {
        boolean answer = true;
        int count = 0;
        char[] chr = s.toCharArray();
        for(char c : chr){
            if (count<0){
                answer = false;
                break;
            }
            if (c =='('){
                count++;
            }else{
                count--;
            }
        }
        if (count !=0){
            answer = false;
        }
        return answer;
    }
}
