class Solution {
    public String solution(int age) {

        StringBuffer sb = new StringBuffer();
        while(age!=0){
            sb.append((char)(age%10+97));
            age/=10;
        }
        
        return sb.reverse().toString();
    }
}