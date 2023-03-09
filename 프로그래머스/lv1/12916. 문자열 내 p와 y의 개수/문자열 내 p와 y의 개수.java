class Solution {
    boolean solution(String s) {
        boolean answer = true;
        String[] str = s.split("");
        int count = 0;
        for (String asd : str){
            if(asd.equals("p")||asd.equals("P")){
                count++;
            } else if (asd.equals("y")||asd.equals("Y")){
                count--;
            }
        }
        if (count != 0){
            answer=false;
        }
        System.out.println(count);
        return answer;
    }
}