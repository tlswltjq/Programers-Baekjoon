class Solution {
    public String solution(String s) {
        StringBuffer sb = new StringBuffer();
        char[] uTmp = s.toUpperCase().toCharArray();
        char[] lTmp = s.toLowerCase().toCharArray();
        int sch = 0;

        for(int i = 0; i<s.length();i++){
            if(s.charAt(i)==' '){
                sch =1;
            }
            if (sch == 0){
                sb.append(uTmp[i]);
                sch = 1;
            }else{
                sb.append(lTmp[i]);
                sch = 0;
            }
        }

        return sb.toString();
    }
}