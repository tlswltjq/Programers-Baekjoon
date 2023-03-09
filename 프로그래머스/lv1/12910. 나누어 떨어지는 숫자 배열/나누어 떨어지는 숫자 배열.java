import java.util.*;
class Solution {
    public int[] solution(int[] arr, int divisor) {
                    int[] answer = {};

            Arrays.sort(arr);
            ArrayList<Integer> list = new ArrayList<>();

            for(int j = 0; j<arr.length;j++){
                if(arr[j]%divisor==0){
                    list.add(arr[j]);
                }
            }

            if(list.size()==0){
                list.add(-1);
            }

            answer = list.stream().mapToInt(Integer::intValue).toArray();

            return answer;
}
}