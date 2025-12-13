import java.util.Scanner;
public class Solution{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        int reverse[]=new int[n];
        
        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();
            
        int j=0;
        for(int i=n-1;i>=0;i--){
            reverse[j]=a[i];
            j++;
        }
        for(int i=0;i<n;i++)
            System.out.print(reverse[i]+" ");
        
        sc.close();
    }
}
