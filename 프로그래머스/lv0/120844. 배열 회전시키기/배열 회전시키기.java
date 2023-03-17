class Solution {
    public int[] solution(int[] numbers, String direction) {
        int[] answer = new int[numbers.length];
        if(direction.equals("right")){
            for(int i = 0 ; i < numbers.length;i++){
                if (i == numbers.length-1){
                    answer[0] = numbers[i];
                }else{
                    answer[i+1]=numbers[i];
                }
            }
        } else if (direction.equals("left")) {
            for(int i = 0 ; i < answer.length-1;i++){
                if(i ==0){
                    answer[answer.length-1] = numbers[0];
                    answer[0] = numbers[1];
                }else{
                    answer[i] = numbers[i+1];
                }
            }
        }


        return answer;
    }
}