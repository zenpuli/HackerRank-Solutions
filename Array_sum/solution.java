import java.util.Scanner;
public class Solution{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        int array_sum=0;
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
            array_sum+=a[i];
        }
        System.out.print(array_sum);
    }
}
