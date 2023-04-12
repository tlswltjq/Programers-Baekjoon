class Solution {
    public int solution(int[] sides) {
        int answer = 0;
        for(int i = 1; i<sides[0]+sides[1];i++){
            int most;
            int els;
            if (sides[0] > sides[1]){
                if (sides[0]> i){
                    most = sides[0];
                }else{
                    most = i;
                }
            }else{
                if (sides[1]> i){
                    most = sides[1];
                }else{
                    most = i;
                }
            }
            els = sides[0]+sides[1]+i-most;

            if(isTriangle(most,els)){
                answer++;
            }
        }
        return answer;
    }
    public boolean isTriangle(int lng, int b){
        return lng < b ?  true :  false;
    }
}