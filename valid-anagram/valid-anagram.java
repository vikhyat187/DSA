class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length()!=t.length())return false;
        s=sortString(s);
        t=sortString(t);
        System.out.println(s + " "+ t);
        for (int i=0;i<s.length();i++){
            if (s.charAt(i)!=t.charAt(i))return false;
        }
        
        return true;
    }
    private String sortString(String s){
        char arr[]=s.toCharArray();
        Arrays.sort(arr);
        
       return new String(arr);
    } 
        // private String sortString(String s){
    //     char arr[]=s.toCharArray();
    //     int first=0,second=1;
    //     char temp;
    //     while(first<arr.length){
    //         second=first+1;
    //         while(second<arr.length){
    //             if (arr[second]<arr[first]){
    //                 temp=arr[first];
    //                 arr[first]=arr[second];
    //                 arr[second]=temp;
    //             }
    //             second++;
    //         }
    //         first++;
    //     }
    //     String res=String.valueOf(arr);
    //     return res;
    // }
}