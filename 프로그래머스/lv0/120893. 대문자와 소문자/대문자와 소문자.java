class Solution {
    public String solution(String my_string) {

        StringBuffer sb = new StringBuffer();

        for(int i = 0 ; i<my_string.length();i++){
            if(Character.isLowerCase(my_string.charAt(i))){
                sb.append((char)(my_string.charAt(i)-32));
            }else{
                sb.append((char)(my_string.charAt(i)+32));
            }
        }

        return sb.toString();
    }
}