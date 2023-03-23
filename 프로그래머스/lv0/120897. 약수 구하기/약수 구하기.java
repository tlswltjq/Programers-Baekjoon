class Solution {
    public int[] solution(int n) {
        int[] tmp = new int[n/2];
        if(n ==1){
            
            return  new int[] {1}; 
        }
        int idx =0;
        for(int i = 1; i<=n;i++){
            if (n%i==0){
                tmp[idx]= i;
                idx++;
            }
        }
        
        int[] answer = new int[idx];

        for(int i = 0 ; i <answer.length;i++){
            answer[i] = tmp[i];
        }
        return answer;
    }
}