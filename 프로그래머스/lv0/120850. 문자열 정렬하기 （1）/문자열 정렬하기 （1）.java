import java.util.Arrays;

class Solution {
    public int[] solution(String my_string) {

        StringBuffer sb = new StringBuffer();
        for(int i = 0 ; i <my_string.length();i++){
            if(my_string.charAt(i)>=48 &&my_string.charAt(i)<=57){
                sb.append(my_string.charAt(i));
            }
        }
        int[] answer = new int[sb.toString().length()];
        for(int i = 0 ; i< answer.length;i++){
            answer[i]= sb.toString().toCharArray()[i]-48;
        }
        Arrays.sort(answer);
        return answer;
    }
}