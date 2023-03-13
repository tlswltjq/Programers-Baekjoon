class Solution {
    public String solution(String my_string, String letter) {
        StringBuffer sb = new StringBuffer();
        char[] chr= my_string.toCharArray();
        char[] chr2 = letter.toCharArray();
        for(char a : chr){
            if (a ==chr2[0]) {
                continue;
            }else{
                sb.append(a);
            }
        }
        return sb.toString();
    }
}