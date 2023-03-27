import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;

class Solution {
    public int[] solution(int[] emergency) {
        int[] answer = new int[emergency.length];
        int[] order = emergency.clone();
        int idx=0;
        Arrays.sort(order);
        for(int i : emergency){
            for(int j = 0 ; j< order.length;j++){
                if(i==order[j]){
                    answer[idx++] = order.length-j;

                }
            }
        }
        return answer;
    }
}