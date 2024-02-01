import java.util.Scanner;
class Array33 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the order of the square matrix: ");
        int order = sc.nextInt();

        int[][] matrix = new int[order][order];

        System.out.println("Enter the elements of the matrix:");

        for (int i = 0; i < order; i++) {
            for (int j = 0; j < order; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        int sum = findSumOfUpperTriangular(matrix, order);
        
        System.out.println("Sum of upper triangular matrix elements: " + sum);

        sc.close();
    }

    static int findSumOfUpperTriangular(int[][] matrix, int order) {
        int sum = 0;

        for (int i = 0; i < order; i++) {
            for (int j = i; j < order; j++) {
                sum += matrix[i][j];
            }
        }

        return sum;
    }
}
