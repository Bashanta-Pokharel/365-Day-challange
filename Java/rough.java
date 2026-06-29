import java.util.*;


 class rough {
     public static void main(String[] args) {
         HashSet<String> hs =new HashSet<String>();
         hs.add("bashanta");
         hs.add("salim");
         hs.add("sweekriti");
         hs.add("baitullah");
         hs.add("asish");
         hs.add("Susmita");
         hs.add("Aastha");
         hs.add("Amit");
         hs.add("BIki");
         hs.add("jiwan");
         hs.add("Bipina");
        int a = hs.size();
       
         System.out.println(""+hs);
         System.out.println("size =="+a);
          hs.remove("baitullah");
          System.out.println("after baitullah remove"+hs);
          System.out.println("hash set has sweekriti=="+hs.contains("sweekriti"));
          hs.clear();
          
     }
    
}
