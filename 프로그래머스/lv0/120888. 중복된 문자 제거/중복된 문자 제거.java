class Solution {
    public String solution(String my_string) {
        StringBuffer sb = new StringBuffer();
        char[] tmp = my_string.toCharArray();
        for(int i = 0 ; i<tmp.length-1;i++){
            for(int j = i+1;j<tmp.length;j++){
                if(tmp[i]==tmp[j]){
                    tmp[j]='0';
                }
            }
        }
        for(char i : tmp){
            if (i !='0'){
                sb.append(i);
            }
        }
        
        return sb.toString();
    }
}