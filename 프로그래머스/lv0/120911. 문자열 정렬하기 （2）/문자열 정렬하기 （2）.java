
import java.util.Arrays;

class Solution {
    public String solution(String my_string) {
        char[] tmp = my_string.toLowerCase().toCharArray();
        Arrays.sort(tmp);
        String answer = new String(tmp);
        
        return answer;
    }
}