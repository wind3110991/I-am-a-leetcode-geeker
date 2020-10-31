class Solution {
    public String longestCommonPrefix(String[] strs) {
        String commonPrefix = "";
        if (strs.length < 1){
            return commonPrefix;
        }
        int minLength = strs[0].length();
        String minStr = strs[0];

        for (int k = 0 ; k < minLength; k++ ){
            String tmpCommonPrefix = commonPrefix + minStr.substring(k,k+1);
            for (int j = 0; j < strs.length; j++){
                if (k >= strs[j].length() || !strs[j].startsWith(tmpCommonPrefix)){
                    return commonPrefix;
                }
            }
            commonPrefix = tmpCommonPrefix;
        }

        return commonPrefix;
    }
}
