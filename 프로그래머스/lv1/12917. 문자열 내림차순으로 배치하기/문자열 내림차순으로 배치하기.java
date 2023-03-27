import java.util.Arrays;

class Solution {
    public String solution(String s) {
        StringBuffer sb = new StringBuffer();
        char[] chr =s.toCharArray();
        Arrays.sort(chr);
        for(int i = s.length()-1;i>=0;i--){
            sb.append(chr[i]);
        }
        return sb.toString();
    }
}