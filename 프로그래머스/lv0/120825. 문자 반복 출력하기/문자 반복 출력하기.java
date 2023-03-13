class Solution {
    public String solution(String my_string, int n) {
        StringBuffer sb = new StringBuffer();
        char[] chr = my_string.toCharArray();
        for(int i = 0 ; i <chr.length;i++){
            for(int j = 0;j<n;j++){
                sb.append(chr[i]);
            }
        }
        return sb.toString();
    }
}