class Solution {
    public String solution(String my_string) {
        StringBuffer sb = new StringBuffer();
        
        for(int i = 0; i<my_string.length();i++){
            if(!(my_string.charAt(i)=='a'||my_string.charAt(i)=='i'||my_string.charAt(i)=='e'||my_string.charAt(i)=='o'||my_string.charAt(i)=='u')){
                sb.append(my_string.charAt(i));
            }
        }
        return sb.toString();
    }
}