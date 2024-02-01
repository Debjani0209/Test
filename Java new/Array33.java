import java.util.Scanner;
class Array32{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows and columns of the matrix: ");
        int rows = scanner.nextInt();
        int columns = scanner.nextInt();

        int[][] matrix = new int[rows][columns];

        System.out.println("Enter the elements of the matrix:");

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        if (isLowerTriangular(matrix, rows, columns)) {
            System.out.println("The matrix is a lower triangular matrix.");
        } else {
            System.out.println("The matrix is not a lower triangular matrix.");
        }

        scanner.close();
    }

    static boolean isLowerTriangular(int[][] matrix, int rows, int columns) {
        for (int i = 0; i < rows; i++) {
            for (int j = i + 1; j < columns; j++) {
                if (matrix[i][j] != 0) {
                    return false;
                }
            }
        }
        return true;
    }
}