class Solution {
    public String solution(String letter) {
        StringBuffer sb = new StringBuffer();
        String[] tmp = letter.split(" ");
        String[] morse = {
                ".-","-...","-.-.","-..",".","..-.",
                "--.","....","..",".---","-.-",".-..",
                "--","-.","---",".--.","--.-",".-.",
                "...","-","..-","...-",".--","-..-",
                "-.--","--.."};
        for(int i = 0 ; i<tmp.length;i++){
            for(int j = 0 ; j<morse.length;j++){
                if(tmp[i].equals(morse[j])){
                    sb.append((char)(j+97));
                }
            }
        }


        return sb.toString();
    }
}