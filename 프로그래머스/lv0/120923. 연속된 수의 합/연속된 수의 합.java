class Solution {
    public int[] solution(int num, int total) {
        int[] answer = new int[num];
        answer[0]= 1-answer.length*2;
        int asrTotal = answer[0];
        for(int i = 1;i< answer.length;i++){
            answer[i]= answer[i-1]+1;
            asrTotal+=answer[i];
        }
        while(asrTotal!=total){
            for(int i = 0 ; i< answer.length;i++){
                answer[i]++;
                asrTotal++;
            }

        }
        return answer;
    }
}