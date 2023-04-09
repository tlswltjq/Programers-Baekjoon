class Solution {
    public int solution(int n) {
        int answer = 0;
        for(int i = n+1; ;i++){
            if (Binarycount(i)==Binarycount(n)){
                answer = i;
                break;
            }
        }
        return answer;
    }
    public int Binarycount(int num){
        int count =0;
        while (num!=0){
            if(num%2==1){
                count++;
            }
            num/=2;
        }
        return count;
    }


}