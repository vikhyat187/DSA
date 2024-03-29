class Solution {
    public int numUniqueEmails(String[] emails) {
        Set<String> normalisedEmail = new HashSet<>();
        
        for (String email : emails){
            String []parts = email.split("@");
            String []local = parts[0].split("\\+");
            normalisedEmail.add(local[0].replace(".","") + "@" + parts[1]);
        }
        return normalisedEmail.size();
        
    }
}