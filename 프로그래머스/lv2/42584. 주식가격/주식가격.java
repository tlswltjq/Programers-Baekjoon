import java.util.LinkedList;
class Solution {
    public int[] solution(int[] prices) {
        int[] answer = new int[prices.length];
        for(int i = 0 ; i< prices.length; i ++){
            int tt = 0;
            for(int j =i+1; j< prices.length; j++){
                tt++;
                if(prices[i]>prices[j]){
                    break;
                }
            }
            answer[i] = tt;
        }
        return answer;
    }
}