class Solution {
    public String solution(String my_string, int num1, int num2) {

        char[] chr = my_string.toCharArray();
        char tmp = chr[num1];
        chr[num1]= chr[num2];
        chr[num2] = tmp;
        String answer = new String(chr);
        return answer;
    }
}