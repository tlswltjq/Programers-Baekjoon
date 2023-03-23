import java.util.Arrays;

class Solution {
    public int solution(String before, String after) {
        char[] tmp1 = before.toCharArray();
        char[] tmp2 = after.toCharArray();
        Arrays.sort(tmp1);
        Arrays.sort(tmp2);
                
        if(Arrays.equals(tmp1,tmp2)){
            return 1;
        }else{
            return 0;
        }
    }
}