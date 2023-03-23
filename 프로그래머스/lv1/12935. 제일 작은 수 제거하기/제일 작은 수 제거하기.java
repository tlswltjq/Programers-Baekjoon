class Solution {
    public int[] solution(int[] arr) {
        int[] answer = new int[arr.length-1];
        int idx = 0;
        int min = Integer.MAX_VALUE;
        
        if (arr.length ==1){
            return new int[] {-1};
        }else{
            for(int i : arr){
                min = i<min ? i : min;
            }
            for(int i :arr){
                if (i != min){
                    answer[idx]= i;
                    idx ++;
                }
            }    
        }
        return answer;
    }
}