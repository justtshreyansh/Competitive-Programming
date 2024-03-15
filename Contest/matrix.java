import java.util.Scanner;

public class matrix{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int matrix[][] = new int[n][m];
        for(int chuchi =0;chuchi<n;chuchi++){
            for(int dudhu=0;dudhu<m;dudhu++){
                matrix[chuchi][dudhu] = sc.nextInt();

            }
        }
        for(int chuchi =0;chuchi<n;chuchi++){
            for(int dudhu=0;dudhu<m;dudhu++){
               System.out.print(matrix[dudhu][chuchi]);
               System.out.print(" ");

            }
            System.out.println();;
        }
        
    }
}