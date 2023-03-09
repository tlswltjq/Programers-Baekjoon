class Solution {
    public String solution(int n) {
        String answer = "";
        String s = "수";
        String b = "박";
        int count = 1;
        int num =n;
        while(num!=0){
            if(count%2==0){
                answer+=b;
            }else{
                answer+=s;
            }
            num--;
            count++;
        }
        return answer;
    }
}