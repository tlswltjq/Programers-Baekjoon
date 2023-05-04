class Solution {
    public String solution(String s) {
        StringBuilder sb = new StringBuilder();
        s = s.toLowerCase();

        for(int i = 0; i <s.length();i++){
            if (!(s.charAt(i)>=48 && s.charAt(i)<=57)&&(i==0 || s.charAt(i-1)==32)){
                if (s.charAt(i)==32){
                    sb.append(s.charAt(i));
                }else{
                    sb.append((char)(s.charAt(i)-32));
                }
            }else{
                sb.append(s.charAt(i));
            }
        }
        return sb.toString();
    }
}