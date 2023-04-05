class Solution {
    public String solution(String s) {
        int max=Integer.MIN_VALUE;
        int min=Integer.MAX_VALUE;
        String[] tmp = s.split(" ");
        for(String i : tmp){
            
            max = max < Integer.parseInt(i) ? max = Integer.parseInt(i) : max;
            min = min > Integer.parseInt(i) ? min = Integer.parseInt(i) : min;
        }
        return String.valueOf(min)+ " "+ String.valueOf(max);
    }
}