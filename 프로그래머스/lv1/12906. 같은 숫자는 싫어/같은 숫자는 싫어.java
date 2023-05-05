import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        int[] answer = new int[arr.length];
        int top = 0;
        for(int i = 0 ; i < arr.length; i++){
            answer[i]= 999;
        }

        for(int i = 0 ; i < arr.length; i++){

            if(top!=0 && arr[i]== answer[top-1]){
                answer[top+1]=999;
            }else{
                answer[top] =arr[i];
                top++;
            }
        }

        int[] realAnswer = new int[top];
        for(int i = 0 ; i < top;i++){
            realAnswer[i] = answer[i];
        }

        return realAnswer;
    }
}