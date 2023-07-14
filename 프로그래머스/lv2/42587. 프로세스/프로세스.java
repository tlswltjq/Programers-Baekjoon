import java.util.LinkedList;

class Solution {
    class Ps{
        boolean target;
        int prioity;
        Ps(boolean t, int p){
            target=t;
            prioity = p;
        }
    }
    public int solution(int[] priorities, int location) {
        LinkedList<Ps> printer = new LinkedList<>();
        int answer = 0;

        for(int i = 0 ; i < priorities.length; i++){
            if (i ==location){
                printer.add(new Ps(true, priorities[i]));
            }else {
                printer.add(new Ps(false, priorities[i]));
            }
        }
        while (!printer.isEmpty()){
            Ps now = printer.remove();
            boolean ptable= true;
            for(Ps p : printer){
                if (p.prioity> now.prioity){
                    ptable = false;
                    break;
                }
            }
            if (ptable){
                answer++;
            }else{
                printer.add(now);
                continue;
            }
            if (now.target){
                return answer;
            }

        }
        return answer;
    }

}