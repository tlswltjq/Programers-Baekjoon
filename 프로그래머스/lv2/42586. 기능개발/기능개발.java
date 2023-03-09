import java.util.*;
class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        Queue<Integer> que = new LinkedList<>();
        int[] answer = {};

        for(int i = 0; i < progresses.length; i++){
            que.offer((int)Math.ceil((double)(100-progresses[i])/speeds[i]));
        }
//        System.out.println(que);//[7, 3, 9]

        ArrayList<Integer> list = new ArrayList<>();

        while(!que.isEmpty()) {
            int cur = que.poll();
            int num = 1;

            while(true) {
                int next = 0;
                if(que.size() > 0) next = que.peek();
                else break;

                if(cur >= next) {
                    que.poll();
                    num++;
                } else break;
            }

            list.add(num);
        }
        System.out.println(list);

        answer = list.stream().mapToInt(Integer::intValue).toArray();

        return answer;
    }
}