import java.util.Arrays;

class Solution {
    public int[] solution(int m, int n, int startX, int startY, int[][] balls) {
        int[] answer = new int[balls.length];
        int[] tmp = new int[4];
        int idx = 0;
        for(int[] i : balls){
            tmp[0] = (int)(Math.pow(i[0] + startX, 2) + Math.pow(i[1] - startY, 2));                    //l
            tmp[1] = (int)(Math.pow(m - i[0] + m - startX, 2) + Math.pow(i[1] - startY, 2));            //r
            tmp[2] = (int)(Math.pow(i[0] - startX, 2) + Math.pow(n - i[1] + n - startY, 2));            //t
            tmp[3] = (int)(Math.pow(i[0] - startX, 2) + Math.pow(i[1] + startY, 2));                    //b

            if(startY==i[1]){
                if(startX<i[0]){
                    tmp[1] = Integer.MAX_VALUE;
                }else{
                    tmp[0] = Integer.MAX_VALUE;
                }
            }else if (startX==i[0]){
                if(startY>i[1]){
                    tmp[3] = Integer.MAX_VALUE;
                }else{
                    tmp[2] = Integer.MAX_VALUE;
                }
            }else{

            }
            Arrays.sort(tmp);
            answer[idx] = tmp[0];
            idx++;
        }


        return answer;
    }
}