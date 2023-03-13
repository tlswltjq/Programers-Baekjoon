class Solution {
    public String solution(String my_string) {
        StringBuffer sb = new StringBuffer();
        char[] chr = my_string.toCharArray();
        
        for(int i = 0 ; i <chr.length;i++){
            sb.append(chr[chr.length-1-i]);
        }
        return sb.toString();
    }
}